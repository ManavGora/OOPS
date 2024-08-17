// It describes the ability of something to have or to be displayed in more than one form.

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
    string Power;

public:

    // defining Constructor.
    Mandalorian(string name, string species, int age, int height)
    {
        Name = name;
        Species = species;
        Age = age;
        Height = height;
        Power = "NaN";
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
        Power = "Combat and martial skills from a young age.";
        cout<< Power << endl;
    }

};

class Andor : public Mandalorian{

public:

    //constructor
    Andor(string name, string species, int age, int height) : Mandalorian(name, species, age, height){

    }

    void Practice()
    {
        cout<< Name <<" is practicing for War against the Republic."<< endl;
        Power = "Peak Human Physical Characteristics, Is a skilled marksman.";
        cout << Power << endl;
    }

};



int main()
{

    BobaFett Boba("Boba Fett", "Human(Clone)", 50, 170);

    Andor Cassian("Cassian Andor", "Human", 35, 175);

    Boba.Practice();
    Cassian.Practice();


}

