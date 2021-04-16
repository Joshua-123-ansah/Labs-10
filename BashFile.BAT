#!/bin/sh
echo "Creating testStabLineProg"

echo "Compiling readPoints.o"
g++ -std=c++17 -c readPoints.cpp

echo "Compiling ReadLines.o"
g++ -std=c++17 -c ReadLines.cpp

echo "Compiling printLineByCoords.o"
g++ -std=c++17 -c printLineByCoords.cpp

echo "Compiling getStabbedLines.o"
g++ -std=c++17 -c getStabbedLines.cpp

echo "Compiling testStabLineProg.o"
g++ -std=c++17 -c testStabLineProg.cpp

echo "Creating the main Program testStabLineProg"
g++ -std=c++17 testStabLineProg.o readPoints.o ReadLines.o printLineByCoords.o getStabbedLines.o testStabLineProg.o\
-o testStabLineProg
echo "Done Creating testStabLineProg"






