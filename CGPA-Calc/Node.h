#pragma once

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

#include <iostream>

class Node
{
private:
	std::string CourseName;
	int CourseNumber;
	int CreditHours;

	double Exam1;
	double Exam2;

	Node* next;
public:
	Node(std::string Course, int CourseNum,
		int CreditHours, double Exam2,
		double Exam1, Node* next = nullptr)
	{
		this->CourseName = Course;
		this->CourseNumber = CourseNum;
		this->CreditHours = CreditHours;
		this->Exam2 = Exam2;
		this->Exam1 = Exam1;
		this->next = next;
	}


	std::string SetCourseName();
	int SetCourseNum();
	int SetCreditHours();

	double SetExam1Score();
	double SetExam2Score();

	void DisplayData();

	Node* getNext();
};