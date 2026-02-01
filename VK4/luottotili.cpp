#include "luottotili.h"
#include <iostream>
using namespace std;

//Luottotili();
//Luottotili(string, double);
//virtual bool deposit(double) override;
//virtual bool withdraw(double) override;

Luottotili::Luottotili()
{
    cout << "Olen Luottotili: defaultkonstruktorissa!" << endl;
}

Luottotili::Luottotili(string om, double lr) : Pankkitili(om)
{
    cout << "Olen Luottotili: parametrikonstruktorissa!" << endl;
    luottoraja = lr;
}

bool Luottotili::deposit(double sum)
{
    cout << "Olen Luottotili: velanmaksussa!" << endl;
    cout << "Saldo ennen: " << saldo << endl;
    cout << "Saldo jälkeen: " << sum + saldo << endl;
    if (sum < 0)return false;
    if (saldo + sum > 0)
        saldo = 0;
    else
        saldo += sum;
    return true;
}

bool Luottotili::withdraw(double sum)
{
    cout << "Olen Luottotili: velannostossa!" << endl;
    cout << "Luottoraja: " << luottoraja << endl;
    cout << "Saldo ennen: " << saldo << endl;
    cout << "Saldo jälkeen: " << saldo - sum << endl;
    if (sum <= 0) return false;
    if (saldo - sum < -luottoraja)
        return false;
    saldo -= sum;
    return true;
}
