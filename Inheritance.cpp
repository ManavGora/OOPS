// Inheritance is a key feature of object-oriented programming (OOP) 
//that allows programmers to create new classes based on existing ones.

#include <iostream>
#include <list>
using namespace std;

// created an class.
class Mandalorian {
private:
    
    string Species;
    int Age;
    int Height;

protected:
    string Name;

public:

    // defining Constructor.
    Mandalorian(string name, string species, int age, int height)
    {
        Name = name;
        Species = species;
        Age = age;
        Height = height;
    }

    // class methods.
    void GetInfo()
    {
        cout << "Name: " << Name << endl;  
        cout << "Species: " << Species << endl;
        cout << "Age: " << Age << endl;
        cout << "Height: " << Height << endl;
    }

    // to let the users only modify the required part.
    void In_Age()
    {
        Age++;
    }

    void Dec_Age()
    {
        if(Age > 0)
        {
            Age--;
        }
    }

};

// ** Inheritance **
class BobaFett : public Mandalorian{

public:

    //constructor
    BobaFett(string name, string species, int age, int height) : Mandalorian(name, species, age, height){

    }

    void Practice()
    {
        cout<< Name <<" is practicing for War against the Dark Side."<< endl;
    }

};


int main()
{

    BobaFett Boba("Boba Fett", "Human", 30, 170);

    BobaFett Fennec("Fennec", "Dangerous_Women", 40, 150);

    Boba.Dec_Age();
    Boba.Practice();
    Fennec.Practice();

    Boba.GetInfo();
    Fennec.GetInfo();


}

