#include<iostream>
#include "stabbingLines.h"
#include <fstream>
using namespace std;

void printLineByCoords(LineId lid, Line linesArray[], const int MaxLnsSize, Point pointsArray[], const int MaxPntsSize){
    linesArray[MaxLnsSize];
    pointsArray[MaxPntsSize];
    int lid_;
    
    for(int i=0; i<MaxLnsSize; i++){
        lid_=linesArray[i].Lid;

        if(linesArray[i].p1==pointsArray[i].Pid && linesArray[i].p2==pointsArray[i].Pid){
            cout<<"Line with ID number-> "<<lid_<<" has coords "<<"("<<pointsArray[linesArray[i].p1].x<<","<<pointsArray[linesArray[i].p1].y<<")"<<
            " and "<<"("<<pointsArray[linesArray[i].p2].x<<","<<pointsArray[linesArray[i].p2].y<<")"<<endl;
        }else{
            cout<<"There is a mismatch between line ID and Points ID"<<endl;
        }
    }
}
