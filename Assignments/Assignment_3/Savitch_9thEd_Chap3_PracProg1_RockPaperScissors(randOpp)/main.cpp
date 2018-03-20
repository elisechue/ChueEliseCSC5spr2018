/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 20, 2018, 12:15 PM
 * Purpose: Rock Paper Scissors between 2 computers
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    char p1,p2;
    
    //Initialize Variables
    p1=rand()%3+'R';
    p1=p1>'S'?'P':p1;
    
    p2=rand()%3+'R';
    p2=p2>'S'?'P':p2;
    
    //Player's choice
    cout<<"Rock Paper Scissors Game"<<endl;
    cout<<"Player 1 = "<<p1<<endl;
    cout<<"Player 2 = "<<p2<<endl;
    
    //Determine winner
    if(p1==p2){
        cout<<"It's a tie"<<endl;
    }else if(p1=='P'){
        if(p2=='S'){
            cout<<"Player 2 wins"<<endl;
        }else{
            cout<<"Player 1 wins"<<endl;         
        }
    }else if(p1=='S'){
        if(p2=='R'){
            cout<<"Player 2 wins"<<endl;
        }else{
            cout<<"Player 1 wins"<<endl;         
        }
    }else if(p1=='R'){
        if(p2=='P'){
            cout<<"Player 2 wins"<<endl;
        }else{
            cout<<"Player 1 wins"<<endl;         
        }
    }
    
    //Display Outputs
   
   
    //Exit Program!
    
    return 0;
}

