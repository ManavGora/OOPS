//Encapsulation is used to hide the values or state of a structured data object inside a class,
// preventing unauthorized parties' direct access to them.

#include <iostream>
#include <list>
using namespace std;

// created an class.
class Mandalorian {
private:
    string Name;
    string Species;
    int Age;
    int Height;

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


int main()
{

    cout<<"Hello  World"<< endl;

    // Constructor initialization.
    Mandalorian Mando("Din Djarin", "Human", 35, 180);

    Mandalorian Grogu("Grogu Djarin", "Pookie", 50, 30);

    Mando.Dec_Age();

    Grogu.In_Age();

    // class methods.
    Mando.GetInfo();

    Grogu.GetInfo();


}

