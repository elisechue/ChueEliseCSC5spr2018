/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 20, 2018, 10:50 PM
 * Purpose:  Play a game of 23 between user and computer
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    int p1,     //player 1 choice between 1 and 3
        cpu,    //computer choice
        tpicks; //toothpicks left   
    
    //Input or initialize values
    tpicks=23;  //game starts with 23 toothpicks
    
    //Map/Process/Calculations, Inputs to Outputs
    
    //Display Outputs
    cout<<"[TURN 1] Player 1, will you take 1, 2, or 3 toothpicks?"<<endl;
    cin>>p1;
    
    if (p1>3||p1<=0){
        cout<<"Invalid Input"<<endl;
    return 0;
    }
    tpicks-=p1;
    if (tpicks>4)
        cpu=4-p1;
    cout<<"Computer picked: "<<cpu<<endl;
    tpicks-=cpu;
    cout<<"Toothpicks left: "<<tpicks<<endl;
    
    //Turn 2
    cout<<"[TURN 2] Player 1, will you take 1, 2, or 3 toothpicks?"<<endl;
    cin>>p1;
    if (p1>3||p1<=0){
        cout<<"Invalid Input"<<endl;
    return 0;
    }
    tpicks-=p1;
    if (tpicks>4)
        cpu=4-p1;
    cout<<"Computer picked: "<<cpu<<endl;
    tpicks-=cpu;
    cout<<"Toothpicks left: "<<tpicks<<endl;
    
    //Turn 3
    cout<<"[TURN 3] Player 1, will you take 1, 2, or 3 toothpicks?"<<endl;
    cin>>p1;
    if (p1>3||p1<=0){
        cout<<"Invalid Input"<<endl;
    return 0;
    }
    tpicks-=p1;
    if (tpicks>4)
        cpu=4-p1;
    cout<<"Computer picked: "<<cpu<<endl;
    tpicks-=cpu;
    cout<<"Toothpicks left: "<<tpicks<<endl;
    
    //Turn 4
    cout<<"[TURN 4] Player 1, will you take 1, 2, or 3 toothpicks?"<<endl;
    cin>>p1;
    if (p1>3||p1<=0){
        cout<<"Invalid Input"<<endl;
    return 0;
    }
    tpicks-=p1;
    if (tpicks>4)
        cpu=4-p1;
    cout<<"Computer picked: "<<cpu<<endl;
    tpicks-=cpu;
    cout<<"Toothpicks left: "<<tpicks<<endl;
    
    //Turn 5
    cout<<"[TURN 5] Player 1, will you take 1, 2, or 3 toothpicks?"<<endl;
    cin>>p1;
    if (p1>3||p1<=0){
        cout<<"Invalid Input"<<endl;
    return 0;
    }
    tpicks-=p1;
    if (tpicks<=4&&tpicks>=2){
        tpicks-=tpicks-1;
        cout<<"Computer picked: 3"<<endl;
        cout<<"There is only 1 toothpick left: Computer Wins :^("<<endl;
        return 0;
    }
    else if (tpicks>4){
        cpu=4-p1;
    }
    cout<<"Computer picked: "<<cpu<<endl;
    tpicks-=cpu;
    cout<<"Toothpicks left: "<<tpicks<<endl;
    
    //Turn 6
    cout<<"[TURN 6] Player 1, will you take 1, 2, or 3 toothpicks?"<<endl;
    cin>>p1;
    if (p1>3||p1<=0){
        cout<<"Invalid Input"<<endl;
    return 0;
    }
    if (p1==1){
        cout<<"Computer picked: 1"<<endl;
        tpicks-=1;
        cout<<"There is only 1 toothpick left: Computer Wins :^("<<endl;
        return 0;
    }else if (p1==2){
        cout<<"Conputer picked: 1"<<endl;
        cout<<"The Computer took the last one: Player 1 Wins :^)"<<endl;
    }else if (p1==3){
        cout<<"Player 1 took the last 3 toothpicks: Computer Wins :^/"<<endl;
    }
    
    
    //Exit Program!
           
            
    return 0;
}

