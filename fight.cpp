#include <iostream>
#include <stdlib.h>     
#include <time.h> 
using namespace std;

class Fight{
    public:
    
    string hitclass = "N/A";
    string friclass = "N/A";
    string fightlocation = "N/A";
    double hit1 = 0;
    double hit2 = 0;
    double hit3 = 0;
    double fri1 = 0;
    double fri2 = 0;
    double fri3 = 0;
    double hitfinal = 0;
    double frifinal = 0;
    
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
    
    void combatscript(){
        (srand(time(NULL)));
        //first class calculated
        if(hitclass == "Melee"){
            str1 = 87;
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
        };
        if(hitclass == "Ranger"){
            ran1 = 87;
            ran1 = ran1 + ((rand()%6)+1);
            ran1 = ran1 + ((rand()%6)+1);
            def1 = 87;
            def1 = def1 + ((rand()%6)+1);
            def1 = def1 + ((rand()%6)+1);
            hp1 = 87;
            hp1 = hp1 + ((rand()%6)+1);
            hp1 = hp1 + ((rand()%6)+1);
            
            hit2 = (ran1) + (def1*2);
            hit2 = hit2 + (hp1*3);
            hit2 = hit2 * (0.05050505);
        };
        if(hitclass == "Magic"){
            mag1 = 87;
            mag1 = mag1 + ((rand()%6)+1);
            mag1 = mag1 + ((rand()%6)+1);
            def1 = 87;
            def1 = def1 + ((rand()%6)+1);
            def1 = def1 + ((rand()%6)+1);
            hp1 = 87;
            hp1 = hp1 + ((rand()%6)+1);
            hp1 = hp1 + ((rand()%6)+1);
            
            hit3 = (mag1);
            hit3 = hit3 + (def1*2);
            hit3 = hit3 +(hp1*3);
            hit3 = hit3 * (0.05050505);
        };
        //secound class calculated
        if(friclass == "Melee"){
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
        };
        if(friclass == "Ranger"){
            ran2 = 87;
            ran2 = ran2 + ((rand()%6)+1);
            ran2 = ran2 + ((rand()%6)+1);
            def2 = 87;
            def2 = def2 + ((rand()%6)+1);
            def2 = def2 + ((rand()%6)+1);
            hp2 = 87;
            hp2 = hp2 + ((rand()%6)+1);
            hp2 = hp2 + ((rand()%6)+1);
            fri2 = (ran2);
            fri2 = fri2+(def2*2);
            fri2 = fri2+(hp2*3);
            fri2 = fri2*(0.05050505);
        };
        if(friclass == "Magic"){
            mag2 = 87;
            mag2 = mag2 + ((rand()%6)+1);
            mag2 = mag2 + ((rand()%6)+1);
            def2 = 87;
            def2 = def2 + ((rand()%6)+1);
            def2 = def2 + ((rand()%6)+1);
            hp2 = 87;
            hp2 = hp2 + ((rand()%6)+1);
            hp2 = hp2 + ((rand()%6)+1);
            
            
          
            fri3 = (mag2);
            fri3 = fri3+(def2*2);
            fri3 = fri3+(hp2*3);
            fri3 = fri3*(0.05050505);
        };
      
        
        if(hitclass == "Melee"){
            hitfinal = hit1;
            
        };
        if(hitclass == "Magic"){
            hitfinal = hit2;
            
        };
        if(hitclass == "Ranger"){
            hitfinal = hit3;
            
        };
        if(friclass == "Melee"){
            frifinal = fri1;
        };
        if(friclass == "Magic"){
            frifinal = fri2;
        };
        if(friclass == "Ranger"){
            frifinal = fri3;
        };
        
        cout << "First person has a max hit of "<< hitfinal << endl;
        cout << "Second person has a max hit of "<< frifinal << endl;
        
        cout << "Stats of first person " << str1 <<" || "<< att1 <<" || "<< def1 <<" || "<< ran1 <<" || "<< mag1 <<" || "<< hp1 << endl;
        cout << "Stats of Second person " << str2 <<" || "<< att2 <<" || "<< def2 <<" || "<< ran2 <<" || "<< mag2 <<" || "<< hp2 << endl;
        cout << "Time to Fight!" << endl;
        cout << "========================================" << endl;
        
        
        
    }
    
    
    
    
};
