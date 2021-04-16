CXX = g++
CFLAGS = -std=c++17 
LDFLAGS = -lm

ALL =testStabLineProg

output: testStabLineProg.o readPoints.o ReadLines.o printLineByCoords.o getStabbedLines.o 
	${CXX} ${CFLAGS} testStabLineProg.o readPoints.o ReadLines.o printLineByCoords.o getStabbedLines.o -o output

testStabLineProg.o : testStabLineProg.cpp stabbingLines.h
	${CXX} ${CFLAGS} -c testStabLineProg.cpp -I.

readPoints.o : readPoints.cpp stabbingLines.h
	${CXX} ${CFLAGS} -c readPoints.cpp -I.

ReadLines.o : ReadLines.cpp stabbingLines.h
	${CXX} ${CFLAGS} -c ReadLines.cpp -I.

printLineByCoords.o : printLineByCoords.cpp stabbingLines.h
	${CXX} ${CFLAGS} -c printLineByCoords.cpp -I.

getStabbedLines.o : getStabbedLines.cpp stabbingLines.h
	${CXX} ${CFLAGS} -c getStabbedLines.cpp -I.


# testStabLineProg : stabbingLines.h readPoints.o ReadLines.o printLineByCoords.o getStabbedLines.o testStabLineProg.o
# 	${CXX} ${CFLAGS} readPoints.o ReadLines.o printLineByCoords.o getStabbedLines.o testStabLineProg.o \
# 	-o testStabLineProg ${LDFLAGS}

clean :
	${RM} -r *.o testStabLineProg