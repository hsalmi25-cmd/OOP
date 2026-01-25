#include <iostream>
#include "chef.h"
#include "italianchef.h"

int main()
{
    Chef basicChef("Gordon");
    basicChef.makeSalad(15);
    basicChef.makeSoup(9);

    ItalianChef ItChef("Mario");
    ItChef.askSecret("pizza", 20, 25);  // oikea salasana
    ItChef.askSecret("wrong", 20, 25);  // väärä salasana

    return 0;
}
