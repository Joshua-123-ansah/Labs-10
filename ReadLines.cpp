#include<iostream>
#include "stabbingLines.h"
#include <fstream>
#include <string>
using namespace std;

void readLines(ifstream& inPutLineFile, Line linesArray[],const int MaxLnsSize, int& numLines){
    int a,b,c;
    linesArray[MaxLnsSize];
    // inPutLineFile.open("Lines.txt");
        // Line lines;
        // lines.Lid=a;
        // lines.p1=b;
        // lines.p2=c;
    for(int i=0;i<numLines;i++){
        inPutLineFile>>a>>b>>c;
        linesArray[i]={a,b,c};
    }
    inPutLineFile.close();



    // while (getline(inPutLineFile, numLines)) 
    // { inPutLineFile >> a >> b>> c; 
    // Line line; 
    // line.Lid = a; 
    // line.p1 = b; 
    // line.p2 = c; 
    // linesArray[a] = line; 
    // } 
    // inPutLineFile.close(); 
}

