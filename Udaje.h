#ifndef UDAJE_H
#define UDAJE_H
#include <iostream>
#include <vector>


class Udaje
{
    public:
        Udaje();

        virtual ~Udaje();
        std::string name, surname, edu;
        int age;
        float height;
        bool next();
        bool n;


    protected:


    private:
        std::string input;
        std::string jmeno(), prijmeni(), vzdelani();
        float input1;
        int input2;
        bool check;
        int vek();
        float vyska();
};

#endif // UDAJE_H
