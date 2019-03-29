incdir=./include
srcdir=./src
all:
	g++ -std=c++11 -Wall -I ${incdir} ${srcdir}/*.cpp -o empresa
