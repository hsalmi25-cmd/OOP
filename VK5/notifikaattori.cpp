#include "notifikaattori.h"
#include <iostream>
using namespace std;

Notifikaattori::Notifikaattori()
{
    cout << "Notifikaattori luotu" << endl;
}

void Notifikaattori::lisaa(Seuraaja* lisattava)
{
    cout << "Notifikaattori lisaa seuraajan " << lisattava->getNimi() << endl;
    lisattava->next = seuraajat;
    seuraajat = lisattava;
}

void Notifikaattori::poista(Seuraaja* poistettava)
{
    cout << "Notifikaattori poistaa seuraajan " << poistettava->getNimi() << endl;

    if(seuraajat == poistettava){
        seuraajat = poistettava->next;
        poistettava->next = nullptr;
        return;
    }

    Seuraaja* ed = seuraajat;
    while(ed != nullptr && ed->next != poistettava){
        ed = ed->next;
    }
    if (ed != nullptr){
        ed->next = poistettava->next;
        poistettava->next = nullptr;
    }
}

void Notifikaattori::tulosta(){
    cout << "Notifikaattorin seuraajat: " << endl;
    Seuraaja* o = seuraajat;
    while(o != nullptr){
        cout << "Seuraaja " << o->getNimi() << endl;
        o=o->next;
    }
}

void Notifikaattori::postita(string viesti){
    cout << "Notifikaattori poistaa viestin " << viesti << endl;
    Seuraaja* o = seuraajat;
    while ( o != nullptr){
        o->paivitys(viesti);
        o = o->next;
    }
}
