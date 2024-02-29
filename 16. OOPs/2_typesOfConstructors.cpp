// Constructor is a function/method that is automatically called/invoked while creation object.
// Constructor has same name as class
// Default constructor has no input parameter, return type. and it is PRE DEFINED
// When USER DEFINED constructor is made the default constructor is being removed automatically and then it does not exist
// IN SHORT, CONSTRUCTOR IS INVOKED AUTOMATICALLY WHILE CREATION OF OBJECT AND IT IS FIRST ONE TO BE EXECUTED.
// types of constructors: Parameterised, Non Parameterised, Copy Constructor

#include <iostream>
using namespace std;

class Hero // User Defined Data Type
{

private:
    // only for example
    int privateHealth;
    int privateLevel;
    string privateName;

public:
    int health;
    int level;
    string name;

    Hero() // User Defined Constructor with NO PARAMETER
    {
        cout << "Inside Constructor: " << endl;
        cout << "Exited Constructor: " << endl;
    }
    Hero(int health) // User Defined Constructor with PARAMETER
    {
        cout << "Inside Constructor: " << endl;
        this->health = health;
        cout << "Health = " << health << endl;
        cout << "Exited Constructor: " << endl;
    }

    Hero(int health, int level, string name) // User Defined Constructor with PARAMETER
    {
        this->health = health;
        this->level = level;
        this->name = name;
    }

    Hero(Hero &temp) // Copy Constructor
    {                // Why &temp instead of only temp?
        //-> to prevent copy con. going to infinite loop. if Hero temp is taken then it is pass by value and it makes copy of object which is same thing what we're trying to do. So this new copy Hero temp will again go to copy constructor and then so on.
        // That's why temp is passed by reference to point the same object

        cout << "Inside Constructor: " << endl;
        cout << "Copying Obj: " << endl;
        this->health = temp.health;
        this->level = temp.level;
        this->name = temp.name;
        cout << "Copy Successful Obj: " << endl;
        cout << "Exited Constructor: " << endl;
    }

    void setPrivateHealth(int privateHealth)
    {
        this->privateHealth = privateHealth; // Easy way
        // (*this).privateHealth = privateHealth;
    }

    int getPrivateHealth()
    {
        return this->privateHealth;
    }
};

int main()
{
    /*{Parameterised and Non Parameterised
        cout << "Before shadow obj: " << endl;
        Hero shadow(10); //Parameterised // Whenever shadow object is created the default constructor is AUTOMATICALLY called
        cout << "After shadow obj: " << endl;
        cout << endl;
        cout << "Before hermit obj: " << endl;
        Hero *hermit = new Hero; //Non Parameterised // Creating shadow object of Hero class DYNAMICALLY. shadow obj is an instance of Hero class.
        cout << "After hermit obj: " << endl;
    }*/

    { // Copy Constructor
        Hero shadow(25, 10, "Titan Shadow");
        Hero titanShadow = shadow;
        cout << endl;
        cout << "titanShadow details which is copy of shadow" << endl;
        cout << "Health " << titanShadow.health << endl;
        cout << "Level " << titanShadow.level << endl;
        cout << "Name " << titanShadow.name << endl;
        // Hero *hermit = new Hero; //You can use it as well
    }
}
