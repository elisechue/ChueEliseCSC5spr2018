/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 22, 2018, 10:27 PM
 * Purpose:  Calculate pi using given series
 */

//System Libraries Here
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles  
    float count,    //looper
            odd,    //each division piece increases but they're all odd
            sum,    //
            numTerm,//number of terms
            pi;
    bool  boop;     //used to alternate between adding and subtracting      
        
    //Input or initialize values
    count=1;
    odd=1;
    sum=0;
    cout<<"How many terms do you want?"<<endl;
    cout<<"The more terms you use, the more accurate this will be."<<endl;
    cout<<"(and I'm talking upwards of thousands here so go crazy)"<<endl;
    cin>>numTerm;
    pi=0;
    boop=true;
    
    //Map/Process/Calculations, Inputs to Outputs
    do{
        if(boop){
            pi+=4/odd;
            boop=false;
        }else {
            pi-=4/odd;
            boop=true;
        }odd+=2;
        count++;
        sum+=pi;
    }while(count<numTerm);
    cout<<"Pi = "<<(sum/count)<<endl;
    //Display Outputs

           
            
    return 0;
}

