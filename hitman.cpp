#include <iostream>
#include <stdlib.h>     
#include <time.h> 
using namespace std;
//this is the hitman class
class Hitman{
    public:
    //The options you have to choose from
    string hname1 = "Ryan";
    string hname2 = "Alex";
    string hname3 = "Mark";
    int input = 0;
    string typeout = "N/A";
    
    void hitmantype(){
        cout << "Please select your hitman!" << endl;
        cout << "[1]Ryan\n[2]Alex\n[3]Mark" << endl;
        //waiting for your input for your choice
        cin >> input;
        //switch allows you to choose from a selection
        switch(input){
            case 1: cout << "You selected " << hname1 << " as the hitman." << endl;
            typeout = hname1;
            break;
            case 2: cout << "You selected " << hname2 << " as the hitman." << endl;
            typeout = hname2;
            break;
            case 3: cout << "You selected " << hname3 << " as the hitman." << endl;
            typeout = hname3;
            break;
        }
        
        
        
        
        
        
    }; 
};
