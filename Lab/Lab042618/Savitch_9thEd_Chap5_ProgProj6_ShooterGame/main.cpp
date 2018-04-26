/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 26, 2018, 12:09 PM
 * Purpose:  Game theory example 
 */

//System Libraries Here
#include <iostream>     //input/output library
#include <cstdlib>      //srand
#include <ctime>        //time function
#include <iomanip>      //formatting library
#include <cmath>        //power function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
float frand();//Probability from 0-1
bool shoot(float);
//Program Execution Begins Here

int main(int argc, char** argv) {
    //set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare all Variables, no doubles
    bool aLive, bLive, cLive;
    char remain;
    float aPk,bPk,cPk;
    int aCount, bCount, cCount;
    
    //Input or initialize values
    aCount=bCount=cCount=0;
    aPk=1.0f/3.0f;
    bPk=1.0f/2.0f;
    cPk=1.0f;
    
    for(int game=1;game<1000;game++){
         aLive=bLive=cLive=true;
    
        //Test shoot function
        /*int count=0;
        for(int i=1;i<=1000;i++){
            if(shoot(bPk))count++;
        }
        cout<<"Count = "<<count<<endl;*/
        //Map/Process/Calculations - until 1 person remains
        do{
            if(aLive){
                if(cLive)       cLive=shoot(aPk);
                else if(bLive)  bLive=shoot(aPk);
            }if(bLive){
                if(cLive)       cLive=shoot(bPk);
                else if(aLive)  aLive=shoot(bPk);   
            }if(cLive){
                if(bLive)       bLive=shoot(cPk);
                else if(aLive)  aLive=shoot(cPk); 
            }   
            remain=aLive+bLive+cLive;
        }while(remain>1);
        aCount+=aLive;
        bCount+=bLive;
        cCount+=cLive;
    }
   
    
    //Display Outputs
    /*cout<<"Arin Pk    = "<<aPk<<endl;     checking their kill probabilities
    cout<<"Bob Pk     = "<<bPk<<endl;
    cout<<"Charlie Pk = "<<cPk<<endl;*/
    cout<<"Last Round Results:"<<endl;
    cout<<"Arin is    "<<(aLive?"Alive":"Deceased")<<endl;
    cout<<"Bob is     "<<(bLive?"Alive":"Deceased")<<endl;
    cout<<"Charlie is "<<(cLive?"Alive":"Deceased")<<endl;
    cout<<endl;
    cout<<"Final Results"<<endl;
    cout<<"Arin    Lives "<<aCount<<" times"<<endl;
    cout<<"Bob     Lives "<<bCount<<" times"<<endl;
    cout<<"Charlie Lives "<<cCount<<" times"<<endl;
    //Exit Program!
    
    return 0;
}

bool shoot(float pk){
    if(frand()>pk)return true;
    return false;
}
float frand(){
    static float MAXRAND=pow(2,31)-1;
    return rand()/MAXRAND;
}

//TESTER 
    /*float mx,mn;
    mx=mn=frand();
    for(int i=1;i<=1000;i++){
        float pk=frand();
        if(mx<pk)mx=pk;
        if(mn>pk)mn=pk;
        cout<<pk<<endl;
    }
    cout<<"Max = "<<mx<<endl;
    cout<<"Min = "<<mn<<endl;*/ 