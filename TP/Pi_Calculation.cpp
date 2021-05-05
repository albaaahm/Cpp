// A C++ program that estimates the valie of Pi using Monte Carlo method.
// We assume a quarter of a circle in a square of side 1.

#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<ncurses.h> // special library for Ubuntu instead #include<conio.h>
using namespace std;
int main() // Cannot use a void main in Linux.
{
	double x,y,Pi;
	long hits=0,Ntrials;
	cout<<"Enter the trial number: ";
    cin>>Ntrials;
	//use std::cout ... if you don't implement at the beginning the 'using namespace std'.
	//std::cout<<"Enter the trial number: ";
	//std::cin>>Ntrials;
	srand(1); // start randoming from 1.
	for(long i=0;i<Ntrials;i++)
	{
		x = rand()/(float)RAND_MAX; // choosing 0 < x < 1
		y = rand()/(float)RAND_MAX; // choosing 0 < y < 1
		if(x*x + y*y <= 1)
		{
			hits++; // we hit inside the quarter of the circle.
		}
	}
	Pi = 4*hits/(float)Ntrials; //Area of a quarter circle = [(area of the square)*hits]/Ntrials.
	cout<<"The estimation of Pi = "<<Pi<<"\n";
	cout<<"The mathematical value of Pi = "<<2*acos(0.0)<<"\n";
}
