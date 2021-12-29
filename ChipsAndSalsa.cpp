// HEADER
/*Student Name: Thomas Sanger
Lab Assignment: e.g. LAB11
Project Name: Chips and Salsa
File Name: ChipsAndSalsa.cpp
Description: (provide a short synopsis of what is accomplished in this particular file)
Limitations or issues: (describe any known defects/deficiencies in this particular file)
Credits: (identify the source of any code obtained from another student or the internet)
*/

// Preprocessor directive placed here
#include <iostream>
using namespace std;

// Function prototypes placed here
int getTotal(int[], int);
int posOfHighest(int[], int);
int posOfLowest(int[], int);

// External variable declarations placed here

// Global variable declarations placed here

// Global constants declarations placed here
const int SIZE = 5;

int main()
{

	// Local variable declarations placed here
	string flavors[SIZE] = { "mild", "medium", "sweet", "hot", "zesty" };
	int sales[SIZE]{};
	int highIndex;
	int lowIndex;

	// Inform user what program does
	cout << "Enter salsa sales data:\n"
		<< endl;

	// Prompt user to enter data needed by the program
	for (int index = 0; index < SIZE; index++)			//make while loop
	{
		cout << "Jars sold last month of " << flavors[index] << "\t:";
		cin >> sales[index];

		if (sales[index] < 0)
		{
			cout << "Please enter a valid number.\n";
			index--;
		}
	}

	cout << "\n" << endl;
	cout << "Salsa Sales Report\n";
	cout << "Name\tJars Sold\n";
	cout << "__________________\n";

	for (int index = 0; index < SIZE; index++)
	{
		cout << flavors[index] << "\t\t" << sales[index] << endl;
	}

	cout << endl;

	// A software algorithm would typically be executed after all data has been input
	cout << "Total Sales:\t" << getTotal(sales, SIZE) << endl;
	highIndex = posOfHighest(sales, SIZE);
	cout << "High Seller:\t" << flavors[highIndex] << endl;
	lowIndex = posOfLowest(sales, SIZE);
	cout << "Low Seller:\t" << flavors[lowIndex] << endl;

	// Program output done at end of program


	// This line of code holds the VC++ Console windowcout << "Press any key to end this application" << endl;
	system("pause");

	// Returns a value to the calling program
	return(0);

}

int getTotal(int sales[], int size)
{
	int sum = 0;

	for (int index = 0; index < SIZE; index++)
	{
		sum += sales[index];
	}
	return sum;
}

int posOfHighest(int sales[], int index)
{
	int count;
	int highest;
	int highCount;

	highest = sales[0];

	for (count = 0; count < SIZE; count++)
	{
		if (sales[count] > highest)
		{
			highest = sales[count];
			highCount = count;
		}
	}
	return highCount;
}

int posOfLowest(int sales[], int index)
{
	int count;
	int lowest;
	int lowCount;

	lowest = sales[0];

	for (count = 1; count < SIZE; count++)
	{
		if (sales[count] < lowest)
		{
			lowest = sales[count];
			lowCount = count;
		}
	}
	return lowCount;
}

// PROOF
// Program output copied into the below comment section
/*
Proof 1:
Enter salsa sales data:

Jars sold last month of mild    :50
Jars sold last month of medium  :47
Jars sold last month of sweet   :101
Jars sold last month of hot     :99
Jars sold last month of zesty   :76


Salsa Sales Report
Name    Jars Sold
__________________
mild            50
medium          47
sweet           101
hot             99
zesty           76

Total Sales:    373
High Seller:    sweet
Low Seller:     medium
Press any key to continue . . .

Proof 2:
Enter salsa sales data:

Jars sold last month of mild    :87
Jars sold last month of medium  :99
Jars sold last month of sweet   :200
Jars sold last month of hot     :32
Jars sold last month of zesty   :875


Salsa Sales Report
Name    Jars Sold
__________________
mild            87
medium          99
sweet           200
hot             32
zesty           875

Total Sales:    1293
High Seller:    zesty
Low Seller:     hot
Press any key to continue . . .
*/