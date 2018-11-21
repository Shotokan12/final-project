#include <iostream>
#include "Location.cpp"
#include "hitman.cpp"
#include "friend.cpp"
#include "fight.cpp"
#include "endgame.cpp"
#include <stdlib.h>     
#include <time.h> 


    string mhitclass = "N/A";
    string mfriclass = "N/A";
    string mfightlocation = "N/A";


int main()
{
    cout << "Hello and welcome to Mikes Farms! Lets begin our Journy." << endl;
    
    Location obj1;
    obj1.locchoice();
    mfightlocation = obj1.outlocation;
    
    Hitman obj2;
    obj2.hitmantype();
    mhitclass = obj2.typeout;
   
   Friend obj3;
    obj3.friendtype();
    mfriclass = obj3.typeout;
    
    Fight obj4;
    obj4.fightlocation = obj1.outlocation;
    obj4.hitclass = obj2.typeout;
    obj4.friclass = obj3.typeout;
    
    obj4.combatscript();
    
    Endgame obj5;
    obj5.nhitman = obj2.typeout;
    obj5.nfriend = obj3.typeout;
    obj5.nhitmanhp = obj4.activehp1;
    obj5.nfriendhp = obj4.activehp2;
    
    obj5.endcomments();
  
  
  

  
  
  // EXAMPLE SECTION BELOW JUST IGNORE FOR REFERENCE ONLY
  //  srand(time(NULL));
  //   int number = (rand()%10)+1;
  //   cout << number;

    return 0;
}
