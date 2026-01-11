#include <iostream>
#include <ctime>

using namespace std;

// funktion prototyypit
int game(int maxnum);

int main()
{
    int lkm = game(50);
    cout << "Arvausten lukumaara on " << lkm << endl;
    /*int arvaus = 0;
    int arvausten_lkm = 0;

    //Arvotaan satunnainen luku
    srand(time(NULL));
    int satunnaisluku = (rand() % 20) + 1;
    //cout << "Satunnaisluku on " << satunnaisluku << endl;

    //Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
    while ( arvaus != satunnaisluku){

        //Kysytään pelaajalta arvaus
        cout << "Anna arvaus ? " << endl;
        cin >> arvaus;
        //cout << "Pelaajan arvaus on " << arvaus << endl;
        arvausten_lkm++;

        //Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
        //Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
        if (arvaus == satunnaisluku){
            cout << "Oikein !!" << endl;
            cout << "Arvausten lukumaara on " << arvausten_lkm << endl;
        } else if (arvaus < satunnaisluku){
            cout << "Luku on suurempi " << endl;
        }
        else if (arvaus > satunnaisluku){
            cout << "Luku on pienempi " << endl;
        }*/
    return 0;
}

int game(int maxnum){
    int arvaus = 0;
    int arvausten_lkm = 0;

    //Arvotaan satunnainen luku
    srand(time(NULL));
    int satunnaisluku = (rand() % 20) + 1;
    cout << "Maxnum on " << maxnum << endl;

    //Jos pelaajan vastaus ei ollut oikein, niin palataan kohtaan 2.
    while ( arvaus != satunnaisluku){

        //Kysytään pelaajalta arvaus
        cout << "Anna arvaus ? " << endl;
        cin >> arvaus;
        //cout << "Pelaajan arvaus on " << arvaus << endl;
        arvausten_lkm++;

        //Tarkistetaan onko arvaus pienempi, suurempi tai yhtäsuuri kuin luku
        //Kerrotaan tarkistuksen tulos tyyliin ”luku on pienempi/suurempi” tai ”oikea vastaus”
        if (arvaus == satunnaisluku){
            cout << "Oikein !!" << endl;
            cout << "Arvausten lukumaara on " << arvausten_lkm << endl;
        } else if (arvaus < satunnaisluku){
            cout << "Luku on suurempi " << endl;
        }
        else if (arvaus > satunnaisluku){
            cout << "Luku on pienempi " << endl;
        }
    }
    return arvausten_lkm;
}

