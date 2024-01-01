#include "Calc.h"
#include <iostream>

Calc::Calc()
{
	this->head = nullptr;
}

void Calc::push(double Exam1, double Exam2, int num, int creds, std::string Course)
{
	this->head = new Node(Course, creds, num, Exam1, Exam2, this->head);
	 
}

std::string Calc::GetCourseName()
{
	return this->head->SetCourseName();
}

int Calc::GetCourseNumber()
{
	return this->head->SetCourseNum();
}

int Calc::GetCreditHours()
{
	return this->head->SetCreditHours();
}

double Calc::GetExam1Score()
{
	return this->head->SetExam1Score();
}

double Calc::GetExam2Score()
{
	return this->head->SetExam2Score();
}