//Erik Ring-Walters
//ID 002488407
//Max number & counter homework problem
//Homework 1 Problem 1
//August 27,2016
//CST 238, Fall Semester
#include <iostream>
using namespace std;
void counter()
{
	int temp;//used as a temporary variable in the case that the numbers are not sorted in ascending order.
	int ent[30];//array of variables that are entered
	int sorted[30];//ended up not using this array, but i'll keep it around in case i get an idea for it
	int count[30] = { 0 };//counts the number of repeated numbers. all set to zero because there are currently no numbers entered.
	int inputVals;//controls how many numbers can be entered.
	int max = -2000000;//shows highest number. Very low number in case user's highest number is low.

	cout << "How many input values [max: 30]? ";//Asks for user input
	cin >> inputVals;//Takes user input. This variable controls how many numbers are entered
	if (inputVals > 0 && inputVals <= 30)//As long as number is neither negative nor greater than 30
	{
		cout << "Enter " << inputVals << " numbers. \n";
		for (int ii = 0; ii < inputVals; ii++)
		{
			cin >> ent[ii];//takes in value
			
			for (int jj = 0; jj <= ii; jj++)//sorter
			{
				if (ent[ii] < ent[jj])
				{
					temp = ent[ii];//sets current temp to value just entered
					ent[ii] = ent[jj];//replaces larger value with smaller one
					ent[jj] = temp;//replaces value that was taken with new temp value.
				}
			}
			//MAX CALCULATOR
			if (ent[ii] > max)
			{
				max = ent[ii];//basically saying highest number is assigned by current number if its greater than any other
			}
		}
		for (int ii = 0; ii < inputVals; ii++)//runs through each number and checks if equal to current ent value
		{
			for (int cc = 0; cc < inputVals; cc++)
			{
				if (ent[ii] == ent[cc])
				{
					count[ii]++;//if so, count on value goes up.
				}
			}
		}
		cout << endl << "Largest number: " << max << endl << endl;//Displays highest value (max)
		cout << "Numbers  " << " Count\n";//Shows title of number display
		for (int ii = 0; ii < inputVals; ii++)
		{
			if (ent[ii] != ent[ii - 1])//Just makes sure there are no repeats
			{
				cout << ent[ii] << "         " << count[ii] << endl;//displays number and how many times number shows up.
			}
		}

	}
	else//incase invalid number was entered for inputVals.
	{
		cout << "Invalid number.\n";
	}
}
void main()
{
	counter();//runs function
}