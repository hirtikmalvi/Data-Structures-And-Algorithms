// Destructor = Memory Cleaning(Freeing) (for that particular Object)
//  Destructor is a function/method that is automatically called/invoked when the Scope of the object is going to finis. means the curly braces {} is reached
//  Destructor has same name as class
//  Destructor has no input parameter, return type. and it is PRE DEFINED
//  For STATICALLY defined object, it is automatically called. aft
//  For DYNAMICALLY defined object, We have to call it by using syntax as ~Hero(){...}
//  The simple meaning is you can't access that object after the Destructor called.

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

    ~Hero()
    {
        cout << "Destructor is called for DYNAMICALLY defined object" << endl;
    }
};

int main()
{
    {
        Hero shadow;
        Hero *hermit = new Hero; // You can use it as well
    }
}
