#include <iostream>
using namespace std;

class Hero // User Defined Data Type
{
private: // Access Modifier: private which means behaviour/method or state/properties are only accessible within the class
    // only for example
    int privateHealth;
    int privateLevel;
    string privateName;

public: // Access Modifier: public which means behaviour/method or state/properties are accessible throughout the code
        // By default private
    int health;
    int level;
    string name;

    // GETTERS AND SETTERS
    // Why needed though? to set or access the values of private behaviour/method or state/properties
    void setPrivateHealth(int privateHealth) // This incoming privateHealth is copy which is not original private's privateHealth.
    // To save this copy into private's privateHealth we use "this" keyword.
    //"this" keyword is refers to current object and it is an address of current object.
    {
        this->privateHealth = privateHealth; // Easy way
        // (*this).privateHealth = privateHealth; // Both are same above and this
    }

    int getPrivateHealth()
    {
        return this->privateHealth;
    }
};

int main()
{
    Hero shadow; // Creating shadow object of Hero class STATICALLY. shadow obj is an instance of Hero class. this means we are creating shadow obj of Hero type

    // To access behaviour/method or state/properties of a class we have to use "." (dot) operator.
    shadow.level = 5;
    // shadow.privateHealth = 6; // You can't access private member of a class
    cout << "shadow level: " << shadow.level << endl;

    Hero *hermit = new Hero; // Creating hermit object of Hero class DYNAMICALLY. shadow obj is an instance of Hero class.
    // The here also as above

    (*hermit).level = 10; // Since hermit is an memory location (Address) we have to dereference it using * operator
    hermit->health = 50;  // Both way are correct. this is Easy way to represent the above
    cout << "hermit level: " << (*hermit).level << endl;
    cout << "hermit level: " << hermit->health << endl;

    // Getter and Setter
    cout << endl;
    cout << "Using Getters and Setters: " << endl;
    shadow.setPrivateHealth(25);
    cout << "After setting Private Health: " << shadow.getPrivateHealth() << endl;
}
