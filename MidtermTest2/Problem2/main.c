#include<stdio.h>

int SS(int mp, int range);

int main()
{
    int mp = 150, range = 20;

    SS(mp, range);

    return 0;

}

int SS(int mp, int range)
{
    if (mp >= 50 && range > 10)
    {
        printf("���ΰ� : �ʴ� ������ ȹ���߳�?");
    }
    return 0;
}
