#include "SumSquareDifference.h"
#include <cmath>

double SumSquareDifference::solve()
{
    long long sumSquare = 0.0;
    long long squareSum = 0.0;
    long long sum = 0.0;

    for (int i = 0; i <= 100; i++)
    {
        sumSquare += pow(i, 2);
        squareSum += i;
    }
    squareSum = pow(squareSum, 2);

    sum = squareSum - sumSquare;

   
    return sum;
}
