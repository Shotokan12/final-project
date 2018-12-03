#include <iostream>
#include <stdlib.h>    
#include <time.h>
using namespace std;
 
 
//This is the fight class
class Fight{
    public:
    //these are all the variabls included into the fight class
    string hitclass = "N/A";
    string friclass = "N/A";
    string fightlocation = "N/A";
    double hit1 = 0;
    double hit2 = 0;
    double hit3 = 0;
    double fri1 = 0;
    double fri2 = 0;
    double fri3 = 0;
   
   
    //Stats hitman
    int str1 = 0;
    int att1 = 0;
    int def1 = 0;
    int ran1 = 0;
    int mag1 = 0;
    int hp1 = 0;
    //Stats of friend
    int str2 = 0;
    int att2 = 0;
    int def2 = 0;
    int ran2 = 0;
    int mag2 = 0;
    int hp2 = 0;
   
    //active fight information
     double hitfinal = 0;
    double frifinal = 0;
   
    double activehp1 = 0;
    double activehp2 = 0;
   
    double hitcal1 = 0;
    double hitcal2 = 0;
    char toggleh = 'b';
   
    void combatscript(){ // good job with the rand function = Vf
        (srand(time(NULL)));
        //first persons stats calculated
       
            str1 = 87; //why87? JT
            str1 = str1 + ((rand()%6)+1);
            str1 = str1 + ((rand()%6)+1);
            att1 = 87;
            att1 = att1 + ((rand()%6)+1);
            att1 = att1 + ((rand()%6)+1);
            def1 = 87;
            def1 = def1 + ((rand()%6)+1);
            def1 = def1 + ((rand()%6)+1);
            hp1 = 87;
            hp1 = hp1 + ((rand()%6)+1);
            hp1 = hp1 + ((rand()%6)+1);
           
            hit1 = (str1+att1+def1);
            hit1 = hit1 + (hp1*3);
            hit1 = hit1 * 0.05050505;
       
        //secound persons stats calculated
       
           str2 = 87;
            str2 = str2 + ((rand()%6)+1);
            str2 = str2 + ((rand()%6)+1);
            att2 = 87;
            att2 = att2 + ((rand()%6)+1);
            att2 = att2 + ((rand()%6)+1);
            def2 = 87;
            def2 = def2 + ((rand()%6)+1);
            def2 = def2 + ((rand()%6)+1);
            hp2 = 87;
            hp2 = hp2 + ((rand()%6)+1);
            hp2 = hp2 + ((rand()%6)+1);
           
            fri1 = (str2+att2+def2);
            fri1 = fri1 +(hp2*3);
            fri1 = fri1*(0.05050505);
       
       
        //these hold the max hit from each person
        //max his is the maximum amount of damage they can deal
        hitfinal = hit1;
        frifinal = fri1;
       
       
     //this mostly explains it self its couting all the stats so you can see
     //each persons stats levels and other information related to that person
       
        cout << "First person has a max hit of "<< hitfinal << endl;
        cout << "Second person has a max hit of "<< frifinal << endl;
       
        cout << "Stats of first person " << str1 <<" || "<< att1 <<" || "<< def1 <<" || "<< ran1 <<" || "<< mag1 <<" || "<< hp1 << endl;
        cout << "Stats of Second person " << str2 <<" || "<< att2 <<" || "<< def2 <<" || "<< ran2 <<" || "<< mag2 <<" || "<< hp2 << endl;
        cout << "Time to Fight!" << endl;
        cout << "========================================" << endl;
        cout << "Fighter information:" << endl;
        cout << "Hitman Stats: [" << hitclass << "]" << endl;
        cout << "Max hit: " << hitfinal << endl;
        cout << "Combat levels. Attack: " << att1 << " Strenght: " << str1 << " Defence: " << def1 << " Hitpoints: "<< hp1 << endl;
        cout << "========================================" << endl;
        cout << "Fighter information:" << endl;
        cout << "Hitman Stats: [" << friclass << "]" << endl;
        cout << "Max hit: " << frifinal << endl;
        cout << "Combat levels. Attack: " << att2 << " Strenght: " << str2 << " Defence: " << def2 << " Hitpoints: "<< hp2 << endl;
        cout << "========================================" << endl;
       //active hp is relating to active combat so when someone dies the functions stops
        activehp1 = hp1;
        activehp2 = hp2;
       
        cout << "Enter ! to hit!" << endl;
        cout << hitclass << " gets the first hit!" << endl; //is this random?if not, why? JT
       
        //these two are calculating the hits during the fight
       
        int hitfinalcal = 0;
        hitfinalcal = hitfinal * 1000;
       
        int frifinalcal = 0;
        frifinalcal = frifinal * 1000;
       
        //these two stop the script if the fight ends
       
        int stop = 1;
        int stopattacks = 1;
        //this is the active fight between the two fighters
        while(stop != 0){
         
            if(stopattacks > 0){
            hitcal1 =  ((rand()%hitfinalcal)+1);
            hitcal1 = hitcal1 / 1000;
            activehp2 = activehp2 - hitcal1;
            cout << hitclass << " Hits you with a [ " << hitcal1 << " ] Your hitpoints are now at [ " << activehp2 << " ]"<< endl;
            if(activehp2 <= 0){
                stopattacks = 0;
                stop = 0;
            }
               
            }
           
            cin >> toggleh;
            if(stopattacks > 0){
            if(toggleh == '!'){
            hitcal2 = ((rand()%frifinalcal)+1);
            hitcal2 = hitcal2 / 1000;
            activehp1 = activehp1 - hitcal2;
            cout << friclass << " Hits them with a [ " << hitcal2 << " ] Their hitpoints are now at [ " << activehp1 << " ]"<< endl;
            toggleh = 'b';  
            }
            if(activehp1 <= 0){
                stopattacks = 0;
                stop = 0;
            }
            }
        }
       
        //while section end
       
       
    }
   
};
