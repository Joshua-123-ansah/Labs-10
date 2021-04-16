#include<cstdlib>
#include <string>
#include "stabbingLines.h"
using namespace std;

int main(int argc, char const *argv[])
{
    //Lines
    cout<<"Joshua is a good boy"<<endl;
    ifstream linefile("Lines.txt");
    Line linesArray[MAXARRAYSIZE];
    int numLine=5;
    // string numLine;
    readLines(linefile,linesArray,5,numLine);

    //Points
    ifstream pointfile("Points.txt");
    Point pointsArray[MAXARRAYSIZE];
    // string numPoints;
    int numPoints=8;
    readPoints(pointfile,pointsArray,8,numPoints);
    return 0;

    //printLineByCoords
    printLineByCoords(0,linesArray,5,pointsArray,5);

    //Getting stabbedlines
    int NumOfStbLines=0;
    Line stabbedLines[MAXARRAYSIZE];
    getStabbedLines(2,linesArray,5,5,pointsArray,5,stabbedLines,5,NumOfStbLines);
}

