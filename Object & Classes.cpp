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

};


int main()
{

    cout<<"Hello  World"<< endl;
    // created an object.
    Mandalorian Mando;

    Mando.Name = "Din Djarin";
    Mando.Species = "Human";
    Mando.Age = 35;
    Mando.Height = 180;

    cout << "Name: " << Mando.Name << endl;  
    cout << "Species: " << Mando.Species << endl;
    cout << "Age: " << Mando.Age << endl;
    cout << "Height: " << Mando.Height << endl;

    return 0;

}

