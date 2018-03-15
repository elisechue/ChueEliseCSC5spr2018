/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on March 13, 2018, 11:30 AM
 * Purpose: ||
 */

//System Libraries Here
#include <iostream>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare Variables
    bool x,y;
    
    //Column Heading of Truth Table
    cout<<"X Y X&&Y X||Y X^Y X^Y^Y X^Y^X !X !Y !(X&&Y)"
            <<"!X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //First Row
    x=true;
    y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"    ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"    ";
    cout<<(!(x&&y)?'T':'F')<<"     ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"  ";
    cout<<endl;
    
    //Second Row
    x=true;
    y=false;
        cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"    ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"    ";
    cout<<(!(x&&y)?'T':'F')<<"     ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"  ";
    cout<<endl;
    
    //Third Row
    x=false;
    y=true;
        cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"    ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"    ";
    cout<<(!(x&&y)?'T':'F')<<"     ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"  ";
    cout<<endl;
    
    //Fourth Row
    x=false;
    y=false;
        cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<(x^y^y?'T':'F')<<"     ";
    cout<<(x^y^x?'T':'F')<<"    ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"    ";
    cout<<(!(x&&y)?'T':'F')<<"     ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"  ";
    cout<<endl;
    
    //Calculate the answer
    
    //Display Outputs
  
    //Exit Program!
    
    return 0;
}

