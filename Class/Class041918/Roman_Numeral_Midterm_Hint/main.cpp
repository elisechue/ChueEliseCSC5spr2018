/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 19, 2018, 10:12 AM
 * Purpose: Convert digits to roman numerals
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const int THSND=1000;   //Thousands
const int HNDRD=100;    //Hundreds
const int TEN=10;       //Tens
//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    char n1000s,n100s,n10s,n1s;
    unsigned short x;
    string roman;
    
    //Input or initialize values
    cout<<"This program converts a number to its Roman Numeral equivalent"
            <<endl;
    do{
        cout<<"Input an integer value between 1-3000"<<endl;
        cin>>x;
    }while(x<1||x>3000);
  
    //Calculate Number of 1000s, 100s, 10s,1s
    n1000s=x/THSND;
    x-=n1000s*THSND;
    n100s=x/HNDRD;
    x-=n100s*HNDRD;
    n10s=x/TEN;
    x-=n10s*TEN;
    n1s=x;
    
    //Output 1000s converted
    switch(n1000s){
        case 3:roman+='M';
        case 2:roman+='M';
        case 1:roman+='M';
    }
    switch(n100s){
        case 9:roman+="CM";break;
        case 8:roman+="DCCC";break;
        case 7:roman+="DCC";break;
        case 6:roman+="DC";break;
        case 5:roman+='D';break;
        case 4:roman+="CD";break;
        case 3:roman+='C';
        case 2:roman+='C';
        case 1:roman+='C';
    }
    switch(n10s){
        case 9:roman+="XC";break;
        case 8:roman+="LXXX";break;
        case 7:roman+="LXX";break;
        case 6:roman+="LX";break;
        case 5:roman+='L';break;
        case 4:roman+="XL";break;
        case 3:roman+='X';
        case 2:roman+='X';
        case 1:roman+='X';
    }
    switch(n1s){
        case 9:roman+="IX";break;
        case 8:roman+="VIII";break;
        case 7:roman+="VII";break;
        case 6:roman+="VI";break;
        case 5:roman+='V';break;
        case 4:roman+="IV";break;
        case 3:roman+='I';
        case 2:roman+='I';
        case 1:roman+='I';
    }
    //Output Roman Numeral Equivalent
    cout<<static_cast<int>(n1000s)
            <<static_cast<int>(n100s)
            <<static_cast<int>(n10s)
            <<static_cast<int>(n1s)
            <<" Roman Equivalent = "<<roman<<endl;
    //Exit Program!
    
    return 0;
}

