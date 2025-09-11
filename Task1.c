#include <stdio.h>

int main()
{
    float billAmount, totalAmount;
    printf("Enter bill amount\n");
    scanf("%f", &billAmount);

    if (billAmount > 5000)
    {
        totalAmount = billAmount * 0.90;  // 10% discount
        printf("You got 10%% discount\n");
    }
    else
    {
        totalAmount = billAmount;
        printf("No discount offered\n");
    }

    printf("Final bill amount = %.2f\n", totalAmount);
    return 0;
}