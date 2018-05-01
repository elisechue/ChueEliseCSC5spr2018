/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 1, 2018, 10:15 AM
 * Purpose: Size of Shape
 */

//System Libraries Here
#include <iostream> //i/o library
#include <cmath>    //math library
#include <iomanip>  //formatting library
#include <cstdlib>  //exit() function
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
    //ie. Math, Physics, Science, Conversions, 2-D Array Columns
const float CNVPERC=1e2f;   //conversion to percent


//Function Prototypes 

//Program Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables
int nTerms;
float x,seqVal,delta;

//Initialize Variables
nTerms=10;
x=1;
delta=seqVal=x;

//Calculate
for(int cnt=3, term=2;term<=nTerms;cnt+=2,term++){
	delta*=(-x*x/cnt/(cnt-1));
	seqVal+=delta;
}

//Output Results
cout<<"The sin("<<x<<") "<<sin(x)<<endl;
cout<<"The sequence Value = "<<seqVal<<" for "<<nTerms<<" n Terms"<<endl; 

//Exit Program
 return 0;
}
//This works because this never separately calculates the factorial
//-_- its actually the sin() sequence apparently 