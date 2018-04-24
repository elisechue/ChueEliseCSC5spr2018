/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 22, 2018, 1:34 PM
 * Purpose:  Play multiple turns of Yahtzee (conceptual)
 *           (this time for 1 player only)
 */

//System Libraries Here
#include <iostream> //cout, endl
#include <cstdlib>  //random num seed 
#include <ctime>    //setting time for random num generator
#include <iomanip>  //setw
#include <cstring>  //string objects
#include <cmath>    //use pow 
#include <fstream>  //input output files
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //set random number seed 
    srand(static_cast<unsigned int>(time(0)));      
    
    //Declare all Variables, no doubles 
    int die1, die2, die3, die4, die5;   //dice face values = [1,6]
    char rd1,rd2,rd3,rd4,rd5;       //choose which dice to reroll /keep
    char turn;                      //choose to do another turn
    int totPnts=0;      //accumulated points down the line
    short totTurn;
    //totTurn=1;          //total turns is 1
    ifstream in;//Input File stream
    ofstream out;//output file
    string fileIn;  //file name
    char fileOut[]="Trivia.dat";    //uses cmath in file
             //total turns (originally 1 unless prompted)
    fileIn="Turns.dat";
    in.open(fileIn.c_str());
    out.open(fileOut);
    
    //Input or initialize values
    
