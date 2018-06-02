/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 31, 1:53 PM
 * Purpose: Yahtzee revamped for Project 2 using functions and such version 2
 */

//System Libraries Here
#include <iostream>
#include <vector>       //vectors
#include <cstdlib>      //random function
#include <ctime>        //rand num seed
#include <iomanip>      //format library
#include <cmath>        //math library for pow
#include <fstream>      //I/O files
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const int PLAYERS=2;    //FOR 2D ARRAY COLUMN SIZE I SWEAR

//Function Prototypes 
void roll(int [],int);//input 1 position and roll that die
void display(int [],int,int=0);//displays the 5 dice
void sort(int [],int);//sorts dice via mikeSort
void sort(int [],int,char); //a select sort function to showcase overload concept
void reRoll(int []);//inputs which dice are going to be rerolled
void menu();//displays categories for scoring
void scoring(int [],int,int [],int,bool [][PLAYERS]);           //does actual scoring
void scorBrd(vector < int >,vector < int >,vector < int >);     //prints out score each round
bool chknDin(int [],int,int);//winner winner chicken dinner

//Program Execution Begins Here

int main(int argc, char** argv) {
    //set random number seed
     srand(static_cast<unsigned int>(time(0)));
     //Declare all Variables, no doubles
     char replay;   //choose to replay the game
    ifstream in;//Input File stream
    ofstream out;//output file
    string fileIn;  //file name
    char fileOut[]="Trivia.dat";    //uses cmath, calculates, and shows in out file 
    fileIn="Rounds.dat";        //will input the totRnd (total rounds that will be played in a game)
    in.open(fileIn.c_str());
    out.open(fileOut);
     do{
         const int NUMDICE=5;      //num of dice used for the entire game is 5
         const int OPTIONS=13;//number of options to score your roll
         int p1Dice[NUMDICE];//array of 5 dice for player 1
         int p2Dice[NUMDICE];//array of 5 dice for player 2
         int score[PLAYERS]={0,0};//player's score array position is 0 for player 1, 1 for player 2
         int player1=0;//used for calling functions
         int player2=1;//used for calling functions
         bool oneTry [OPTIONS][PLAYERS] = { };
         vector < int > numRnds;//vector to count the number of rounds
         vector < int > p1RndPt;//points at end of round for player 1
         vector < int > p2RndPt;//points at end of round for player 2
         bool tie=false;
         int totRnd;    //file is set for 13 rounds (2 for testing purposes)
         
        //Input or initialize values
         in>>totRnd;
         for(float round=0;round<totRnd;round++){
            //Roll the first set for player 1
             cout<<"         PLAYER 1       "<<endl;
             cout<<"         Round "<<round+1<<endl;
            for(int i=0;i<NUMDICE;i++){
               roll(p1Dice,i);
            }
            //Sort p1Dice
            sort(p1Dice,NUMDICE);
            //display p1 Dice
            display(p1Dice,NUMDICE);

            //reroll p1 Dice
            for(int i=1;i<=2;i++){//two turns to reroll p1Dice
               reRoll(p1Dice);//reroll
               sort(p1Dice,NUMDICE);//sort
               display(p1Dice,NUMDICE,player1);//display
            }
            //menu and scoring for p1
            menu();
            scoring(p1Dice,NUMDICE,score,player1,oneTry);
            cout<<endl<<"Your score is: "<<score[player1]<<endl<<endl;

            cout<<"         PLAYER 2       "<<endl;
            cout<<"         Round "<<round+1<<"       "<<endl;
            //Roll the first set for player 2
            for(int i=0;i<NUMDICE;i++){
               roll(p2Dice,i);
            }
            //Sort p2Dice
            sort(p2Dice,NUMDICE,'s');//s for selection sort as proof of concept for overloading
            //display p2 Dice
            display(p2Dice,NUMDICE,player2);

            //reroll p2 Dice
            for(int i=1;i<=2;i++){//two turns to reroll p2Dice
               reRoll(p2Dice);//reroll
               sort(p2Dice,NUMDICE);//selection sort
               display(p2Dice,NUMDICE,player2);//display
            }
            //menu and scoring for p2
            menu();
            scoring(p2Dice,NUMDICE,score,player2,oneTry);
            cout<<endl<<"Your score is: "<<score[player2]<<endl<<endl;
            numRnds.push_back(round+1);

            //track round score for p1 and p2
            p1RndPt.push_back(score[player1]);
            p2RndPt.push_back(score[player2]);
         }

        //Display Scoreboard
         scorBrd(numRnds,p1RndPt,p2RndPt);
        //Display Winner
         if(chknDin(score,player1,player2))cout<<"It is a TIE!"<<endl;
         cout<<"Would you like to play again? [Y/N]"<<endl;
         cin>>replay;
     }while (replay=='y'||replay=='Y');
     
     cout<<"Thank you for playing!"<<endl;
     
    //out file Trivia.dat, will show calculations in that file
    out<<"Let's calculate the odds of getting a Yahtzee in 1 roll!"<<endl;
    out<<"Each dice has a 1/6 chance of turning up #1-6"<<endl;
    out<<"Given the first dice is the number you want to match:"<<endl;
    float prob;         //probability of yahtzee in one roll (decimal)
    prob=pow((static_cast<float>(1)/6),4);
    out<<"That comes out to (1/6)^4 (the expo. being the remaining 4 dice)"
            " = "<<prob<<endl;
    out<<"which equates to "<<setprecision(1)<<prob*100<<"% chance"<<endl;
    //convert to a percentage which is less than 1 percent!
    
    //Close the file
    in.close();
    out.close();

     exit(0);   //this jumps ahead to return 0 which ends the function. i didnt know where else to put it
    //Exit Program!
    return 0;
}

