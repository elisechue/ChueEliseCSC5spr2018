/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 29, 2018 6:44PM
 * Purpose:  ISP charges
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char package,bestPac;
    unsigned short hours;
    float aCost,bCost,cCost;    //compare each package
    float bestCo,savings; //
    
    //Input or initialize values Here
    cout<<"ISP charges for service delivered."<<endl;
    cout<<"Input package A,B,C then hours used for the month"<<endl;
    cin>>package>>hours;
    
    //Basic Charges
    //A pack
    if(hours<=10){
        aCost=16.99f;
    }else if(hours>10&&hours<=20){
        aCost=16.99f+((hours-10)*0.95f);
    }else if(hours>20){
        aCost=16.99f+((hours-10)*0.95f)+((hours-10)*0.85f);
    }
    //B pack
    if(hours<=20){
        bCost=26.99f;
    }else if(hours>20&&hours<=30){
        bCost=26.99f+((hours-20)*0.74f);
    }else if(hours>30){
        bCost=26.99f+((hours-20)*0.74f)+((hours-10)*0.64f);
    }
    //C Pack
    cCost=36.99f;
    //Savings comparison
    if(aCost<bCost&&aCost<cCost){bestCo=aCost;bestPac='A';}
    if(bCost<aCost&&bCost<cCost){bestCo=bCost;bestPac='B';}
    if(cCost<bCost&&cCost<aCost){bestCo=cCost;bestPac='C';}
    
    //Output the Charge
    cout<<fixed<<setprecision(2)<<showpoint;
    if(package=='a'||package=='A'){savings=aCost-bestCo;cout<<"$"<<aCost;}  
    if(package=='b'||package=='B'){savings=bCost-bestCo;cout<<"$"<<bCost;}   
    if(package=='c'||package=='C'){savings=cCost-bestCo;cout<<"$"<<cCost;} 

    //Output the cheapest package and the savings
    cout<<" "<<bestPac<<" "<<"$"<<savings;
        
    //Exit
    return 0;
}