#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float Num;
    printf("Please Enter Your Number = ");
    scanf("%f", &Num);

    //Expression 1(Condition) ? Expression 2(Output) : Expression 3(Optput)

    Num>0 ? printf("%.3f is Positive Number", Num) : printf("%.3f is Negative Number", Num);
    getch();
    return 0;
}
