/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on May 10, 2018, 12:31 PM
 * Purpose:  Score a Drivers test with arrays VERSION 2
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
void readFi(ifstream &,char [],int &);
void writeFi(ofstream &,char [],char [],int);
int score(char [],char [],int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    const int NQSTNS=50;    //num of questions
    int nqstns;         //number of questions from file
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
    readFi(keyFi,key,nqstns);               //replaced the const int NQSTNS
    readFi(ansFi,answers,nqstns);
    writeFi(scoreFi,key,answers,nqstns);
    int scrs=score(answers,key,nqstns);
    
    //Display Outputs
    cout<<"The Score Received = "<<100.0f*scrs/nqstns<<"%"<<endl;
    
    //Close Files
    keyFi.close();
    ansFi.close();
    scoreFi.close();
            
    //Exit Program!
    return 0;
}
//******************************************************************************
void readFi(ifstream & in,char keyAns[],int &cnt){
    cnt=0;
    char kyAnsVl;
    while(in>>kyAnsVl){
        keyAns[cnt++]=kyAnsVl;
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