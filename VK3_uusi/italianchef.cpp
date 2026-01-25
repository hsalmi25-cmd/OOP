#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

ItalianChef::ItalianChef(string name) : Chef(name), flour(0), water(0) {
    cout << "ItalianChef constructor: " << chefName << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef destructor: " << chefName << endl;
}

bool ItalianChef::askSecret(string inputPassword, int flourAmount, int waterAmount) {
    if (inputPassword == password) {
        flour = flourAmount;
        water = waterAmount;
        int pizzas = makePizza();
        cout << "Made " << pizzas << " pizzas!" << endl;
        return true;
    } else
        {
        cout << "Wrong password!" << endl;
        return false;
        }
}

int ItalianChef::makePizza() {
    int maxFlour = flour / 5;
    int maxWater = water / 5;
    return min(maxFlour, maxWater);
}
