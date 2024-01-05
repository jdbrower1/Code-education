#pragma once
#include <iostream>
#include <string>
#include <iomanip>

class Data
{
private:
	std::string Student;
	char BasicGrade;

	struct CGPAHolder
	{
		double Credits;
		double GradePoints;
		CGPAHolder* next;
	};
	CGPAHolder* top;

	struct Node
	{
		std::string CourseName;
		int CreditHours;
		double Exam1;
		double Exam2;
		double Exam3;
		double FinalExam;

		double CourseGPA;


		Node* next;
	};
	Node* head;
public:
	Data();
	~Data();
	std::string setStudent();
	std::string setCourseName();
	char setBasicGrade();
	int setCreditHours();
	double setExam1();
	double setExam2();
	double setExam3();
	double setFinal();
	void pushIndepth(int CreditHours, double FinalExam, double Exam3, double Exam2, double Exam1, std::string CourseName);
	void pushBasic(int CreditHours, char ClassGrade, std::string CourseName);
	void pushTop(double Credits, double GradePoints);
	void DisplayInDepthData();
	void DisplayBasicDate();
	void DisplayCGPA();
	

};