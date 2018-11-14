#include <iostream>
#include <stdlib.h>     
#include <time.h> 
using namespace std;

class Fight{
    public:
    
    string hitclass = "N/A";
    string friclass = "N/A";
    string fightlocation = "N/A";
    
    //Stats hitman
    int str1 = 0;
    int att1 = 0;
    int def1 = 0;
    int ran1 = 0;
    int mag1 = 0;
    int hp1 = 0;
    //Stats of friend
    int str1 = 0;
    int att1 = 0;
    int def1 = 0;
    int ran1 = 0;
    int mag1 = 0;
    int hp1 = 0;
    
    void combatscript(){
        srand(time(NULL));
        //first class calculated
        if(hitclass = "Melee"){
            str1 = (87)+(rand()%6)+1)+(rand()%6)+1);
            att1 = (87)+(rand()%6)+1)+(rand()%6)+1);
            def1 = (87)+(rand()%6)+1)+(rand()%6)+1);
            hp1 = (87)+(rand()%6)+1)+(rand()%6)+1);
        }
        if(hitclass = "Range"){
            ran1 = (87)+(rand()%6)+1)+(rand()%6)+1);
            def1 = (87)+(rand()%6)+1)+(rand()%6)+1);
            hp1 = (87)+(rand()%6)+1)+(rand()%6)+1);
        }
        if(hitclass = "Magic"){
            mag1 = (87)+(rand()%6)+1)+(rand()%6)+1);
            def1 = (87)+(rand()%6)+1)+(rand()%6)+1);
            hp1 = (87)+(rand()%6)+1)+(rand()%6)+1);
        }
        //secound class calculated
        if(friclass = "Melee"){
            str1 = (87)+(rand()%6)+1)+(rand()%6)+1);
            att1 = (87)+(rand()%6)+1)+(rand()%6)+1);
            def1 = (87)+(rand()%6)+1)+(rand()%6)+1);
            hp1 = (87)+(rand()%6)+1)+(rand()%6)+1);
        }
        if(friclass = "Range"){
            ran1 = (87)+(rand()%6)+1)+(rand()%6)+1);
            def1 = (87)+(rand()%6)+1)+(rand()%6)+1);
            hp1 = (87)+(rand()%6)+1)+(rand()%6)+1);
        }
        if(friclass = "Magic"){
            mag1 = (87)+(rand()%6)+1)+(rand()%6)+1);
            def1 = (87)+(rand()%6)+1)+(rand()%6)+1);
            hp1 = (87)+(rand()%6)+1)+(rand()%6)+1);
        }
      
        
        
        
        
    }
    
    
    
    
};
