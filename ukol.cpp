#include<iostream>
#include <vector>
#include<fstream>
#include<string>

std::vector<int> nacti_ze_souboru(std::string nazev_souboru){
                  std::ifstream soubor(nazev_souboru);

                  std::vector<int> vektor;

                  int cislo = 0;
                  soubor >> cislo;

                  while(!soubor.eof()) {
                      vektor.push_back(cislo);
                      soubor >> cislo;

                  }
                     return vektor;
                  }


int main(){

        std::vector<int> muj_vektor = nacti_ze_souboru("data.txt");
        std::cout << "Nacteno" << muj_vektor.size() << "cisel.\n";
        for (int i=0; i<10; ++1) {
            std::cout << muj_vektor[i] << "\n";}

        soubor >> pole[0];
        std::vector<int> muj_vector(10);
        muj_vector= {1,2,3,4,5,11,12,14,16,24};
        muj_vector.push_back(50);

        for(int i=0;  i<muj_vector.size(); ++i) {
            int cislo;
            soubor >> cislo;
            muj_vector[1]= cislo;
            }
        int cislo = 0
        for(int i=0; i<muj_vector.size(); ++i) {}
        int pole[10] = {1,2,3,4,5,11,12,14,16,24};

        pole[0]=5;

        std::vector<int> muj_vector = {1,2,3,4,5,11,12,14,16,24};

        int soucet = 0;

           }
std::cout << soucet;

return 0;
}
