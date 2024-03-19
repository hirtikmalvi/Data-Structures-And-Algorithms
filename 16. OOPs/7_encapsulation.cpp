#include <iostream>
using namespace std;

// Encapsulation: Data Hiding/Information Hiding
// Where Data Members kept private and that is accessed by getters
// Makes Data Members READ ONLY
class Hero
{
private: // Data Members Private
    int level;
    int health;
    string name;

public: // getters
    int getLevel()
    {
        return this->level;
    }
};

int main()
{
    Hero shadow;
}