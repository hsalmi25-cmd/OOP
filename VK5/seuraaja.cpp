#include "seuraaja.h"
#include <iostream>
using namespace std;

Seuraaja::Seuraaja()
{
    cout << "Seuraaja default konstruktori" << endl;
}

Seuraaja::Seuraaja(string name) : nimi(name)
{
    cout << "Luodaan seuraaja " << this->nimi << endl;
}

string Seuraaja::getNimi()
{
    //cout << "getNimi" << endl;
    return nimi;
}

void Seuraaja::paivitys(string viesti)
{
    cout << "Seuraaja " << nimi << " sai viestin: " << viesti << endl;
}
