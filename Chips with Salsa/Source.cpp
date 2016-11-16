//Chips and Salsa
//extra work

#include <iostream>
#include <string>

using namespace std;

/************Prototypes*************/
void welcome();
int setHigh(int n);
int setLow(int n);
void validate(int& num);
void compare(const int numbers[], const int SIZE, int& min, int& max);
void nameDisplay(const string names[], const int SIZE, int min, int max);

/************Function Definitions**************/
void welcome()
{
	cout << "This program will display the number of jars of salsa sold by type." << endl;
	cout << "The program will also display which type of salsa sold the most and least jars." << endl;
}

void getInput(int jars[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++) //increment counter loop
	{
		cout << "Enter a number: ";
		cin >> jars[i];
		validate(jars[i]);
	}
}
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
int setLow(int n)
{
	return n;
}
int setHigh(int n)
{
	return n;
}
// using pass by reference on min and max variables
void compare(const int numbers[], const int SIZE, int& min, int& max)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (numbers[i] < min)
			min = numbers[i];

		if (numbers[i] > max)
			max = numbers[i];
	}
}
// does not need to update any values it is only displaying. pass by reference removed
void display(const int jars[], const int SIZE, int min, int max)
{
	cout << endl << endl;
	cout << "For the contents of the array numbers: " << endl;

	//display the contents of the array
	for (int i = 0; i < SIZE; i++)
	{
		cout << "numbers[" << i << "] = " << jars[i] << endl;
	}
	cout << endl;
	cout << / t / t << Type of Salsa << / t / t << Number of Jars sold << endl;
	cout << "The highest selling salsa was " << //array for names << //array for jars << endl;
		cout << "The lowest selling salsa was " << //array for names << // array for jars << endl;
}
/***************Main Driver**************/

int main()
{
	const int SIZE = 5;
	string names[SIZE] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	int jars[SIZE];
	int min;
	int max;
	//Here is what I need

	welcome();	//tell the user about the program

	//prompt the user to enter the data and store it in the array for jars
	getInput(jars, SIZE);

	//set min and max to the first value in the array
	min = setLow(jars[0]);
	max = setHigh(jars[0]);

	//compare to find min and max
	compare(jars, SIZE, min, max);

		//display a report to include number of jars sold by salsa type
		displayReport();

	cout << / t / t << Type of Salsa << / t / t << Number of Jars sold << endl;
	cout << //put the first array here << endl;
	cout << // put the second array here << endl;
	cout << "The highest selling salsa was " << highest << endl;
	cout << "The lowest selling salsa was " << lowest << endl;



}