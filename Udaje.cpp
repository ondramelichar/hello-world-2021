#include "Udaje.h"
#include <iostream>

Udaje::Udaje()
{
    name=jmeno();
    surname=prijmeni();
    height=vyska();
    age=vek();
    edu=vzdelani();

}


std::string Udaje::jmeno(){
        std::cout << "Zadejte sve jmeno: ";
        std::cin >> input;
        return input;
}

std::string Udaje::prijmeni(){
    std::cout << "Zadejte sve prijmeni: ";
    std::cin >> input;
    return input;
}

float Udaje::vyska(){
    check = true;
    do{
        std::cout<<"Zadejte svou vysku [cm]: ";
        std::cin >> input1;
        if (100 < input1 && input1 < 230){
            check = false;
            return input1;
        }
        else{
            std::cout << "Zadal jste nespravne hodnoty!\n ";
        }
    } while (check == true);
}

int Udaje::vek(){
    check = true;
    do{
        std::cout<<"Zadejte svuj vek: ";
        std::cin >> input2;
        if (5 < input2 && input2 < 100){
            check = false;
            return input2;
        }
        else{
            std::cout << "Zadal jsi nespravne hodnoty!\n ";
        }
    } while (check == true);
}

bool Udaje::next(){
    int num;
    std::cout << "Pokud chcete pridat osobu, zadejte `1`, pokud ne, zadejte `0`.";
    std::cin >> num;
    if (num==1){
        return true;
    }
    else{
        return false;
    }
}

std::string Udaje::vzdelani(){

    int skola;
    bool check=true;

    do{
        std::cout << "Zadejte sve nejvyssi dosazene vzdelani: 1-Zakladni 2-Stredni 3-Vysokoskolske \n";
        std::cin >> skola;
        if (skola == 1) {

            check = false;
            return "zakladni";

        }
        else if (skola == 2) {

            check = false;
            return "stredoskolske";
        }
        else if (skola == 3){

            check = false;
            return "vysokoskolske";
        }
        else{
            std::cout << "Zadal jsi nespravne hodnoty!\n ";
            check = true;
        }
    }while (check == true);
}

Udaje::~Udaje()
{
    //dtor
}
