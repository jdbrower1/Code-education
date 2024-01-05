#include "Calc.h"
#include <iomanip>
#include <string.h>
#include <string>

Data::Data()
{
	head = nullptr;
	top = nullptr;
}

Data::~Data()
{
	Node* tempHead = new Node;
	CGPAHolder* tempTop = new CGPAHolder;

	while (this->head != nullptr)
	{
		tempHead = head;
		head = head->next;
		delete tempHead;
	}

	while (this->top != nullptr)
	{
		tempTop = top;
		top = top->next;
		delete tempTop;
	}
	

}

std::string Data::setStudent()
{
	std::string Name;
	std::cout << "Enter Full Name of Student: ";
	std::getline(std::cin, Name);
	return Name;
}

std::string Data::setCourseName()
{
	std::string Course;
	std::cout << "Enter Full Name of Course: ";
	
	std::getline(std::cin, Course);
	return Course;
}

char Data::setBasicGrade()
{
	bool BreakOut = false;
	char temp;
;
	while (!BreakOut)
	{
		std::cout << "Enter the Letter Grade you recieved for this Class (A, B, C, D, E, F)";
		std::cin >> temp;
		temp = toupper(temp);
		
		switch (temp)
		{
		case 'A':
			return temp;
			BreakOut = true;
			break;
		case 'B':
			return temp;
			BreakOut = true;
			break;
		case 'C':
			return temp;
			BreakOut = true;
			break;
		case 'D':
			return temp;
			BreakOut = true;
			break;
		case 'F':
			return temp;
			BreakOut = true;
			break;
		default:
			std::cout << "Invalid Entry" << std::endl;
		}
	}
	
}

int Data::setCreditHours()
{
	bool BreakOut = false;
	int temp;
	std::cout << "How Many Credit Hours did you recive for this Course? ";
	std::cin >> temp;
	while (!BreakOut)
	{
		if (temp < 5)
		{
			BreakOut = true;
			return temp;
		}	
		else
		{
			std::cout << "Invalid Entry" << std::endl;
			std::cout << "How Many Credit Hours did you recive for this Course? ";
			std::cin >> temp;
		}
	}


}

double Data::setExam1()
{
	bool BreakOut = false;
	double temp;
	
	std::cout << "Enter Grade Recived on First Exam: ";
	std::cin >> temp;
	while (!BreakOut)
	{
		std::string DubCounter = std::to_string(static_cast<int>(temp));
		if (DubCounter.length() < 3)
		{
			BreakOut = true;
			return temp;
		}
		else
		{
			std::cout << "Invalid Entry" << std::endl;
			std::cout << "Enter Grade Recived on First Exam: ";
			std::cin >> temp;
		}
	}


}

double Data::setExam2()
{
	bool BreakOut = false;
	double temp;

	std::cout << "Enter Grade Recived on First Exam: ";
	std::cin >> temp;
	while (!BreakOut)
	{
		std::string DubCounter = std::to_string(static_cast<int>(temp));
		if (DubCounter.length() < 3)
		{
			BreakOut = true;
			return temp;
		}
		else
		{
			std::cout << "Invalid Entry" << std::endl;
			std::cout << "Enter Grade Recived on First Exam: ";
			std::cin >> temp;
		}
	}

}

double Data::setExam3()
{
	bool BreakOut = false;
	double temp;

	std::cout << "Enter Grade Recived on First Exam: ";
	std::cin >> temp;
	while (!BreakOut)
	{
		std::string DubCounter = std::to_string(static_cast<int>(temp));
		if (DubCounter.length() < 3)
		{
			BreakOut = true;
			return temp;
		}
		else
		{
			std::cout << "Invalid Entry" << std::endl;
			std::cout << "Enter Grade Recived on First Exam: ";
			std::cin >> temp;
		}
	}
}

double Data::setFinal()
{
	bool BreakOut = false;
	double temp;

	std::cout << "Enter Grade Recived on First Exam: ";
	std::cin >> temp;
	while (!BreakOut)
	{
		std::string DubCounter = std::to_string(static_cast<int>(temp));
		if (DubCounter.length() < 3)
		{
			BreakOut = true;
			return temp;
		}
		else
		{
			std::cout << "Invalid Entry" << std::endl;
			std::cout << "Enter Grade Recived on First Exam: ";
			std::cin >> temp;
		}
	}
}

