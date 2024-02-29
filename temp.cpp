#include <iostream>
using namespace std;

class Hero
{
public:
    int health = 5;

    Hero(int health)
    {
        (*this).health = health;
        cout << "Inside Constructor: " << endl;
        cout << "Address of this " << this << endl;
        cout << "Exited Constructor: " << endl;
    }

    Hero(Hero &temp)
    {
        cout << "Inside Copy Constructor: " << &temp << endl;
        this->health = temp.health;
    }

    void setHealth(int health)
    {
        cout << "Address of this " << this << endl;
        this->health = health;
    }
};

int main()
{
    Hero hirtik(10);
    Hero hirtik2 = hirtik;
    cout << "hirtik2 health " << hirtik2.health << endl;
    cout << "Address of hirtik obj " << &hirtik << endl;
    cout << "Address of hirtik2 obj " << &hirtik2 << endl;
}