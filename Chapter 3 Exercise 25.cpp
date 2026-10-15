// Name: Logen N. Wolfe
// Date: 10/14/26
// Program: Chapter 3 Exercise 25
// Description: A vineyard owner is planting several new rows of grapevines, and needs to know how many grapevines to plant in each row. 
// She has determined that after measuring the length of a future row. she can use the following formula to calculate the number of vines that will fit in the row, along with the trellis endpost assemblies that will need to be constructed at each end of the row :
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int V; // Number of Vines that can fit
	double R; // Length of Row (in feet)
	double E; // Space used by end post
	double S; // Space between vines (in feet)

	cout << "Welcome to Logen's oddly specific vineyard calculator!" << endl;
	cout << "First, how long is the row? (Please use feet, i'm American.." << endl;
	cin >> R;
	cout << "Alright, now how much space is used by the end post (in feet, again..)" << endl;
	cin >> E;
	cout << "Got it, got it..and finally, how much space inbetween the vines (in feet, you know the drill..)" << endl;
	cin >> S;
	V = (R - (2 * E)) / S; // Equation for calculating the number of vines.
	cout << "Looks like about.." << V << " vines should fit in that row! Hope that fulfills your oddly specific request!" << endl;

	return 0;
}

