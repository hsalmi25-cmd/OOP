#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <string>
#include "chef.h"

using namespace std;

class ItalianChef : public Chef
{
private:
    string password = "pizza";
    int flour;
    int water;

    int makePizza();

public:
    ItalianChef(string name);
    ~ItalianChef();
    bool askSecret(string inputPassword, int flourAmount, int waterAmount);
};

#endif // ITALIANCHEF_H
