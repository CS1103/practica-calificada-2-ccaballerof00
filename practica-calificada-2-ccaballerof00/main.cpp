#include <iostream>
#include "Fighter.h"
#include "Defense.h"
#include "Attack.h"
#include "Fight.h"
#include "Punch.h"
#include "Saber.h"
#include "Elude.h"
#include "Firearm.h"
#include "Armor.h"
#include "Arena.h"

int main() {
    Punch* at1=new Punch();
    vector<Attack*>atk1;
    atk1.push_back(at1);
    Elude* de1=new Elude();
    vector<Defense*>def1;
    def1.push_back(de1);
    string nombre1="Peleador1";

Fighter* a= new Fighter(nombre1,atk1,def1);

    Firearm* at2=new Firearm();
    vector<Attack*>atk2;
    atk1.push_back(at2);
    Armor* de2=new Armor();
    vector<Defense*>def2;
    def1.push_back(de2);
    string nombre2="Peleador2";

Fighter* b= new Fighter(nombre2,atk2,def2);

    Fight fight1=Fight(a,b);

    cout<<fight1.getWinner();

    /*vector<Fight> fights;
    fights.push_back(fight1);
    Arena Arena1=Arena(fights);
    Arena1.run(0);*/
}