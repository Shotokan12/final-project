#include <iostream>
#include <stdlib.h>     
#include <time.h> 
using namespace std;



class Location{
    public:
    string loc1 = "Guam";
    string loc2 = "Japan";
    string loc3 = "Canada";
    string loc4 = "Paris";
    char start = '!';
    int index = 0;
    string outlocation = "N/A";
    
    void locchoice(){
        srand(time(NULL));
        cout << "Your Location will be selected at random. Type in ! to begin" << endl;
        cin >> start;
        if(start = '!'){
            cout << "*Places hand in bag with random names. Pulls out a slip of paper." << endl;
            index = (rand()%4)+1;
            switch (index) {
            case 1: cout << "Congradulations you are going to " << loc1 << "." << endl;
            outlocation = loc1;
            break;
            case 2:  cout << "Congradulations you are going to " << loc2 << "." << endl;
            outlocation = loc2;
            break;
            case 3:  cout << "Congradulations you are going to " << loc3 << "." << endl;
            outlocation = loc3;
            break;
            case 4:  cout << "Congradulations you are going to " << loc4 << "." << endl;
            outlocation = loc4;
            break;
             };
        };
       
        
        
        
       
    }
};
