#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Udaje.h"

void udaje(std::vector <Udaje>& m){
    bool check = true;
    int i=0;
    do{
        m.push_back(Udaje());
        check=m[i].next();
        i++;
    } while (check==true);
}

void sorting(std::vector <Udaje>& m){
    std::sort(m.begin(),m.end(),[](const Udaje& p1, const Udaje& p2) {
        return p1.surname < p2.surname;
    });
}

void save(std::vector <Udaje>& m){
    std::ofstream zapis("data.txt");
    for(int i = 0; i<m.size();i++){
        zapis << m[i].name << " "<< m[i].surname << " "<< m[i].height << " "<< m[i].age << " " << m[i].edu << "\n";
    }
}

int main(){

    std::vector <Udaje> seznam;

    udaje(seznam);
    sorting(seznam);
    save(seznam);


    return 0;
}
