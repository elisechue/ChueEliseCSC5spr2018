/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 17, 2018, 11:20 AM
 * Purpose:  Play 2 turns of Yahtzee (conceptual)
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>  //random num seed 
#include <ctime>    //setting time for random num generator
#include <iomanip>  //setw
#include <cstring>  //string objects
#include <cmath>    //use pow
#include <fstream>  //input output file
#include <cstring>  
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //set random seed 
    srand(static_cast<unsigned int>(time(0)));      
    
    //Declare all Variables, no doubles 
    int totTurn;
    int die1, die2, die3, die4, die5;    //dice face values = [1,6]
    char rd1,rd2,rd3,rd4,rd5;       //choose which dice to reroll /keep
    totTurn=2;
    for(int roPlayd=0;roPlayd<totTurn;roPlayd++){   //plays 2 whole turns
        //Input or initialize values
        cout<<"This program will run a turn each (3 rolls) for 2 players"<<endl;
        die1=rand()%6+1;//[1,6]
        die2=rand()%6+1;
        die3=rand()%6+1;
        die4=rand()%6+1;
        die5=rand()%6+1;
        //Display first round results
        cout<<"ROLL 1"<<endl;
        cout<<setw(2)<<die1<<setw(6)<<die2<<setw(6)
            <<die3<<setw(6)<<die4<<setw(6)<<die5<<endl;  //evenly spaces output
        cout<<"Die#1"<<" Die#2"<<" Die#3"<<" Die#4"<<" Die#5"<<endl;
    
        cout<<"Which dice would you like to keep?"<<endl;
        cout<<"k=keep r=reroll"<<endl;
        cout<<"Example Input: K r R k k"<<endl;
        cin>>rd1>>rd2>>rd3>>rd4>>rd5;  //player inputs choices to reroll dice

        //round 2 parameters
        if (rd1=='k'||rd1=='K'){          //avoid player using other characters
            die1;
        }   else if(rd1=='r'||rd1=='R'){  
            die1=rand()%6+1;                 
            }else{                          //validates user input for k/r use
                cout<<"Invalid Input. Try again."<<endl;
                return 0;                       //ends program
                }
        if (rd2=='k'||rd2=='K'){            
            die2;
        }   else if(rd2=='r'||rd2=='R'){
            die2=rand()%6+1;
            }else{                          
                cout<<"Invalid Input. Try again."<<endl;
                return 0;
                }
        if (rd3=='k'||rd3=='K'){
            die3;
        }   else if(rd3=='r'||rd3=='R'){
            die3=rand()%6+1;
            }else{                          
                cout<<"Invalid Input. Try again."<<endl;
                return 0;
                }
        if (rd4=='k'||rd4=='K'){
            die4;
        }   else if(rd4=='r'||rd4=='R'){
            die4=rand()%6+1;
            }else{                          
                cout<<"Invalid Input. Try again."<<endl;
                return 0;
                }
        if(rd5!='k'&&rd5!='K'&&rd5!='r'&&rd5!='R') {        //roundabout way to                 
                cout<<"Invalid Input. Try again."<<endl;   //validate (indep if)
                return 0;
        }
        if (rd5=='k'||rd5=='K'){       //goes to show this section is flexible
            die5;                      // w/ regards to the types of statements
        }   else {//if(rd5=='r'||rd5=='R'){
            die5=rand()%6+1;
            }

        //Display Roll 2
        cout<<"ROLL 2"<<endl;
        cout<<setw(2)<<die1<<setw(6)<<die2<<setw(6)<<die3<<setw(6)<<die4<<
              setw(6)<<die5<<endl;
        cout<<"Die#1"<<" Die#2"<<" Die#3"<<" Die#4"<<" Die#5"<<endl;

        cout<<"Which dice would you like to keep?"<<endl;
        cout<<"k=keep r=reroll"<<endl;
        cout<<"Example Input: K r R k k"<<endl;
        cin>>rd1>>rd2>>rd3>>rd4>>rd5;  //player inputs choices to keep/reroll
        
        //round 3 parameters
        (rd1=='k'||rd1=='K'?die1:die1=rand()%6+1);

        if(rd5=='r'||rd5=='R'){
            die5=rand()%6+1;
        }
        
        cout<<"ROLL 3"<<endl;
        cout<<setw(2)<<die1<<setw(6)<<die2<<setw(6)<<die3<<setw(6)<<die4<<
              setw(6)<<die5<<endl;
        cout<<"Die#1"<<" Die#2"<<" Die#3"<<" Die#4"<<" Die#5"<<endl;
        
        //Determine points this turn
        cout<<"Now we determine how many points you've earned this turn."<<endl;
        cout<<"Depending on the combination of dice, there are many choices"
                <<endl;
        cout<<"From the following menu, check which combo earns you the most"
                <<endl;
        cout<<"Type 1 to score for ONEs   (count/add only 1s)"<<endl;
        cout<<"Type 2 to score for TWOs   (count/add only 2s)"<<endl;
        cout<<"Type 3 to score for THREEs (count/add only 3s)"<<endl;
        cout<<"Type 4 to score for FOURs  (count/add only 4s)"<<endl;
        cout<<"Type 5 to score for FIVEs  (count/add only 5s)"<<endl;
        cout<<"Type 6 to score for SIXes  (count/add only 6s)"<<endl;
        cout<<"Type 7 to score for THREE OF A KIND   (add all dice)"<<endl;
        cout<<"Type 8 to score for FOUR OF A KIND    (add all dice)"<<endl;
        cout<<"Type 9 to score for a FULL HOUSE      (25 points)"<<endl;
        cout<<"Type 10 to score for a SMALL STRAIGHT (30 points)"<<endl;
        cout<<"Type 11 to score for a LARGE STRAIGHT (40 points)"<<endl;
        cout<<"Type 12 to score for a YAHTZEE        (50 points)"<<endl;
        cout<<"Type 13 to score for   CHANCE         (add all dice)"<<endl;
        cout<<"Please use upper case only if choosing a letter."<<endl;
        int combo,points; //combination of dice the player has, allot points
        cin>>combo;
        
        //process input 
        if(combo>=1&&combo<=13){
            switch(combo){
                case 1:{
                    cout<<"Add up your ONEs:"<<endl;
                    cin>>points;         //NO CHEATING!
                    cout<<"You have "<<points<<" points"<<endl;
                    break;
                }
                case 2:{
                    cout<<"Add up your TWOs:"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    break;
                }
                case 3:{
                    cout<<"Add up your THREEs:"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    break;
                }
                case 4:{
                    cout<<"Add up your FOURs:"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    break;
                }
                case 5:{
                    cout<<"Add up your FIVEs:"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    break;
                }
                case 6:{
                    cout<<"Add up your SIXes:"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    break;
                }
                case 7:{
                    cout<<"THREE OF A KIND - Add all dice:"<<endl;
                    cin>>points;         
                    cout<<"You have "<<points<<" points"<<endl;
                    break;
                }
                case 8:{
                    cout<<"FOUR OF A KIND - Add all dice:"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    break;
                }
                case 9:{
                cout<<"FULL HOUSE - enter 25 points:"<<endl;
                cin>>points;
                cout<<"You have "<<points<<" points"<<endl;
                break;
                }
                case 10:{
                cout<<"SMALL STRAIGHT - enter 30 points:"<<endl;
                cin>>points;
                cout<<"You have "<<points<<" points"<<endl;
                break;
                }
                case 11:{
                cout<<"LARGE STRAIGHT - enter 40 points:"<<endl;
                cin>>points;
                cout<<"You have "<<points<<" points"<<endl;
                break;
                }
                case 12:{
                cout<<"YAHTZEE - enter 50 points"<<endl;
                cin>>points;
                cout<<"You have "<<points<<" points"<<endl;
                break;
                }   
                case 13:{
                cout<<"CHANCE - Add all dice:"<<endl;
                cin>>points;
                cout<<"You have "<<points<<" points"<<endl;
                break;
                }                
            }
        }
    }
    //Exit Program!
    
    return 0;
}

