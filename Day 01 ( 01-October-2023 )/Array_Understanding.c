// In this file , I will make my all concepts clear about Array in Programming language
// What actually is Array ?
// Array is simply a collection of same data types in a contiguous memory
// There are two kind of errors . Run time error and compiler error

#include <stdio.h>
int main()
{
    // int total_marks;
    // int comp;
    // int phy, maths;
    // comp = 89;
    // phy = 56;
    // maths = 89;
    // total_marks = phy + comp + maths;
    // printf("The total marks are : %d", total_marks);

    // Now we have to use our array to store our data in a contiguous memory block

    int arr[4] = {45, 78, 89, 34, 89}; // This will show you run time error , because you are trying to access the number more than the memory number you have asked to alot

    printf("The 3rd index of array is : %d", arr[3]);

    return 0;
}