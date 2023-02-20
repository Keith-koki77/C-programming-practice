#include <stdio.h>

int main()
{
    int start,end,count;

    //Taking input of range
    printf("Enter the starting value :");
    scanf("%d", &start);

    printf("Enter the end value :");
    scanf("%d", &end);

    for(int i = start; i <= end; i++)
    {
        count = 0;
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count = count + 1;
            }
        } 

        if (count == 2)
        {
            printf("Prime Number : %d\n", i);
        }
    }
    return (0);
}
