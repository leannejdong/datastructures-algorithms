#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main()
{
	//initialisation
	//int y;
	const int l = 1;
	const int m = 2*pow(10,9);
	int t = 0, x = 0;
	int y = 0;
	int number = 0;
	int largest = 0;

	cout << "Please enter whole number and I will print the largest one on the screen"

	// test expression
	while (y<= log(m)/log(5))
	{
		cout << "Number: ";
		cin >> number;
		y++;
		if (number > largest)
		{
			largest = number;
		}
		else if (y == log(m)/log(5))
		{
			cout << "The largest number was: " << largest;
		}

	}

}  


/*
ln(L) <= x \ln(3) + y \ln(5)  <= x \ln(5) + y \ln(5) = (x+y) \ln(5)

But you can ignore this

Pseudo Code
Let T = 0
and X = 0


1.     While Y <= {\ln(M)/\ln(5)}  [ run Y=0 to largest integer <= {\ln(M)/\ln(5)}]

If

\ln(L) <= X \ln(3) + Y \ln(5) <= \ln(M)
T = T + 1
When not Y <= {\ln(M)/\ln(5)} 
X= X+1
If  X <= {\ln(M)/\ln(3)} 
Go to 1.
When not X <= {\ln(M)/\ln(3)} 
STOP
The answer is the current value of T
*/ 