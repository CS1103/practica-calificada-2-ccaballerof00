//
// Created by cristian on 5/10/19.
//

#include "Arena.h"

void Arena::run(int n)
{
    cout<<"El ganador de la pelea "<<n<<" fue "<<a[n].getWinner()<<endl;
}

void Arena::run_all()
{
    for(int i=0;i<a.size();i++)
    {
            string m=a[i].getWinner();
    cout<<"El ganador de la pelea "<<i<<" fue "<<m<<endl;
    }
}