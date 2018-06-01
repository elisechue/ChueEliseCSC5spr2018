/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 22, 12:11 PM
 * Purpose: Yahtzee revamped for Project 2 using functions and such
 */

//System Libraries Here
#include <iostream>
#include <vector>       //vectors
#include <cstdlib>      //random function
#include <ctime>        //rand num seed
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void slctsort(char [],char);    //sorting the dice rolls highest to lowest
//Program Execution Begins Here

int main(int argc, char** argv) {
    //set random number seed
     srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables, no doubles
     const int NUMDICE=5;      //num of dice used for the entire game is 5
     int roll[NUMDICE];        
     char reroll,slctDie;       //option to reroll? , select which di(c)e to reroll
    //Input or initialize values
     for(int r=0;r<NUMDICE;r++){
         roll[r]=rand()%6+1;        //roll my dice [1,6]
     }
     cout<<"Would you like to reroll any dice?"<<endl;
     

    //Map/Process/Calculations, Inputs to Outputs
    
    //Display Outputs

    //Exit Program!
    
    return 0;
}

//******************************************************************************
//        FUNCTIONS START HERE