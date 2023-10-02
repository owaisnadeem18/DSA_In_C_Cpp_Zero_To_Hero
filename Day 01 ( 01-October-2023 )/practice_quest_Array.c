// Ask three int values from user and print them after applying 18% GST on them

#include <stdio.h>
int main()
{
    printf("Enter three values \n");
    float price[3];
    printf("Enter 1st value = ");
    scanf("%f", &price[0]);
    printf("Enter 2nd value = ");
    scanf("%f", &price[1]);
    printf("Enter 3rd value = ");
    scanf("%f", &price[2]);
    printf("The prices are %f %f %f without applying GST", price[0], price[1],
           price[2]);
    printf("The prices are %f %f %f with applying GST",
           price[0] + price[0] * 0.18, price[1] + price[1] * 0.18,
           price[2] + price[2] * 0.18);
    // The first benifit which we got here is that , wo do not need to declare more and more variables for our all 03 prices . We just declare one array for all 03 prices

    return 0;
}