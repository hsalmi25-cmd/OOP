#include "asiakas.h"
#include <iostream>
using namespace std;

//Asiakas();
//Asiakas(string, double);
//string getNimi();
//void showSaldo();
//bool talletus(double);
//bool nosto (double);
//bool luotonMaksu(double);
//bool luotonNosto(double);



Asiakas::Asiakas()
{
    cout << "Asiakas: olen defaultkonstruktorissa!" << endl;
}

Asiakas::Asiakas(string name, double lr) : kayttotili(name), luottotili(name, lr)
{
    cout << "Asiakas: olen parametrikonstruktorissa!" << endl;
    nimi = name;
}

bool Asiakas::tiliSiirto(double sum, Asiakas& kohde)
{
    if(sum <= 0)
    {
        cout << "ei voi olla negatiivinen" << endl;
        return false;
    }

    if(!kayttotili.withdraw(sum))
    {
        cout << "Siirto epäonnistui. Tilillä ei tarpeeksi rahaa." << endl;
        return false;
    }

    if(!kohde.talletus(sum))
    {
        cout << "Siirto epäonnistui" << endl;
        kayttotili.deposit(sum);
        return false;
    }

    cout << "Siirto onnistui!" << sum << "e asiakkaalta "
         << nimi << "asiakkaalle " << kohde.getNimi() << "." << endl;

    return true;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << "Asiakkaan nimi: " << nimi << endl;
    cout << "Käyttötilin saldo: " << kayttotili.getBalance() << "e" << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << "e" << endl;
}

bool Asiakas::talletus(double sum)
{
    return kayttotili.deposit(sum);

}

bool Asiakas::nosto(double sum)
{
    return kayttotili.withdraw(sum);
}

bool Asiakas::luotonMaksu(double sum)
{
    return luottotili.deposit(sum);
}

bool Asiakas::luotonNosto(double sum)
{
    return luottotili.withdraw(sum);
}
