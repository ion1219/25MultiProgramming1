#include<stdio.h>
#include<Windows.h>

void gotoxy(int x, int y)
{
    COORD pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {

    gotoxy(2, 4);

    // ������ �ؽ�Ʈ

    puts("\033[31m�� �ؽ�Ʈ�� �������Դϴ�.\033[0m\n");



    // �ʷϻ� �ؽ�Ʈ�� ����� ���

    puts("\033[32m\033[43m�� �ؽ�Ʈ�� �ʷϻ��̰� ����� ������Դϴ�.\033[0m\n");



    // ���� �ؽ�Ʈ�� �Ķ��� �ؽ�Ʈ

    puts("\033[1m\033[34m�� �ؽ�Ʈ�� ���� �Ķ����Դϴ�.\033[0m\n");



    return 0;

}