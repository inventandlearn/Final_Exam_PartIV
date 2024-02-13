// Final Exam - Part IV.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
using namespace std;


int main()
{

	int numStudents, count;
	
		cout << "This program will print out the letter grade for each test score entered per student. " << endl;
		cout << "A score greater than 85% and less than 100% is worth an A letter grade." << endl;
		cout << "A score greater than 70% and less than 85% is worth an B letter grade." << endl;
		cout << "A score greater than 60% and less than 70% is worth an C letter grade." << endl;
		cout << "A score less than or equal to 60% is worth an F letter grade." << endl;
		cout << "How many students do you have test scores for? " << endl;
		cin >>	numStudents;
		cout << "You have test scores for " << numStudents << " students!" << endl;
		cout << fixed << setprecision(2) << showpoint;
		count = 1;
		while (count <= numStudents)
		{
			float score = 0.00;
			char choice, lgrade;
			cout << "What is the score of student " << count << "?" << endl;
			cin >> score;
			if (score > 85 && score <= 100)
			{
				lgrade = 'A';
				cout << "Student " << count << " has achieved a letter grade of: " << lgrade << endl;
			}
			else if (score > 70 && score <= 85)
			{
				lgrade = 'B';
				cout << "Student " << count << " has achieved a letter grade of: " << lgrade << endl;
			}
			else if (score > 60 && score <= 70)
			{
				lgrade = 'C';
				cout << "Student " << count << " has achieved a letter grade of: " << lgrade << endl;
			}
			else if (score <= 60)
			{
				lgrade = 'F';
				cout << "Student " << count << " has achieved a letter grade of: " << lgrade << endl;
			}
			else
			{
				cout << "You entered a value beyond the highest possible grade! Try again!" << endl;
				count--;
			}
			count++;
			cout << "Try Again (Y/N)?" << endl;
			cin >> choice;
			if (choice == 'Y')
			{
				cout << "The program will continue!" << endl;
			}
			else
			{
				cout << "The program will stop!" << endl;
				exit(0);
			}
		}

    return 0;
}


/*

Case 1*

This program will print out the letter grade for each test score entered per student.
A score greater than 85% and less than 100% is worth an A letter grade.
A score greater than 70% and less than 85% is worth an B letter grade.
A score greater than 60% and less than 70% is worth an C letter grade.
A score less than or equal to 60% is worth an F letter grade.
How many students do you have test scores for?
2
You have test scores for 2 students!
What is the score of student 1?
98
Student 1 has achieved a letter grade of: A
Try Again (Y/N)?
Y
The program will continue!
What is the score of student 2?
84
Student 2 has achieved a letter grade of: B
Try Again (Y/N)?


Case 2*

This program will print out the letter grade for each test score entered per student.
A score greater than 85% and less than 100% is worth an A letter grade.
A score greater than 70% and less than 85% is worth an B letter grade.
A score greater than 60% and less than 70% is worth an C letter grade.
A score less than or equal to 60% is worth an F letter grade.
How many students do you have test scores for?
2
You have test scores for 2 students!
What is the score of student 1?
60
Student 1 has achieved a letter grade of: F
Try Again (Y/N)?
Y
The program will continue!
What is the score of student 2?
77
Student 2 has achieved a letter grade of: B


Case 3*

This program will print out the letter grade for each test score entered per student.
A score greater than 85% and less than 100% is worth an A letter grade.
A score greater than 70% and less than 85% is worth an B letter grade.
A score greater than 60% and less than 70% is worth an C letter grade.
A score less than or equal to 60% is worth an F letter grade.
How many students do you have test scores for?
2
You have test scores for 2 students!
What is the score of student 1?
71
Student 1 has achieved a letter grade of: B
Try Again (Y/N)?
Y
The program will continue!
What is the score of student 2?
68
Student 2 has achieved a letter grade of: C
Try Again (Y/N)?


*/
