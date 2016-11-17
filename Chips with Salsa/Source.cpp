//Chips and Salsa
//extra work

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/************Prototypes*************/
void welcome();
string name[SIZE];
int sales[SIZE];
int getSalesData(string[], int[]);
int posOfLargest(int[]);
int posOfSmallest(int[]);
void displayReport(string[], int[], int);

const int SIZE = 5;

/***************Main Driver**************/


	int main()
	{
		
		name[SIZE] = { "mild  ", "medium", "sweet ", "hot   ", "zesty " };
		sales[SIZE];   // Holds jars sold for each salsa type

		welcome();	//tell the user about the program
		
		int totalJarsSold = getSalesData(name, sales);

		displayReport(name, sales, totalJarsSold);

		return 0;
	}


/************Function Definitions**************/

	/********Welcome Function*******/
void welcome()
{
	cout << "This program will display the number of jars of salsa sold by type." << endl;
	cout << "The program will also display which type of salsa sold the most and least jars." << endl;
}

/********Get sales of jars for each type salsa from user*******/
int getSalesData(string name[], int sales[])
{
	int total = 0;

	cout << "Enter the number of jars sold for each type of salsa.\n" << endl;
	
	for (int count = 0; count < 0; count++)
	{
		cout << "How many jars of salsa were sold for " << name[count] << "? ";
		cin >> sales[count];

		while (sales[count] < 0)
		{
			cout << "Jars sold must be 0 or more.  Please re-enter: ";
			cin >> sales[count];
		}
	total += sales[count];
	}
	return total;
}

/*********Validate that the input from user was a number for sales of jars***********/

void validate(int& num) //int& is passing by reference back to getInput Arrays always pass by reference
{
	while (!cin)	//the cin for getInput was not valid TRUE so while loop starts
	{
		cin.sync();		//what this do?
		cin.clear();	//clears the buffer
		cout << "Invalid input, try again: ";
		cin >> num;		//new number input by user which is checked by the while loop if good
		//is passed by reference back to getInput and stored in numbers[i]
	}
}
/******** Array position of largest sales which will reference parallel array name data **********/
int posOfLargest(sales)
{
	return n;
}

/******* Array position of smallest sales which will reference parallel array name data*******/
int posOfSmallest()
{

}


//display the contents of both arrays
void display()
{
	
}