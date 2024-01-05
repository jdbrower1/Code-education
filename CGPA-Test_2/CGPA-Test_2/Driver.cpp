// CGPA-Test_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calc.h"

int main()
{

    Data test;

    int size;
    int selection;

    std::cout << "Welcome to the CPGA Calculator!!!\n" << std::endl;
    
    
    std::string StudentName = test.setStudent();

    std::cout << "\nNow Enter How Many Classes You Took This Semester? ";
    std::cin >> size;
    std::cin.ignore();

    std::cout << "\nThank You!" << std::endl;
    std::cout << std::endl;
    std::cout << "We have 2 options" << std::endl;
    std::cout << "There is the Basic Calculator\n   This Requires: " << std::endl;
    std::cout << "\t1. The Final grade you recived in each Class\n\t2. The Credit Hours awarded for each class" << std::endl;
    std::cout << std::endl;
    std::cout << "We can also run an Indepth Calculation";
    std::cout << " (this provides a much more accurate result)" << std::endl;
    std::cout << "   This Requires" << std::endl;
    std::cout << "\t1. Grade recieved on your three Exams for each class" << std::endl;
    std::cout << "\t2. Grade recieved on your Final Exam for each class" << std::endl;
    std::cout << "\t3. Credit Hours awarded for each class" << std::endl;
    std::cout << std::endl;

    std::cout << "Enter:\n1 - for Basic Calculation \n2 - for Indepth Calculation " << std::endl;
    std::cin >> selection;
    std::cin.ignore();
    std::cout << std::endl;

    if (selection == 1) 
    {
        for (int i = 0; i < size; i++)
        {
            test.pushBasic(test.setCreditHours(), test.setBasicGrade(), test.setCourseName());
            std::cin.ignore();
            
            
        }
        test.DisplayBasicDate();
    }
    else if (selection == 2)
    {
        for (int i = 0; i < size; i++)
        {
            test.pushIndepth(test.setCreditHours(), test.setFinal(), test.setExam3(), test.setExam2(), test.setExam1(), test.setCourseName());
            std::cin.ignore();
        }
        test.DisplayInDepthData();
    }

    
    test.DisplayCGPA();
 
    system("pause");

    test.~Data();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
