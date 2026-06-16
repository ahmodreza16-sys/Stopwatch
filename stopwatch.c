#include<stdio.h>
#include<windows.h>

int main ()
{

    int sec =0;

    while (1){
        printf("\rTime: %d", sec++);
        Sleep(1000);
    }
    return 0;
}
