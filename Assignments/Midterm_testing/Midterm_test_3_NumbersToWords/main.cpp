/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 27th, 2018 9:54PM
 * Purpose:  Convert a number to English check amount
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
    char n1000s,n100s,n10s,n1s;
    unsigned short number;
    string english;             //combine the digits into one word
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    n1000s=number/1000;
    number-=n1000s*1000;
    n100s=number/100;
    number-=n100s*100;
    n10s=number/10;
    number-=n10s*10;
    n1s=number;
    
    //Calculate the 1000's, 100's, 10's and 1's
    switch(n1000s){
        case 3:english+="Three ";break;
        case 2:english+="Two ";break;
        case 1:english+="One ";break;
    }
    if(n1000s!=0)english+="Thousand ";
    switch(n100s){
        case 9:english+="Nine ";break;
        case 8:english+="Eight ";break;
        case 7:english+="Seven ";break;
        case 6:english+="Six ";break;
        case 5:english+="Five ";break;
        case 4:english+="Four ";break;
        case 3:english+="Three ";break;
        case 2:english+="Two ";break;
        case 1:english+="One ";break;
    }
    if(n100s!=0)english+="Hundred ";
    switch(n10s){
        case 9:english+="Ninety ";break;
        case 8:english+="Eighty ";break;
        case 7:english+="Seventy ";break;
        case 6:english+="Sixty ";break;
        case 5:english+="Fifty ";break;
        case 4:english+="Forty ";break;
        case 3:english+="Thirty ";break;
        case 2:english+="Twenty ";break;
        case 1:{
            if(n1s==0)english+="Ten ";
            else if(n1s==1)english+="Eleven ";
            else if(n1s==2)english+="Twelve ";
            else if(n1s==3)english+="Thirteen ";
            else if(n1s==4)english+="Fourteen ";
            else if(n1s==5)english+="Fifteen ";
            else if(n1s==6)english+="Sixteen ";
            else if(n1s==7)english+="Seventeen ";
            else if(n1s==8)english+="Eighteen ";
            else if(n1s==9)english+="Nineteen ";
        }break;
    }
    if(n10s!=1){
        switch(n1s){
            case 9:english+="Nine ";break;
            case 8:english+="Eight ";break;
            case 7:english+="Seven ";break;
            case 6:english+="Six ";break;
            case 5:english+="Five ";break;
            case 4:english+="Four ";break;
            case 3:english+="Three ";break;
            case 2:english+="Two ";break;
            case 1:english+="One ";break;
        }
    }
    //Output the check value
    
    cout<<english<<"and no/100's Dollars"<<endl;
    
    //Exit
    return 0;
}