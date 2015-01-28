/* 
 * File:   main.cpp
 * Author: eamorrow
 *
 * Created on January 28, 2015, 2:38 PM
 */

#include <cstdlib>
#include <cmath>
#include <iostream>

int SumOfSquares(int num)
{
    int sum = 0;
    for(int i=0;i<(num + 1);i++)
    {
        sum+= i*i;
    }
    return sum;
}

int SquareOfSums(int num)
{
    int sum = 0;
    for(int i=0;i<(num+1);i++)
    {
        sum+=i;
    }
    return (sum*sum);
}

int main(int argc, char** argv) {
    int dif = SumOfSquares(100)-SquareOfSums(100);
    std::cout<<dif;
    return 0;
}

