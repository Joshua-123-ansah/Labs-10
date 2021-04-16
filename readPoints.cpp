#include<iostream>
#include "stabbingLines.h"
#include<fstream>
#include <string>
using namespace std;

void readPoints(ifstream& inPutPointFile, Point pointsArray[],const int MaxPntsSize, int& numPoints){
    int x,u,z,count;
    count = 0;
    pointsArray[MaxPntsSize];

    for(int i=0;i<numPoints; i++){
        inPutPointFile>>x>>u>>z;
        pointsArray[i]={x,u,z};
    }


    // while (getline(inPutPointFile, numPoints)) 
    // { inPutPointFile >> a >> b>> c; 
    // Point point; 
    // point.Pid = a; 
    // point.x = b; 
    // point.y = c; 
    // pointsArray[a] = point; 
    // } 
    // inPutPointFile.close();    
        // inPutPointFile >>a>>b>>c;
        // Point points;
        // points.Pid=a;
        // points.x=b;
        // points.y=c;
        // pointsArray[a]=points;

    // while(!inPutPointFile.eof()){
    //     inPutPointFile>>a>>b>>c;
    //     pointsArray[count++]={a,b,c};
    // }


    inPutPointFile.close();


    
}  