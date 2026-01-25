#include "chef.h"
#include <iostream>

using namespace std;

Chef::Chef(string name) : chefName(name) {
    cout << "Chef constructor: " << chefName << endl;
}

Chef::~Chef() {
    cout << "Chef destructor: " << chefName << endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int ingredients) {
    int portions = ingredients / 5;
    cout << "Making salad: " << portions << " portions" << endl;
    return portions;
}

int Chef::makeSoup(int ingredients) {
    int portions = ingredients / 3;
    cout << "Making soup: " << portions << " portions" << endl;
    return portions;
}
