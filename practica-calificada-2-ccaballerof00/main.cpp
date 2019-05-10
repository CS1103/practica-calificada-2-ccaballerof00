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
#include "Shield.h"

int main() {
    //Peleador 1
    Punch* at1=new Punch();
    vector<Attack*>atk1;
    atk1.push_back(at1);
    Elude* de1=new Elude();
    vector<Defense*>def1;
    def1.push_back(de1);
    string nombre1="Peleador1";

Fighter* a= new Fighter(nombre1,atk1,def1);

//Peleador 2
    Firearm* at2=new Firearm();
    vector<Attack*>atk2;
    atk2.push_back(at2);
    Armor* de2=new Armor();
    vector<Defense*>def2;
    def2.push_back(de2);
    string nombre2="Peleador2";

Fighter* b= new Fighter(nombre2,atk2,def2);

//Peleador 3
    Saber* at3=new Saber();
    vector<Attack*> atk3;
    atk3.push_back(at3);
    Shield* de3=new Shield();
    vector<Defense*> def3;
    def3.push_back(de3);
    string nombre3="Peleador3";

    Fighter* c= new Fighter(nombre3,atk3,def3);

    Fight fight1=Fight(a,b);
    Fight fight2=Fight(a,c);
    Fight fight3=Fight(b,c);

    vector<Fight> fights;
    fights.push_back(fight1);
    fights.push_back(fight2);
    fights.push_back(fight3);
    Arena Arena1=Arena(fights);
    Arena1.run_all();
}