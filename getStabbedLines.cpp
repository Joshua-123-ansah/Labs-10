#include<iostream>
#include "stabbingLines.h"
#include <fstream>
using namespace std;

void getStabbedLines (const int xcoord, Line linesArray[], const int MaxLnsSize, const int NumLines, Point pointsArray[],const int MaxPtsSize, Line stabbedLines[],
const int MaxStbSize, int& NumOfStbLines){
    linesArray[MaxLnsSize];
    pointsArray[MaxPtsSize];
    stabbedLines[MaxStbSize];

    for(int i=0;i<MaxLnsSize; i++){
        Line line=linesArray[i];
        int x_1=pointsArray[line.p1].x;
        int x_2=pointsArray[line.p2].x;

        if(x_2>=xcoord)
        {
            if(x_1<xcoord){
                stabbedLines[NumOfStbLines]=line;
                NumOfStbLines++;
            }
        }
    }    
}
