#include <iostream>
#include <stdlib.h>     
#include <time.h> 
using namespace std;

class Hitman{
    public:
    string type1 = "Melee";
    string type2 = "Ranger";
    string type3 = "Magic";
    int input = 0;
    string typeout = "N/A";
    
    void hitmantype(){
        cout << "Time to set a hitman class. Choose from the current selection." << endl;
        cout << "[1]Melee\n[2]Range\n[3]Magic" << endl;
        cin >> input;
        switch(input){
            case 1: cout << "You selected the " << type1 << " class." << endl;
            typeout = type1;
            break;
            case 2: cout << "You selected the " << type2 << " class." << endl;
            typeout = type2;
            break;
            case 3: cout << "You selected the " << type3 << " class." << endl;
            typeout = type3;
            break;
        }
        
        
        
        
        
        
    }; 
};