do{
    in>>totTurn;
    cout<<"This program will run a Turn (3 rolls)  "<<endl;
    cout<<"CAUTION: If you input more characters than asked,"<<endl;
    cout<<" the program will end itself once it reaches the menu portion"<<endl;
    for(int tuPlayd=0;tuPlayd<totTurn;tuPlayd++){
        die1=rand()%6+1;//[1,6]        //turns played; exits loop after 1 turn
        die2=rand()%6+1;
        die3=rand()%6+1;
        die4=rand()%6+1;
        die5=rand()%6+1;
        //Display first round results
        cout<<endl;
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
            die1;                         //IF ELSE IF
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
        }   else {//if(rd5=='r'||rd5=='R'){ //(IF ELSE)
            die5=rand()%6+1;
            }
        cout<<endl;
        //Display Roll 2 results
        cout<<"ROLL 2"<<endl;
        cout<<setw(2)<<die1<<setw(6)<<die2<<setw(6)<<die3<<setw(6)<<die4<<
              setw(6)<<die5<<endl;
        cout<<"Die#1"<<" Die#2"<<" Die#3"<<" Die#4"<<" Die#5"<<endl;

        cout<<"Which dice would you like to keep?"<<endl;
        cout<<"k=keep r=reroll"<<endl;
        cout<<"Example Input: K r R k k"<<endl;
        cin>>rd1>>rd2>>rd3>>rd4>>rd5;  //player inputs choices to keep/reroll
        
        //round 3 parameters
        (rd1=='k'||rd1=='K'?die1:die1=rand()%6+1);  //ternary operator roll3die1
        bool x=true;               //roll3die2
        if (rd2=='r'||rd2=='R'){
            while (x){             //used a boolean to run the while loop once
            die2=rand()%6+1;
            x=false;
            }
        }
        bool dobool=true;          //roll3die3
        do{
            if (rd3=='k'||rd3=='K'){    
                die3;
            }   else if(rd3=='r'||rd3=='R'){
                die3=rand()%6+1;
                }else{                          
                    cout<<"Invalid Input. Try again."<<endl;
                    return 0;
                    }
            dobool=false;
        }while (dobool);            //arbitrary use for a do while loop i know
        if (rd4=='k'||rd4=='K'){    //roll3die4
            die4;
        }   else if(rd4=='r'||rd4=='R'){
            die4=rand()%6+1;
            }else{                          
                cout<<"Invalid Input. Try again."<<endl;
                return 0;
                }
        if(rd5=='r'||rd5=='R'){     //roll3die5 works independent if, but doesnt
            die5=rand()%6+1;            //account for other letters 
        }                               //others will default to keep
        cout<<endl; 
        //Display roll 3 results
        cout<<"ROLL 3"<<endl;
        cout<<setw(2)<<die1<<setw(6)<<die2<<setw(6)<<die3<<setw(6)<<die4<<
              setw(6)<<die5<<endl;
        cout<<"Die#1"<<" Die#2"<<" Die#3"<<" Die#4"<<" Die#5"<<endl;
        cout<<endl;
        cout<<endl;
        //Determine points this turn
        cout<<"Now we determine how many points you've earned this turn."<<endl;
        cout<<"Depending on the combination of dice, there are many choices"
                <<endl;
        cout<<"From the following menu, pick a combo that you rolled and "
                "would get the most points for."
                <<endl;
        cout<<"Type 1 to score for ONEs   (count/add only 1s)"<<endl;
        cout<<"Type 2 to score for TWOs   (count/add only 2s)"<<endl;
        cout<<"Type 3 to score for THREEs (count/add only 3s)"<<endl;
        cout<<"Type 4 to score for FOURs  (count/add only 4s)"<<endl;
        cout<<"Type 5 to score for FIVEs  (count/add only 5s)"<<endl;
        cout<<"Type 6 to score for SIXes  (count/add only 6s)"<<endl;
        cout<<"Type 7 to score for THREE OF A KIND   (add all 5 dice)"<<endl;
        cout<<"Type 8 to score for FOUR OF A KIND    (add all 5 dice)"<<endl;
        cout<<"Type 9 to score for a FULL HOUSE      (25 points)"<<endl;
        cout<<"Type 10 to score for a SMALL STRAIGHT (30 points)"<<endl;
        cout<<"Type 11 to score for a LARGE STRAIGHT (40 points)"<<endl;
        cout<<"Type 12 to score for a YAHTZEE        (50 points)"<<endl;
        cout<<"Type 13 to score for   CHANCE         (add all 5 dice)"<<endl;
        int combo,points; //combination of dice the player has, allot points
        cin>>combo;
        cout<<endl;
        //process input 
        if(combo>=1&&combo<=13){
            switch(combo){
                case 1:{
                    cout<<"How many ONEs do you have?"<<endl;
                    cin>>points;                     //honor system NO CHEATING!
                    totPnts+=points;
                    cout<<"You have "<<points<<" points"<<endl;
                    cout<<"Accumulated Points: "<<totPnts<<endl;
                    break;          //ones = ones
                }
                case 2:{
                    cout<<"Add TWOs together:"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    totPnts+=points;
                    cout<<"Accumulated Points: "<<totPnts<<endl;
                    break;      
                }
                case 3:{
                    cout<<"Add THREEs together:"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    totPnts+=points;
                    cout<<"Accumulated Points: "<<totPnts<<endl;                    
                    break;
                }
                case 4:{
                    cout<<"Add FOURs together:"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    totPnts+=points;
                    cout<<"Accumulated Points: "<<totPnts<<endl;                    
                    break;
                }
                case 5:{
                    cout<<"Add FIVEs together:"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    totPnts+=points;
                    cout<<"Accumulated Points: "<<totPnts<<endl;
                    break;
                }
                case 6:{
                    cout<<"Add SIXes together:"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    totPnts+=points;
                    cout<<"Accumulated Points: "<<totPnts<<endl;
                    break;
                }
                case 7:{
                    cout<<"THREE OF A KIND - Sum of all dice:"<<endl;
                    cin>>points;         //simple addition
                    cout<<"You have "<<points<<" points"<<endl;
                    totPnts+=points;
                    cout<<"Accumulated Points: "<<totPnts<<endl;
                    break;
                }
                case 8:{
                    cout<<"FOUR OF A KIND - Sum of all dice:"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    totPnts+=points;
                    cout<<"Accumulated Points: "<<totPnts<<endl;
                    break;
                }
                case 9:{
                    cout<<"FULL HOUSE - enter 25 points:"<<endl; //flat rate points
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    totPnts+=points;
                    cout<<"Accumulated Points: "<<totPnts<<endl;
                    break;
                }
                case 10:{
                    cout<<"SMALL STRAIGHT - enter 30 points:"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    totPnts+=points;
                    cout<<"Accumulated Points: "<<totPnts<<endl;
                    break;
                }
                case 11:{
                    cout<<"LARGE STRAIGHT - enter 40 points:"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    totPnts+=points;
                    cout<<"Accumulated Points: "<<totPnts<<endl;
                    break;
                }
                case 12:{
                    cout<<"YAHTZEE - enter 50 points"<<endl;
                    cin>>points;
                    cout<<"You have "<<points<<" points"<<endl;
                    totPnts+=points;
                    cout<<"Accumulated Points: "<<totPnts<<endl;
                    break;
                }   
                case 13:{
                    cout<<"CHANCE - Sum of all dice:"<<endl;//in a full game 
                    cin>>points;            //this would be the garbage pile if
                    cout<<"You have "<<points<<" points"<<endl;//you ran out of
                    totPnts+=points;//opportunity for points or got a bad score
                    cout<<"Accumulated Points: "<<totPnts<<endl;
                    break;             
                }                
            }
        }else{
         cout<<"Exiting Menu"<<endl;
         }
    }
    cout<<"Would you like to try one more Turn? (Y/N)"<<endl;
    cin>>turn;
}while(turn=='y'||turn=='Y');

    //Trivia
    out<<"Let's calculate the odds of getting a Yahtzee in 1 roll!"<<endl;
    out<<"Each dice has a 1/6 chance of turning up #1-6"<<endl;
    out<<"Given the first dice is the number you want to match:"<<endl;
    float prob;         //probability of yahtzee in one roll (decimal)
    prob=pow((1.0f/6),4);
    out<<"That comes out to (1/6)^4 (the expo. being the remaining 4 dice)"
            " = "<<prob<<endl;
    out<<"which equates to "<<setprecision(1)<<prob*100<<"% chance"<<endl;
    //convert to a percentage which is less than 1 percent!
    
    //Close the file
    in.close();
    out.close();

    //Exit Program!
    
    return 0;
}

