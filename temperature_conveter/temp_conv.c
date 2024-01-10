#include <stdio.h>

int main()
{
    char unit;
    int temp;

    printf("Enter the temperature unit ('C' or 'F'): ");
    scanf(" %c", &unit);

    printf("Enter the temperature: ");
    scanf("%d", &temp);

    if (unit == 'c' || unit == 'C')
    {
        int a = (temp * 9 / 5) + 32;
        printf("The temperature in Fahrenheit is: %d\n", a);
    }
    else if (unit == 'F' || unit == 'f')
    {
        int b = (temp - 32) * 5 / 9;
        printf("The temperature in Celsius is: %d\n", b);
    }
    else
    {
        printf("Enter a valid unit ('C' or 'F')\n");
    }

    return 0;
}
