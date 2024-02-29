// Shalow Copy: It means if you have an Object named hero1 and you copy hero1 to hero2 object using default copy constructor method(pre defined) then the changes you make in obj hero1 will also be reflected to hero2 (and vice versa) exactly same as hero1. means both the hero1 and hero2 point to the same memory location
// The following example shows that concept

#include <iostream>
#include <string.h>
using namespace std;

class Hero // User Defined Data Type
{
    // private:
    // only for example

public:
    int health;
    int level;
    char *name = new char[100];
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

    Hero(int health, int level, char name[]) // User Defined Constructor with PARAMETER
    {
        this->health = health;
        this->level = level;
        strcpy(this->name, name);
    }

    // Hero(Hero &temp) // Copy Constructor
    // {
    //     cout << "Inside Constructor: " << endl;
    //     cout << "Copying Obj: " << endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    //     this->name = temp.name;
    //     cout << "Copy Successful Obj: " << endl;
    //     cout << "Exited Constructor: " << endl;
    // }

    void setHealth(int health)
    {
        this->health = health;
    }

    int getHealth()
    {
        return this->health;
    }

    void setLevel(int level)
    {
        this->level = level;
    }

    int getLevel()
    {
        return this->level;
    }
    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    string getName()
    {
        return this->name;
    }
    void showData()
    {
        cout << "[Name: " << this->name << ", Health: " << this->health << ", Level: " << this->level << "]" << endl;
    }
};

int main()
{
    Hero shadow;
    cout << endl;

    // Setting Up Values
    shadow.setHealth(10);
    shadow.setLevel(25);
    char name[7] = "shadow";
    shadow.setName(name);

    // Printing Before
    cout << "Before Shadow:";
    shadow.showData();

    Hero titanShadow(shadow); // Copying

    // Printing Titan Shadow
    cout << "Before titanShadow:";
    titanShadow.showData();

    cout << endl;
    cout << "Changing shadow name to Widow using SHALOW COPY CONCEPT" << endl;
    cout << endl;

    // Changing name "shadow to Widow"
    char newName[6] = "Widow";
    titanShadow.setName(newName); // Changes will be reflected to titanShadow also.

    // Printing
    cout << "After Shadow:";
    shadow.showData();

    cout << "After titanShadow:";
    titanShadow.showData();

    cout << endl;
}