//******************************************************************************
//        FUNCTIONS START HERE
void roll(int dice[],int die){
    dice[die]=rand()%6+1;
}
void sort(int dice[],int NUMDICE){//swaps lowest number to first position
    for(int i=0;i<NUMDICE-1;i++){//then repeat until all numbers are in order
        for(int j=i+1;j<NUMDICE;j++){
            if(dice[j]<dice[i]){
                int temp=dice[i];
                dice[i]=dice[j];
                dice[j]=temp;
            }
        }
    }
}
void sort(int dice[],int NUMDICE,char s){
    for(int lstSize=0;lstSize<NUMDICE-1;lstSize++){ //ListSize
        char small=dice[lstSize];
        char indxSml=lstSize;
        for(int findSml=lstSize+1;findSml<NUMDICE;findSml++){
            if(small>dice[findSml]){
                small=dice[findSml];
                indxSml=findSml;
            }
        }
        char temp=dice[lstSize];
        dice[lstSize]=dice[indxSml];
        dice[indxSml]=temp;
    }
}
void display(int dice[],int NUMDICE,int player){
    cout<<"Player "<<player+1<<" your dice are: ";
    for(int i=0;i<NUMDICE;i++){//display all 5 dice
        cout<<dice[i]<<" ";
    }
    cout<<endl;
}
void reRoll(int dice[]){
    cout<<"Would you like to reroll any dice? [Y/N]"<<endl;
    char reroll;//decides whether to reroll or not
     int numRoll;//number of dice to be rerolled
     cin>>reroll;
     if(reroll=='Y'||reroll=='y'){//if they want to reroll
         cout<<"How many dice do you want to reroll?"<<endl;
         cin>>numRoll;//how MANY dice are they rerolling
         cout<<"Input which dice to reroll 1-5"<<endl;
         for(int i=0;i<numRoll;i++){//loop numRoll times
             int die;//WHICH die they want to reroll
             cin>>die;
             dice[die-1]=rand()%6+1;//reroll the dice
         }
     }
}
void menu(){
    cout<<"Now enter how you want to score your dice"<<endl;
    cout<<"If you enter the same choice more than once it will add 0 to "<<endl;
    cout<<"your score."<<endl;
    for(int i=1;i<=6;i++){
        cout<<"For "<<i<<"'s enter ("<<i<<")"<<endl;
    }
    cout<<"For 3 of a kind enter (t)"<<endl;
    cout<<"For 4 of a kind enter (f)"<<endl;
    cout<<"For a Full House enter (h)"<<endl;
    cout<<"For a Small Straight enter (s)"<<endl;
    cout<<"For a Large Straight enter (l)"<<endl;
    cout<<"For a YAHTZEE enter (y)"<<endl;
    cout<<"For a Chance enter (c)"<<endl;
}
void scoring(int dice[],int NUMDICE,int score[],int player,
    bool oneTry[][PLAYERS]){
    char choice;
    int count=0;
    cin>>choice;
    switch(choice){
        case '1':{
            for(int j=0;!oneTry[0][player]&&j<NUMDICE;j++){
                if(dice[j]==1)count++;
            }score[player]+=count;oneTry[0][player]=true;break;
        }
        case '2':{
            for(int j=0;!oneTry[1][player]&&j<NUMDICE;j++){
                if(dice[j]==2)count++;
            }score[player]+=(count*2);oneTry[1][player]=true;break;
        }
        case '3':{
            for(int j=0;!oneTry[2][player]&&j<NUMDICE;j++){
                if(dice[j]==3)count++;
            }score[player]+=(count*3);oneTry[2][player]=true;break;
        }
        case '4':{
            for(int j=0;!oneTry[3][player]&&j<NUMDICE;j++){
                if(dice[j]==4)count++;
            }score[player]+=(count*4);oneTry[3][player]=true;break;
        }
        case '5':{
            for(int j=0;!oneTry[4][player]&&j<NUMDICE;j++){
                if(dice[j]==5)count++;
            }score[player]+=(count*5);oneTry[4][player]=true;break;
        }
        case '6':{
            for(int j=0;!oneTry[5][player]&&j<NUMDICE;j++){
                if(dice[j]==6)count++;
            }score[player]+=(count*6);oneTry[5][player]=true;break;
        }
        case 't':{
            for(int j=0;!oneTry[6][player]&&j<NUMDICE;j++){
                score[player]+=dice[j];
            }oneTry[6][player]=true;break;
        }
        case 'f':{
            for(int j=0;!oneTry[7][player]&&j<NUMDICE;j++){
                score[player]+=dice[j];
            }oneTry[7][player]=true;break;
        }
        case 'c':{
            for(int j=0;!oneTry[8][player]&&j<NUMDICE;j++){
                score[player]+=dice[j];
            }oneTry[8][player]=true;break;
        }
        case 'h':{if(!oneTry[9][player]){
            score[player]+=25;oneTry[9][player]=true;}break;}
        case 's':{if(!oneTry[10][player]){
            score[player]+=30;oneTry[10][player]=true;}break;}
        case 'l':{if(!oneTry[11][player]){
            score[player]+=40;oneTry[11][player]=true;}break;}
        case 'y':{if(!oneTry[12][player]){
            score[player]+=50;oneTry[12][player]=true;}break;}
    }
}
void scorBrd(vector < int > numRnds,vector < int > p1RndPt,
        vector < int > p2RndPt){
    cout<<setw(20)<<"SCOREBOARD"<<endl;
    cout<<setw(9)<<"Rounds"<<"    "<<setw(9)<<"Player 1"<<"   "
            <<setw(9)<<"Player 2"<<endl;
    for(int i=0;i<numRnds.size();i++){
        cout<<setw(9)<<"Round "<<numRnds[i];
        cout<<setw(8)<<p1RndPt[i]<<"   ";
        cout<<setw(9)<<p2RndPt[i]<<endl;
    }
}
bool chknDin(int score[],int player1,int player2){
    cout<<endl;
    static string p1="Player 1";
    static string p2="Player 2";
    if(score[player1]>score[player2]){
        cout<<p1<<" is the winner!"<<endl;
        return false;
    }
    else if(score[player2]>score[player1]){
        cout<<p2<<" is the winner!"<<endl;
        return false;
    }
    else return true;
}
