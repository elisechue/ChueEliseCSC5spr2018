/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 22, 2018, 8:36 PM
 * Purpose:  simulate the Monty Hall problem 10,000 times
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //random number seed
    srand(static_cast <unsigned int>(time(0)));
    
    //Declare all Variables, no doubles  
    float games, //number of games
        stayWin, //win by staying with first choice
        chaWin, //win by changing first choice
        choDoor,//chosen door
            winDoor,//winner's door
            revDoor,//revealed door
            lasDoor,//last door (remaining door)
         choice;
        
    //Input or initialize values
    games=0;
    stayWin=0;
    chaWin=0;
    
    //Map/Process/Calculations, Inputs to Outputs
    do{
        choDoor=rand()%3+1;
        winDoor=rand()%3+1;
        do{
            revDoor=rand()%3+1;
          }while (revDoor==choDoor||revDoor==winDoor);
          do{
              lasDoor=rand()%3+1;
          }while (lasDoor==choDoor||lasDoor==revDoor);
          choice=rand()%2+1;
          if (choice==1){
              if(choDoor==winDoor){
                  stayWin++;
              }
          }if(choice==2){
              if(lasDoor==winDoor){
                  chaWin++;
              }
          }games++;
}while(games<10000);
    
    //Display Outputs
cout<<"Out of 10,000 games if you decided to stay with your first choice"<<endl;
    cout<<"you would have won "<<stayWin<<" times"<<endl;
cout<<"If you changed your first choice to the other door, however,"<<endl;
    cout<<"you would have won "<<chaWin<<" times, which is twice as much."
            <<endl;
cout<<"As you can see, you're better off changing your choice!";
    //Exit Program!
           
            
    return 0;
}

