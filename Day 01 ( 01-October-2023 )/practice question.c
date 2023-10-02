#include <stdio.h>

int main(void)
{
    int card[5];

    // Input
    int *ptr = &card[0];
    for (int i = 0; i < 5; i++)
    {

        printf("%d = index", i);
        scanf("%d", &card[i]);
    }

    // Output
    for (int i = 0; i < 5; i++)
    {

        printf("%d -> Index = %d ", i, card[i]);
    }
    return 0;
}