void Data::pushTop(double Credits, double GradePoints)
{
	CGPAHolder* temp = new CGPAHolder;
	temp->Credits = Credits;
	temp->GradePoints = GradePoints;
	temp->next = top;
	top = temp;
}

void Data::pushIndepth(int CreditHours, double FinalExam, double Exam3, double Exam2, double Exam1, std::string CourseName)
{
	Node* temp = new Node;
	temp->CourseName = CourseName;
	temp->CreditHours = CreditHours;
	temp->Exam1 = Exam1;
	temp->Exam2 = Exam2;
	temp->Exam3 = Exam3;
	temp->FinalExam = FinalExam;
	double TempCourseSum = temp->Exam1 + temp->Exam2 + temp->Exam3 + temp->FinalExam + temp->FinalExam;
	temp->CourseGPA = TempCourseSum / 5;
	double GradePoints;

	if (temp->CourseGPA > 89.9)
		GradePoints = 4;
	else if (temp->CourseGPA > 79.9 && temp->CourseGPA <= 89.9)
		GradePoints = 3;
	else if (temp->CourseGPA > 69.9 && temp->CourseGPA <= 79.9)
		GradePoints = 2;
	else if (temp->CourseGPA > 59.9 && temp->CourseGPA <= 69.9)
		GradePoints = 1;
	else
		GradePoints = 0.1;

	double totalGradePoints = GradePoints * CreditHours;
	
	this->pushTop(temp->CreditHours, totalGradePoints);

	temp->next = head;
	head = temp;
}

void Data::pushBasic(int CreditHours, char ClassGrade, std::string CourseName)
{
	Node* temp = new Node;
	double GradePoints = 0;
	temp->CreditHours = CreditHours;
	double tempGrade;
	switch (ClassGrade)
	{
	case 'A':
		GradePoints = 4;
		break;
	case 'B':
		GradePoints = 3;
		break;
	case 'C':
		GradePoints = 2;
		break;
	case 'D':
		GradePoints = 1;
		break;
	case 'F':
		GradePoints = 0.1;
		break;
	default:
		std::cout << "Invalid Entry" << std::endl;
	}

	double totalGradePoints = GradePoints * CreditHours;
	this->pushTop(temp->CreditHours, totalGradePoints);
	temp->CourseGPA = GradePoints;
	temp->CourseName = CourseName;


	temp->next = head;
	head = temp;
}

void Data::DisplayInDepthData()
{
	std::cout << std::endl;
	std::cout << std::setw(25) << std::left << "Course: " << std::setw(15) << "Credit Hours" << std::setw(10) << "Exam 1"
		<< std::setw(10) << "Exam 2" << std::setw(10) << "Exam 3" << std::setw(15) << "Final Exam" << std::setw(10) << "GPA" << std::endl;
	std::cout << "******************************************************************************************" << std::endl;
	while (this->head != nullptr)
	{



		std::cout << std::setw(25) << std::left << this->head->CourseName << std::setw(15) << this->head->CreditHours  << std::setw(10) << this->head->Exam1 
			<< std::setw(10) << this->head->Exam2 << std::setw(10) << this->head->Exam3 << std::setw(15) << this->head->FinalExam << std::setw(10) << this->head->CourseGPA << std::endl;

		


		this->head = this->head->next;
		
	}
	std::cout << "******************************************************************************************" << std::endl;
}

void Data::DisplayBasicDate()
{
	std::cout << std::endl;
	std::cout << std::setw(25) << std::left << "Course" << std::setw(15) << "Credit Hours" << std::setw(3) << "GPA" << std::endl;
	std::cout << "********************************************" << std::endl;
	while (this->head != nullptr)
	{
		std::cout << std::setw(25) << std::left << this->head->CourseName << std::setw(15)
			<< this->head->CreditHours << std::setw(3) << this->head->CourseGPA << "*" << std::endl;
		this->head = this->head->next;
	}
	std::cout << "********************************************" << std::endl;

}

void Data::DisplayCGPA()
{
	double totalCredits = 0;
	double totalGradePoints = 0;
	while (this->top != nullptr)
	{
		totalCredits = totalCredits + this->top->Credits;
		totalGradePoints = totalGradePoints + this->top->GradePoints;
		this->top = this->top->next;
	}
	double CGPA = totalGradePoints / totalCredits;
	std::cout << std::endl;
	std::cout << "****************************************" << std::endl;
	std::cout << "Total Credits: " << totalCredits << std::endl;
	std::cout << "Semester CGPA: " << CGPA << std::endl;
	std::cout << "****************************************" << std::endl;
}