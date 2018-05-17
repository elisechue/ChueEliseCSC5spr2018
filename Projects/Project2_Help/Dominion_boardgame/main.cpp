/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 17, 2018, 9:43 AM
 * Purpose:  set up for dominion
 * NEXT TIME COMMENT THE F OUTTA THIS esp single letter variables
 * so that everything is explained
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const char NCARDS=7;    //column dimension for the players 2d array

//Function Prototypes 
void filMny(char [],char);
void filPts(char [],char);
void filAct(char [],char);
void filPlyr(char [][NCARDS],char);
void prntDck(char [],char,char);
void prntPly(char [][NCARDS],char);
void shuffle(char [],char);
void bubble(char[], char);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //set rand num seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables, no doubles
    const char NPLYRS=2;
    const char NMNY=99-2*5;//2 players start with 5 bronze money cards
    const char NPTS=90-2*2;//2 players start w/ 2 one point cards from point deck
    const char NACT=100;
    char mnyDeck[NMNY];
    char ptsDeck[NPTS];
    char actDeck[NACT];
    char cards[NPLYRS][NCARDS];
    
    //Input or initialize values
    filMny(mnyDeck,NMNY);
    filPts(ptsDeck,NPTS);
    filAct(actDeck,NACT);
    filPlyr(cards,NPLYRS);
    
    //Check the fills
    shuffle(mnyDeck,NMNY);
    shuffle(ptsDeck,NPTS);
    shuffle(actDeck,NACT);
    
    prntDck(mnyDeck,NMNY,10);
    prntDck(ptsDeck,NPTS,10);
    prntDck(actDeck,NACT,10);
    prntPly(cards,NPLYRS);
    
    //make sure we didnt lose any cards
    bubble(mnyDeck,NMNY);
    prntDck(mnyDeck,NMNY,10);

    //Map/Process/Calculations, Inputs to Outputs
    
    //Display Outputs

    //Exit Program!
    
    return 0;
}

void filMny(char m[],char n){
    char cnt=0;
    //33 silver
    for(int i=1;i<=33;i++){
        m[cnt++]='S';
    }
    //33 gold
    for(int i=1;i<=33;i++){
        m[cnt++]='G';
    }
    //23 bronze
    for(int i=1;i<=23;i++){
        m[cnt++]='B';
    }
    if(cnt!=n)cout<<"Error in filling the MONEY deck";
}
void filPts(char p[],char n){
    char cnt=0;
    //30 3's
    for(int i=1;i<=30;i++){
        p[cnt++]='3';
    }
    //30 6's
    for(int i=1;i<=30;i++){
        p[cnt++]='6';
    }
    //30-4 1's
    for(int i=1;i<=26;i++){
        p[cnt++]='1';
    }
    if(cnt!=n)cout<<"Error in filling the POINT deck";
}
void filAct(char a[],char n){
    char cnt=0;
    for (int i=0;i<10;i++){
        for(int j=1;j<=10;j++){
            a[cnt++]='a'+i;
        }
    }
}
void filPlyr(char p[][NCARDS],char n){
    //i represents plyr
    for(int i=0;i<n;i++){
        //each player gets 5 bronze cards
        //j represents num of cards
        for(int j=0;j<5;j++){
            p[i][j]='B';
        }
        //each player gets 2 1 pt cards
        for(int j=5;j<NCARDS;j++){
            p[i][j]='1';
        }
    }
}
void prntDck(char d[],char n,char perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<d[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
void prntPly(char p[][NCARDS],char n){
    cout<<endl;
    for(int i=0;i<n;i++){
       for(int j=0;j<NCARDS;j++){
           cout<<p[i][j]<<" ";
       } 
       cout<<endl;
    }
    cout<<endl;
}
void shuffle(char c[],char n){
    for(int shfl=1;shfl<7;shfl++){
        //start with each card randomly choose another card and swap
        for(int card=0;card<n;card++){
            int random=rand()%n;
            char temp=c[card];
            c[card]=c[random];
            c[random]=temp;
        }
    }
}
void bubble(char d[], char n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(d[i]>d[j+1]){
                char temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }
        }
    }
}