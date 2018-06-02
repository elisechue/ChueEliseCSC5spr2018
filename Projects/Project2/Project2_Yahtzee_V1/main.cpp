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
void roll(int [],int);//input 1 position and roll that die
void display(int [],int);//displays the 5 dice
void sort(int [],int);//sorts dice
void reRoll(int []);//inputs which dice are going to be rerolled
void menu();
void scoring(int [],int,int &);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //set random number seed
     srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables, no doubles
     const int NUMDICE=5;      //num of dice used for the entire game is 5
     const int OPTIONS=13;
     int dice[NUMDICE];//array of our 5 dice        
     int score=0;//player's score
     vector < int > reDice;//dice going to be rerolled
    //Input or initialize values
     for(int round=0;round<13;round++){
        //Roll the first set
        for(int i=0;i<NUMDICE;i++){
           roll(dice,i);
        }
        //Sort dice
        sort(dice,NUMDICE);
        //display the dice
        display(dice,NUMDICE);

        //reroll dice
        for(int i=1;i<=2;i++){//two turns to reroll dice
           reRoll(dice);//reroll
           sort(dice,NUMDICE);//sort
           display(dice,NUMDICE);//display
        }
        menu();
        scoring(dice,NUMDICE,score);
        cout<<endl<<"Your score is: "<<score<<endl;
     }
    //Map/Process/Calculations, Inputs to Outputs
    
    //Display Outputs

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
void display(int dice[],int NUMDICE){
    cout<<"Your dice are: ";
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
         cin>>numRoll;//how many dice are they rerolling
         cout<<"Input which dice to reroll 1-5"<<endl;
         for(int i=0;i<numRoll;i++){//loop numRoll times
             int die;//which die they want to reroll
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
void scoring(int dice[],int NUMDICE,int &score){
    char choice;
    int count=0;
    cin>>choice;
    switch(choice){
        case '1':{
            for(int j=0;j<NUMDICE;j++){
                if(dice[j]==1)count++;
            }score+=count;break;
        }
        case '2':{
            for(int j=0;j<NUMDICE;j++){
                if(dice[j]==2)count++;
            }score+=(count*2);break;
        }
        case '3':{
            for(int j=0;j<NUMDICE;j++){
                if(dice[j]==3)count++;
            }score+=(count*3);break;
        }
        case '4':{
            for(int j=0;j<NUMDICE;j++){
                if(dice[j]==4)count++;
            }score+=(count*4);break;
        }
        case '5':{
            for(int j=0;j<NUMDICE;j++){
                if(dice[j]==5)count++;
            }score+=(count*5);break;
        }
        case '6':{
            for(int j=0;j<NUMDICE;j++){
                if(dice[j]==6)count++;
            }score+=(count*6);break;
        }
        case 't':{
            for(int j=0;j<NUMDICE;j++){
                score+=dice[j];
            }break;
        }
        case 'f':{
            for(int j=0;j<NUMDICE;j++){
                score+=dice[j];
            }break;
        }
        case 'c':{
            for(int j=0;j<NUMDICE;j++){
                score+=dice[j];
            }break;
        }
        case 'h':{score+=25;break;}
        case 's':{score+=30;break;}
        case 'l':{score+=40;break;}
        case 'y':{score+=50;break;}
    }
}
