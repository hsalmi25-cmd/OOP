#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int mN)
{
    cout << "Peli luotu" << endl;
    maxNumber = mN;
}

Game::~Game()
{
    cout << "Peli tuhottu" << endl;
}

void Game::play()
{
    cout << "Pelissä" << endl;
    srand(time(NULL));
    cout << "maxNumber: " << maxNumber << endl;
    randomNumber = (rand()%maxNumber)+1;  //otetaan jakojäännös, nyt pitäisi olla välillä 1-20
    //cout << "randomNumber: " << randomNumber << endl;
    bool stayInLoop = true;
    while(stayInLoop)
    {
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;
        numOfGuesses++;
        if(playerGuess == randomNumber)
        {
            cout<<"Arvasit oikein luku = "<<playerGuess<<endl;
            stayInLoop = false;
        }
        else if(playerGuess<randomNumber)
        {
            cout<<"Lukusi on liian pieni"<<endl;
        }
        else
        {
            cout<<"Lukusi on liian suuri"<<endl;
        }
    }

}


void Game::printGameResult()
{
    cout << "Tulostuksessa" << endl;
    cout << "Oikea luku: " << randomNumber << endl << " Arvausten määrä: " << numOfGuesses << endl;
}
