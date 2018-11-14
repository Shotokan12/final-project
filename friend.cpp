#include <iostream>
#include <stdlib.h>     
#include <time.h> 
using namespace std;

class Friend{
    public:
    string type1 = "Melee";
    string type2 = "Ranger";
    string type3 = "Magic";
    int input2 = 0;
    string typeout = "N/A";
    
    void friendtype(){
        cout << "Time to select your friends class. Choose from the current selection." << endl;
        cout << "[1]Melee\n[2]Range\n[3]Magic" << endl;
        cin >> input2;
        switch(input2){
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
