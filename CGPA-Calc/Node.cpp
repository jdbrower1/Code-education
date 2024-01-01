#include "Node.h"
#include <iostream>
#include <string>
#include <iomanip>




std::string Node::SetCourseName()
{
	std::string str;
	std::cout << "Enter The Full Name of Your First Course: ";
	std::cin.ignore();
	std::getline(std::cin, str);
	return str;
	
}

int Node::SetCourseNum()
{
	int num;
	std::cout << "Enter the 4 digit Course Number: ";
	std::cin >> num;
	return num;
}

int Node::SetCreditHours()
{
	int temp;
	std::cout << "Enter the Number of Credit Hours earned for this course: ";
	std::cin >> temp;
	return temp;

}

double Node::SetExam1Score()
{
	double temp;
	std::cout << "Enter the Grade in Percent you recieved on Exam 1: ";
	std::cin >> temp;
	return temp;
}

double Node::SetExam2Score()
{
	double temp;
	std::cout << "Enter the Grade in Percent you recieved on Exam 2: ";
	std::cin >> temp;
	return temp;

}

void Node::DisplayData()
{
	std::cout << std::endl;
	std::cout << std::setw(20) << std::left << "Course" << std::setw(15) << "Course Number" << std::setw(15) << "Credit Hours" << std::endl;
	std::cout << std::setw(20) << std::left << this->CourseName  << std::setw(15) <<  this->CreditHours << std::setw(15) << this->CourseNumber << std::endl;
	std::cout << "***********************************************" << std::endl;
	std::cout << std::endl;
	std::cout << std::setw(10) << std::left << "Exam 1 %" << std::setw(10) << "Exam 2 %" << std::setw(10) << "Exam 3 %" << std::setw(10) << "Final Exam %" << std::endl;
	std::cout << std::setw(10) << std::left << this->Exam1 << std::setw(10) << this->Exam2 << std::endl;
}

Node* Node::getNext()
{
	return this->next;
}