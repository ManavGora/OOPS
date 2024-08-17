#include <iostream>
#include <list>
using namespace std;

// created an class.
class Mandalorian {
public:
    string Name;
    string Species;
    int Age;
    int Height;

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

};


int main()
{

    cout<<"Hello  World"<< endl;

    // Constructor initialization.
    Mandalorian Mando("Din Djarin", "Human", 35, 180);

    Mandalorian Grogu("Grogu Djarin", "Pookie", 50, 30);

    // class methods.
    Mando.GetInfo();

    Grogu.GetInfo();


}

