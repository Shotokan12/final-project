#include <iostream>
#include <stdlib.h>     
#include <time.h> 
using namespace std;

class Friend{
    public:
    string fname1 = "Andrew";
    string fname2 = "Spike";
    string fname3 = "Tyler";
    int input = 0;
    string typeout = "N/A";
    
    void friendtype(){
        cout << "Please select your Friend!" << endl;
        cout << "[1]Andrew\n[2]Spike\n[3]Tyler" << endl;
        cin >> input;
        switch(input){
            case 1: cout << "You selected " << fname1 << " as your friend." << endl;
            typeout = fname1;
            break;
            case 2: cout << "You selected " << fname2 << " as your friend." << endl;
            typeout = fname2;
            break;
            case 3: cout << "You selected " << fname3 << " as your friend." << endl;
            typeout = fname3;
            break;
        }
        
        
        
        
        
        
    }; 
};
