// CGPA-Calc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//A student’s cumulative grade point average (CGPA) can be determined using the C++ program CGPA Calculator. 

//The user’s input is used to compute the CGPA, which includes information like the number of courses taken and the grades earned in each one.
//
//The program also shows each student’s overall course grade.
//
//CGPA Calculator calculates a student’s Cumulative Grade Point Average(CGPA) from the given exam results.
//
//The program can show the individual grades of each course,
//calculate total credits and total grade points achieved,
//determine the GPA for the semester, and based on all the data, it can
//generate and present the CGPA of the student.

//How I want this to work
//
//I want a variable the idetifies the student
//Full Name
//a variable that identifies the current year
//Freshman
//Sophmore
//Junior
//Senior
//Output File that strores the data so we can add future Semesters and /or Years
//
//A Class that catorizes
//Course Name
//Course Number
//Course Credit Hours
//Course
//Exam 1 	(worth 20 %)
//Exam 2 	(worth 20 %)
//Exam 3 	(worth 20 %)
//Final(worth 40 %)
//Couse GPA
//Semseter CGPA
//Year CPGA
//
//
//Layout
//
//Student Name :
//Current Year
//
//Course : (Course Name) (Course Number) | Current letter grade | GPA | CGPA
//Exam 1 : (Grade) | Current letter grade | (GPA) | (CGPA)
//Exam 2 : (Grade) | Current letter grade | (Updated GPA) | (Updated CGPA)
//Exam 3 : (Grade) | Current letter grade | (Updated GPA) | (Updated CGPA)
//Final : (Grade) | Current letter grade | (Updated GPA) | (Updated CGPA)

#include <iostream>
#include <string>
#include "Calc.h"




int main()
{
	std::string Name; //Holder for Student Name (cin.ignore followed by getline()
	std::string FirstName = "";
	std::string Year; //Holder for Current Year


	//Obtain Name//////////////////////////
	std::cout << "Enter Your Full Name: ";
	std::getline(std::cin, Name);
	///////////////////////////////////////
	//for (int i = 0; i < Name.size(); i++)
	//{
	//	
	//	if (!isspace(Name[i]))
	//		FirstName = FirstName + Name[i];
	//	else
	//		break;
	//}
	

	//Obtain Year/////////////////////////
	Calc test;

	bool YearCheck = false;
	int temp;
	while (!YearCheck)
	{
			
		std::cout << "Select the year you are Wanting to work with" << std::endl;
		std::cout << "Enter 1 for Freshman \n";
		std::cout << "Enter 2 for Sophmore \n";
		std::cout << "Enter 3 for Junior \n";
		std::cout << "Enter 4 for Junior \n";
		std::cin >> temp;
		
		switch (temp)
		{
		case 1:
			Year = "Freshman";
			YearCheck = true;
			break;
		case 2:
			Year = "Sophmore";
			YearCheck = true;
			break;
		case 3:
			Year = "Junior";
			YearCheck = true;
			break;
		case 4:
			Year = "Senior";
			YearCheck = true;
			break;
		default:
			std::cout << "Invalid Entry, Please try again";
			break;
		}
	}
	
	
	//std::cout << FirstName << std::endl;
	std::cout << "Student Name: " << Name << "\n" << "Year: " << Year << std::endl;
	
	test.push(test.GetExam2Score(), test.GetExam1Score(), test.GetCourseNumber(), test.GetCreditHours(), test.GetCourseName());
	std::cout << test << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


