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
void display(const string names[], const int SIZE, int min, int max); //this is not correct function

/************Function Definitions**************/
void welcome()
{
	cout << "This program will display the number of jars of salsa sold by type." << endl;
	cout << "The program will also display which type of salsa sold the most and least jars." << endl;
}

void getInput(int jars[], string names[], const int SIZE)
{
	for (int i = 0; i < SIZE; i++) //increment counter loop
	{
		cout << "Enter the number of jars sold for " << names[i] << ":";
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
// using pass by reference on min and max variables stored in jars
void compare(const int jars[], const int SIZE, int& setLow, int& setHigh)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (jars[i] < setLow)
			setLow = jars[i];

		if (jars[i] > setHigh)
			setHigh = jars[i];
	}
}

//display the contents of both arrays
void display(const int jars[], const int names[], const int SIZE, int min, int max)
{
	cout << endl << endl;
	cout << /t /t << "Type of Salsa" << /t /t << "Number of Jars sold" << endl;
	for (int i = 0; i < SIZE; i++)
			  {
				  cout << / t / t << names[i] << / t / t << jars[i] << endl;
			       
			  }
}
/***************Main Driver**************/

int main()
{
	const int SIZE = 5;
	string names[SIZE] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	int jars[SIZE];
	int setLow;
	int setHigh;
	

	welcome();	//tell the user about the program

	//prompt the user to enter the data and store it in the array for jars
	getInput(jars, SIZE);

	//set min and max to the first value in the array
	setLow = setLow(jars[0]);
	setHigh = setHigh(jars[0]);

	//compare to find min and max
	compare(jars, SIZE, setLow, setHigh);

	display(names, SIZE, setLow, setHigh);
	//not sure how to tie the setHigh setLow contents to the corresponding names
	cout << "The highest selling salsa was " << names[] << jars[setHigh] << endl;
	cout << "The lowest selling salsa was " << names[] << jars[setLow] << endl;


	return 0;

}