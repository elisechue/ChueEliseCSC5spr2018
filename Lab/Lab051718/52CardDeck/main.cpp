/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 17, 2018, 11:23 AM
 * Purpose: Deck of cards with suits 
 * and play blackjack
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
void filDeck(char [],char);
char suit(char);
char face(char);
void shuffle(char [],char);
void prntDck(char [],char,char);
void slctSrt(char [],char);//select sort
char pullDck(char [],char);    //pulling from deck
void dealHnd(char [],char,char [],char);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //set rand num seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare all Variables, no doubles
    const char DCKSIZE=52;
    char deck[DCKSIZE];
    const char HNDSIZE=5;   //hand size
    char hand[HNDSIZE];
    
    //Input or initialize values
    filDeck(deck,DCKSIZE);
    shuffle(deck,DCKSIZE);
    slctSrt(deck,DCKSIZE);
    prntDck(deck,DCKSIZE,13);
    for(int tryit=1;tryit<=11;tryit++){
        dealHnd(deck,DCKSIZE,hand,HNDSIZE);
        prntDck(hand,HNDSIZE,HNDSIZE);
    }
    prntDck(deck,DCKSIZE,13);
    //Map/Process/Calculations, Inputs to Outputs
    
    //Display Outputs

    //Exit Program!
    
    return 0;
}
void dealHnd(char deck[],char nDkCrds,char hand[],char nHdCrds){
    static char current=0;
    if(current>nDkCrds-nHdCrds){
        shuffle(deck,nDkCrds);
        current=0;
    }
    for(int card=0;card<nHdCrds;card++){
        hand[card]=deck[current++];
    }
}
/*char pullDck(char deck[],char nCards){
    static char current=0;
    if(current>nCards*0.9){
        shuffle(deck,nCards);
        current=0;
    }
    return deck[current++];
}*/
void filDeck(char c[],char n){
    for(int eachCrd=0;eachCrd<n;eachCrd++){
        c[eachCrd]=eachCrd;
    }
}
char suit(char card){
    string suitVal="SDCH";
    return suitVal[card/13];
    /*if(card<13)return 'S';
    else if(card<26)return 'D';
    else if(card<39)return 'C';
    else return 'H';*/
}
char face(char card){
    string faceVal="A23456789TJQK";
    return faceVal[card%13];
}
void shuffle(char c[],char nCard){
    for(int shfl=1;shfl<=7;shfl++){
        for(int card=0;card<nCard;card++){
            int random=rand()%nCard;
            char temp=c[card];
            c[card]=c[random];
            c[random]=temp;
        }
    }
}
void prntDck(char deck[],char nCard,char perLine){
    cout<<endl;
    for(int card=0;card<nCard;card++){
        cout<<face(deck[card])<<suit(deck[card])<<" ";
        if(card%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
void slctSrt(char deck[],char dckSize){
    for(int lstSize=0;lstSize<dckSize-1;lstSize++){ //ListSize
        char small=deck[lstSize];
        char indxSml=lstSize;
        for(int findSml=lstSize+1;findSml<dckSize;findSml++){
            if(small>deck[findSml]){
                small=deck[findSml];
                indxSml=findSml;
            }
        }
        char temp=deck[lstSize];
        deck[lstSize]=deck[indxSml];
        deck[indxSml]=temp;
    }
}