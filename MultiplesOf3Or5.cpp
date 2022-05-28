#include "MultiplesOf3Or5.h"
using namespace std;

double MultiplesOf3Or5::solve()
{
    double sum = 0.0;

    for (int i = 0; i < 1000; i++) {
        if ((i % 3) == 0 || (i % 5) == 0)
        {
            sum += i;
        }
    }
    
    return sum;
}
