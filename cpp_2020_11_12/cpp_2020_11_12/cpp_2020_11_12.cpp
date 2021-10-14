#include <iostream>
#include "Zoo.h"

#define ZOO_SIZE 10

using namespace std;

int main()
{    
    Zvire* zoo[ZOO_SIZE];
    zoo[0] = new Pes(1);
    zoo[1] = new Slon(2);
    zoo[2] = new Tucnak(3);
    zoo[3] = new Panda(4);
    zoo[4] = new Zirafa(5);
    zoo[5] = new Medved(6);
    zoo[6] = new Tygr(7);
    zoo[7] = new Krajta(8);
    zoo[8] = new Hroch(9);
    zoo[9] = new Morce(10);

    for (int i = 0; i < ZOO_SIZE; i++) {
        cout << zoo[i]->Nakrmit() << endl;
    }

    for (int i = 0; i < ZOO_SIZE; i++) {
        delete zoo[i];
    }
    return 1;
}