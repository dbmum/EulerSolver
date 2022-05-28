#include "SmallestMultiple.h"

double SmallestMultiple::solve()
{
    int answer = 0;
    for (long long i = 20; i <= 1000000000; i+=20)
    {
        
        if ((i % 19) == 0)
        {
            if ((i % 18) == 0)
            {
                if ((i % 17) == 0)
                {
                    if ((i % 16) == 0)
                    {
                        if ((i % 15) == 0)
                        {
                            if ((i % 14) == 0)
                            {
                                if ((i % 13) == 0)
                                {
                                    if ((i % 12) == 0)
                                    {
                                        if ((i % 11) == 0)
                                        {
                                            return i;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        
    }
    return -1;
}
