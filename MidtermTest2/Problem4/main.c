#include<stdio.h>
#include<conio.h>

void gotoXY(int x, int y);
void happyBirthday();

int main()
{
    printf("        \033[33m0\033[0m            \033[33m0\033[0m\n");
    printf("        \033[34mI\033[0m            \033[32mI\033[0m       \n");
    printf("    ----------------------\n");
    printf("    |\033[45m\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\033[0m|\n");
    printf("    |\033[47m                    \033[0m|\n");
    printf("    |\033[47m                    \033[0m|\n");
    printf("    |\033[47m                    \033[0m|\n");
    printf("    ----------------------\n");
    printf("------------------------------\n");
    printf("|\033[45m\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\\/\033[0m|\n");
    printf("|\033[47m                            \033[0m|\n");
    printf("|\033[47m                            \033[0m|\n");
    printf("|\033[47m                            \033[0m|\n");
    printf("------------------------------\n");

    happyBirthday();

    return 0;
}

void gotoXY(int x, int y)
{
    printf("\033[%d;%dH", y, x);
}

void happyBirthday()
{
    int isLoop = 2;
    char H='a';


    H = _getch();
    if (H == 'H' && isLoop == 2)
    {
        gotoXY(13, 6);
        printf("\033[47m\033[35mHappy\033[0m");
        isLoop = isLoop - 1;
    }
    H = _getch();
    if (H == 'H' && isLoop == 1)
    {
        gotoXY(11, 12);
        printf("\033[47m\033[35mBirthday\033[0m");
        isLoop = isLoop - 1;
    }

    gotoXY(20, 20);
}
