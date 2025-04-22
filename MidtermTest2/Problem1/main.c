#include<stdio.h>

int PassOrFail(int score)
{
    if (score >= 50)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int myScore = 100;

    if (PassOrFail(myScore))
    {
        printf("재시험 없습니다!");
    }
    else
    {
        printf("재시험 있습니다");
    }
}