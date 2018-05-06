/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on April 29, 2018 8:17 PM
 * Purpose:  Infinite Series
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float x,fx,term,facto,count;
    int nterms;
    
    //Input or initialize values Here
    cout<<"Calculate a series f(x)=x-x^3/3!+x^5/5!-x^7/7!+......."<<endl;
    cout<<"Input x and the number of terms, output f(x)"<<endl;
    cin>>x>>nterms;
    facto=1;
    count=2;
    term=1;
          
    //Calculate Sequence sum here
    for(int i=1,sign=-1;i<=nterms;i++,term+=2){
        sign*=-1;
        if(i>1){
            for(int loop=1;loop<=2;loop++,count++)facto*=count;
        }
        fx+=pow(x,term)/facto*sign;
    }
    
    //Output the result here
    cout<<fixed<<setprecision(6)<<showpoint;
    cout<<fx;
    
    //Exit
    return 0;
}