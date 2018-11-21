#include <iostream>
#include <stdlib.h>     
#include <time.h> 
#include <fstream>
using namespace std;
//Welcome to the endgame this prints out and fstream out all the information
class Endgame{
    public:
    //these are the holders for all the results for everything in this project
    string nhitman = "N/A";
    string nfriend = "N/A";
    string winner = "N/A";
    double nhitmanhp = 0;
    double nfriendhp = 0;
    
    //this is the function to cout all the data
    void endcomments(){
        
        
        
        //this just saves the value of the winner
        if(nhitmanhp > 0){
            winner = nhitman;
        }
        if(nfriendhp > 0){
            winner = nfriend;
        }
        
        cout << "The Fight has ended.\n The winner is " << winner << endl;
        //this prints out all the winning information to the file called combatfile1.txt
        ofstream combatfile;
        combatfile.open("combatfile1.txt");
        combatfile <<"The winner of the fight was " << winner << endl;
        combatfile.close();
        
        //This is an exceptption 
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
    
    
    
