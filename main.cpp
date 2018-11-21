#include <iostream>
#include "Location.cpp"
#include "hitman.cpp"
#include "friend.cpp"
#include "fight.cpp"
#include "endgame.cpp"
#include <stdlib.h>     
#include <time.h> 

//These are storage strings so i can cross use stuff and just reference it from the main
    string mhitclass = "N/A";
    string mfriclass = "N/A";
    string mfightlocation = "N/A";

//this is the main class
int main()
{
    cout << "Hello and welcome to Mikes Farms! Lets begin our Journy." << endl;
    
    //this starts the location function and then copys the out into the string in the main class
    Location obj1;
    obj1.locchoice();
    mfightlocation = obj1.outlocation;
    //this starts the hitman function and then copys the out into the string in the main class
    Hitman obj2;
    obj2.hitmantype();
    mhitclass = obj2.typeout;
   //this starts the friend function and then copys the out into the string in the main class
   Friend obj3;
    obj3.friendtype();
    mfriclass = obj3.typeout;
    /* This starts the fight script. it also coppys the names of the hitman and
    the firend over into the class for reference */
    Fight obj4;
    obj4.fightlocation = obj1.outlocation;
    obj4.hitclass = obj2.typeout;
    obj4.friclass = obj3.typeout;
    //Starts the combat script
    obj4.combatscript();
    //This is the results class it prints out all the results into something easy to read.
    Endgame obj5;
    obj5.nhitman = obj2.typeout;
    obj5.nfriend = obj3.typeout;
    obj5.nhitmanhp = obj4.activehp1;
    obj5.nfriendhp = obj4.activehp2;
    
    //Starts the results function
    obj5.endcomments();
  
  
  

  
  
  // EXAMPLE SECTION BELOW JUST IGNORE FOR REFERENCE ONLY
  //  srand(time(NULL));
  //   int number = (rand()%10)+1;
  //   cout << number;

    return 0;
}
