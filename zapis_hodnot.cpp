#include <iostream>
#include <fstream>
int main(){


   std::string Jmeno;
   std::cout << "Jmeno: ";
   std::cin >> Jmeno;

   std::string Prijmeni;
   std::cout << "Prijmeni: ";
   std::cin >>Prijmeni;

   double vyska;
   std::cout << "Vyska [cm]: ";
   std::cin >>vyska;
  do{
  do{

  if(vyska > 230){
       std::cout << "Vysoka hodnota vysky." <<std::endl;
       std::cout << "Zadej vysku znovu." <<std::endl;
       std::cin >> vyska;

   }
   else if (vyska <100) {
       std::cout << "Nizka hodnota vysky."<<std::endl;
       std::cout << "Zadej vysku znovu." <<std::endl;
       std::cin >> vyska;



   }
  } while (vyska>230);
  } while (vyska<100);
   int vek;

   std::cout << "Vek: ";
   std::cin >> vek ;
do{
do{

   if(vek>120){
       std::cout << "Vysoka hodnota veku. " <<std::endl;
       std::cout << "Zadej znovu. " <<std::endl;
        std::cin >> vek;
   }
   else if (vek<18) {
       std::cout << "Nizka hodnota veku. "<<std::endl;
       std::cout << "Zadej znovu. " <<std::endl;
        std::cin >> vek;
   }
}while (vek>120);
}while (vek<18);



std::cout << "Jake je Vase dosazene vzdelani? " << '\n';
std::cout << "Zakladni vzdelani = 1 " << '\n';
std::cout << "Stredoskolske vzdelani = 2 " << '\n';
std::cout << "Vysokoskolske vzdelani = 3 " << '\n';
int vzdelani;
std::cin >> vzdelani;
do{
do{
if(vzdelani==1) {
  std::cout << "Dosahl jste zakladniho vzdelani."<< '\n'; ;
}

  else if(vzdelani==2) {
  std::cout << "Dosahl jste stredoskolskeho vzdelani."<< '\n'; ;
}
  else if(vzdelani==3) {
  std::cout << "Dosahl jste vysokoskolskeho vzdelani."<< '\n'; ;
}
  else {
    std::cout << "Zadejte pouze z moznych odpovedi. "<< '\n';;
    std::cin >> vzdelani;
  }
} while(vzdelani>3);
} while(vzdelani<1);

std::cout << "Udaje o Vas: " << '\n';;
std::cout << "Vase jmeno je " <<Jmeno <<" "<< Prijmeni <<".";
std::cout << "Merite " << vyska <<" cm a je Vam " << vek<< " let.";
std::cout << " Dosahl/a jste";
if(vzdelani==1) {
  std::cout << " zakladniho vzdelani."<< '\n'; ;
}

  else if(vzdelani==2) {
  std::cout << " stredoskolskeho vzdelani."<< '\n'; ;
}
  else if(vzdelani==3) {
  std::cout << " vysokoskolskeho vzdelani."<< '\n'; ;

  }




    return 0;

}
