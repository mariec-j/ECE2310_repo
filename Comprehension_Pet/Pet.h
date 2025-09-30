//Pet.h
#include <string>
#ifndef Pet_H
#define Pet_H
using namespace std;

class Pet{
    public:
    //constructors
        Pet();
        Pet(string name, int age, string owner, bool isHouseTrained);

    //mutators
        void updateName(string name);
        void updateAge (int age);
        void updateOwner (string adopter);
        void setHouseTrained();

    //accessors
        string getName() const;
        int getAge() const;
        string getOwner() const;
        bool getisHouseTrained () const;

    private:
        string name;
        int age;
        string owner;
        bool isHouseTrained;
};
#endif