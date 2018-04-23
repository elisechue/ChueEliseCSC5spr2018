/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 17, 2018, 11:20 AM
 * Purpose:  Play a round of Yahtzee (conceptual)
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>  //random num library
#include <ctime>
#include <iomanip>  //setw
#include <cstring>  //string objects and objects
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //set random seed 
    srand(static_cast<unsigned int>(time(0)));  //
    
    //Declare all Variables, no doubles
    int die1, die2, die3, die4, die5;    //dice face values = [1,6]
    char r1d1,r1d2,r1d3,r1d4,r1d5;       //choose for Round 1 Die # to keep
    
    //Input or initialize values
    die1=rand()%6+1;//[1,6]
    die2=rand()%6+1;
    die3=rand()%6+1;
    die4=rand()%6+1;
    die5=rand()%6+1;
    //Display first round results
    cout<<setw(2)<<die1<<setw(6)<<die2<<setw(6)<<die3<<setw(6)<<die4<<
          setw(6)<<die5<<endl;
    cout<<"Die#1"<<" Die#2"<<" Die#3"<<" Die#4"<<" Die#5"<<endl;
    
    cout<<"Which dice would you like to keep?"<<endl;
    cout<<"k=keep r=reroll"<<endl;
    cout<<"Example Input: K r R k k"<<endl;
    cin>>r1d1>>r1d2>>r1d3>>r1d4>>r1d5;
    
    //round 2 parameters
    if (r1d1=='k'||r1d1=='K'){
        die1;
    }else if(r1d1=='r'||r1d1=='R'){
        die1=rand()%6+1;
        }
    if (r1d2=='k'||r1d2=='K'){
        die2;
    }else if(r1d2=='r'||r1d2=='R'){
        die2=rand()%6+1;
        }
    if (r1d3=='k'||r1d3=='K'){
        die3;
    }else if(r1d3=='r'||r1d3=='R'){
        die3=rand()%6+1;
        }   
    if (r1d4=='k'||r1d4=='K'){
        die4;
    }else if(r1d4=='r'||r1d4=='R'){
        die4=rand()%6+1;
        }
    if (r1d5=='k'||r1d5=='K'){
        die5==die5;
    }else if(r1d5=='r'||r1d5=='R'){
        die5=rand()%6+1;
        }

    
    //Display Roll 2
    cout<<setw(2)<<die1<<setw(6)<<die2<<setw(6)<<die3<<setw(6)<<die4<<
          setw(6)<<die5<<endl;
    cout<<"Die#1"<<" Die#2"<<" Die#3"<<" Die#4"<<" Die#5"<<endl;
    //Exit Program!
    
    return 0;
}

