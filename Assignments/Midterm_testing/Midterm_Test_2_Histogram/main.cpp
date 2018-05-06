/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 26, 2018 5:51PM
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    char d1,d2,d3,d4, star;       //digit 1-4
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>d1>>d2>>d3>>d4;
    
    cout<<d4<<" ";
    if(d4>=48&&d4<=57){
        for(star=1;star<=d4-48;star++){
        cout<<'*';
        }
    }else cout<<"?";
    cout<<endl;
    
    cout<<d3<<" ";
    if(d3>=48&&d3<=57){
        for(star=1;star<=d3-48;star++){
        cout<<'*';
        }
    }else cout<<"?";
    cout<<endl;
    
    cout<<d2<<" ";
    if(d2>=48&&d2<=57){
        for(star=1;star<=d2-48;star++){
        cout<<'*';
        }
    }else cout<<"?";
    cout<<endl;
    
    cout<<d1<<" ";
    if(d1>=48&&d1<=57){
        for(star=1;star<=d1-48;star++){
        cout<<'*';
        }
    }else cout<<"?";
    
    //Histogram Here
    
    
    //Exit
    return 0;
}