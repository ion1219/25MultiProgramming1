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
        printf("����� �����ϴ�!");
    }
    else
    {
        printf("����� �ֽ��ϴ�");
    }
}