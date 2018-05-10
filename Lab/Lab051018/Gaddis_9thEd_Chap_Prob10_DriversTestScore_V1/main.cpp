/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 10, 2018, 11:48 AM
 * Purpose:  Score a Drivers test with arrays
 * 
 * DOUBLE CHECK WITH CLASS GITHUB FOR THE FSTREAM FILES "ANSWERS" and SCORE ARE WIERD
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes 
void readFi(ifstream &,char [],int);
void writeFi(ofstream &,char [],char [],int);
int score(char [],char [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    const int NQSTNS=20;    //num of questions
    char key[NQSTNS],answers[NQSTNS];   //answers and key
    char keyFiNm[]="key.dat";
    string ansFiNm="answer.dat";
    char scoFiNm[]="score.dat";   //Score file name
    ifstream keyFi,ansFi;
    ofstream scoreFi;
    
    //Input or initialize values
    keyFi.open(keyFiNm);
    ansFi.open(ansFiNm.c_str());
    scoreFi.open(scoFiNm);
    
    //Map/Process/Calculations, Inputs to Outputs
    readFi(keyFi,key,NQSTNS);
    readFi(ansFi,answers,NQSTNS);
    writeFi(scoreFi,key,answers,NQSTNS);
    int scrs=score(answers,key,NQSTNS);
    
    //Display Outputs
    cout<<"The Score Received = "<<100.0f*scrs/NQSTNS<<"%"<<endl;
    
    //Close Files
    keyFi.close();
    ansFi.close();
    scoreFi.close();
            
    //Exit Program!
    return 0;
}
//******************************************************************************
void readFi(ifstream & in,char keyAns[],int size){
    for(int i=0;i<size;i++){
        in>>keyAns[i];
    }
}
void writeFi(ofstream & out,char key[],char ans[],int size){
    for(int i=0;i<size;i++){
        if(key[i]==ans[i])out<<i<<". Correct"<<endl;
        else out<<i<<". Incorrect"<<endl;
    }
}
int score(char ans[],char key[],int size){
    int correct=0;
    for(int i=0;i<size;i++){
        if(key[i]==ans[i])correct++;
    }
    return correct;
}