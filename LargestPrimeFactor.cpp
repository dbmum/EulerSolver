#include "LargestPrimeFactor.h"
#include <vector>
using namespace std;

double LargestPrimeFactor::solve()
{

    vector<int> primeFactors;
    long long number = 600851475143;

    for (int i = 3; i <= (10000); i += 2)
    {
        if (isPrime(i) && (number % i) == 0)
        {
            primeFactors.push_back(i);
            number = number / i;

        }
    }


    // make sure that there is no remaining prime factor above this i.e. no remainder
    if(number == 1)
    {
        int largest = primeFactors.back();
        return largest;
    }
    else
    {
        return 0;
    }
}

bool LargestPrimeFactor::isPrime(long long n)
{
    if (n % 2 == 0)
        return false;		
    for (long long i = 3; i <= ((n / 2) + 1); i += 2)	
    {
        if (n % i == 0)
            return false;	
    }
    return true;
    
}
