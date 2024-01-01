#pragma once

#include "Node.h"


class Calc
{
private:
	Node* head;
public:
	Calc();

	friend std::ostream& operator<<(std::ostream& os, const Calc& rhs)
	{
		for (Node* currNode = rhs.head; currNode != nullptr; currNode = currNode->getNext())
		{
			currNode->DisplayData();
			if (currNode->getNext() != nullptr)
			{
				os << " ";
			}
		}
		return os;
	}
	void push(double Exam2, double Exam1,
		int num, int Creds, std::string Course);
	std::string GetCourseName();
	int GetCourseNumber();
	int GetCreditHours();

	double GetExam1Score();
	double GetExam2Score();
};