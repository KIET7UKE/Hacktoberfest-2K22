#include<stdio.h>
int main()
{
    int t, i, remainder, number;
    scanf("%d", &t);

    for(i = 1; i <= t; i++) {
        int reverse = 0;
        scanf("%d", &number);

        while(number != 0) {

        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
        }
        printf("%d\n", reverse);
    }
    return 0;
}