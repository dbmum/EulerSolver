// EulerSolver.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MultiplesOf3Or5.h"
#include "EvenFibonacci.h"
#include "SumSquareDifference.h"
#include "SmallestMultiple.h"
#include "LargestPrimeFactor.h"
using namespace std;

int main()
{
    MultiplesOf3Or5 multiplesOf3Or5;
    cout << "\nWhat is the sum of all the multiples of 3 or 5 below 1000?" << "\n";
    cout << multiplesOf3Or5.solve() << "\n";
    
    EvenFibonacci evenFibonacci;
    cout << "\nBy considering the terms in the Fibonacci sequence whose values do not exceed four million, what is the sum of the even-valued terms?" << "\n";
    cout <<fixed<< evenFibonacci.solve() << "\n";

    SumSquareDifference sumSquareDifference;
    cout << "\nWhat is the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum?" << "\n";
    cout <<fixed<< sumSquareDifference.solve() << "\n";

    SmallestMultiple smallestMultiple;
    cout << "\nWhat is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?" << "\n";
    cout << smallestMultiple.solve() << "\n";

    LargestPrimeFactor largestPrimeFactor;
    cout << "\nWhat is the largest prime factor of the number 600,851,475,143 ?" << "\n";
    cout << largestPrimeFactor.solve() << "\n";
}
