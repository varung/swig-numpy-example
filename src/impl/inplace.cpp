#include <stdio.h>
#include "../include/inplace.hpp"

void inplace(double *invec, int n)
{
    int i;

    for (i=0; i<n; i++)
    {
        invec[i] = 2*invec[i];
    }
}


