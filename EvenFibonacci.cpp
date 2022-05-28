#include "EvenFibonacci.h"

double EvenFibonacci::solve()
{   // Sum starts as two because the first even fib number is 2
    int sum = 2;
    int f1 = 1;
    int f2 = 2;
    int f3 = 0;
    while (f3 <= 4000000)
    {
        f3 = f1 + f2;
        if (f3 % 2 == 0 && f3 <= 4000000)
        {
            sum += f3;
        }

        f1 = f2;
        f2 = f3;
    }

    return sum;
    
}
