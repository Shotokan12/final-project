#include <iostream>
#include <stdlib.h>     
#include <time.h> 
#include <fstream>
using namespace std;

class Endgame{
    public:
    
    string nhitman = "N/A";
    string nfriend = "N/A";
    string winner = "N/A";
    double nhitmanhp = 0;
    double nfriendhp = 0;
    
    
    void endcomments(){
        
        
        cout << nhitman << nhitmanhp << endl;
        cout << nfriend << nfriendhp << endl;
        
        
        if(nhitmanhp > 0){
            winner = nhitman;
        }
        if(nfriendhp > 0){
            winner = nfriend;
        }
        
        cout << "The Fight has ended.\n The winner is " << winner << endl;
        
        ofstream combatfile;
        combatfile.open("combatfile1.txt");
        combatfile <<"The winner of the fight was " << winner << endl;
        combatfile.close();
        
        
        try
        {
            throw 55;
        }
        catch(int a)
        {
            cout << "Wow you caught a big one!" << a << endl;
        }
        
        
        
        
        
        
        
            
        }
        
        
        
        
        
        
        
        
    };
    
    
    
