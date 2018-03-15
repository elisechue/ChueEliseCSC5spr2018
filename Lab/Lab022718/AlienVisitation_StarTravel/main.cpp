/* 
 * File:   main.cpp
 * Author: Elise Chue
 * Created on February 27, 2018, 11:37 AM
 * Purpose:  Calculating how many km/mi and years to get to a star
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Math, Physics, Science, Conversions, 2-D Array Columns
const float LIGHTYR=9.461e12f;  //one lightyear in km
const float YEARSEC=31536000;   //how many seconds in a year
const float TRLLN=1e12f;        //conversion for trillion

//Function Prototypes 

//Program Execution Begins Here

int main(int argc, char** argv) {
    //Declare all Variables, no doubles
    float dist,     //distance in lightyears
          distKM,   //distance in km 
          timeSec,  //time in seconds
          maxVel,   //velocity to escape solar system in km
          timeYr;   //time in years
    //Input or initialize values
    maxVel=16.6;
    //How far and how long?
    cout<<"Input your distance to a star in Lightyears"<<endl;
    cin>>dist;
    distKM=dist*LIGHTYR;
    timeSec=distKM/maxVel;
    timeYr=timeSec/YEARSEC;
    
    //Display Outputs
    cout<<"It would take "<<timeYr<<" Years to get to that star"<<endl;
    cout<<"The star is "<<distKM/TRLLN<<" Trillion Kilometers away"<<endl;
    cout<<"That converts to "<<(distKM*0.621)/TRLLN<<" Trillion Miles away"<<endl;
    //Exit Program!
    
    return 0;
}

