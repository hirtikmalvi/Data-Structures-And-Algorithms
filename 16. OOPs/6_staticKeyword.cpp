// Static keyword is related to class. it has nothing to do with class's object
// That means if your class has static member then you can access it by without making object of that class.
// static int tempVar;
// The synatx is: class_name::staticVariableName = someValue;
// The "::" is scope resolution operator
// The same way you can have static functions as well. as static int function(){ ... }
// The main point is you can only have static members inside static function
// No concept of "this" keyword for static function

#include <iostream>
using namespace std;

class Hero // User Defined Data Type
{
public:
    int health;
    int level;
    string name;
    static int staticVariable;

    Hero()
    {
        cout << "Inside Constructor: " << endl;
        cout << "Exited Constructor: " << endl;
    }
    Hero(int health)
    {
        cout << "Inside Constructor: " << endl;
        this->health = health;
        cout << "Health = " << health << endl;
        cout << "Exited Constructor: " << endl;
    }

    Hero(int health, int level, string name)
    {
        this->health = health;
        this->level = level;
        this->name = name;
    }

    static int staticFunction()
    {
        // int this->health; //Not Valid
        // int health; //Not Valid
        // static int staticVariable; //Valid
        return staticVariable; //  Valid
    }

    ~Hero()
    {
    }
};

int Hero::staticVariable = 5;

int main()
{
    // Accessing static variable/member without making obj of class
    // cout << "Static Variable Value = " << Hero::staticVariable << endl; //Using variable
    cout << "Static Variable Value = " << Hero::staticFunction() << endl; // Using function
    Hero shadow;
    Hero *hermit = new Hero;
}
