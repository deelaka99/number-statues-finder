#include<stdio.h>
int num[10];//declare the num array with 10 indexes
/*function declaration*/
int large_num();
int small_num();
int total_num();
float average_num();

//main function
int main(void)
{
    for(int c = 0; c<10; c++)
    {
        printf("Enter number %d:", (c + 1));
        scanf("%d", &num[c]);
        printf("\n");
    }
    int max_num = large_num();
    printf("***\\Maximum number is %d//***\n", max_num);

    int min_num = small_num();
    printf("***\\Minimum number is %d//***\n", min_num);

    int tot_num = total_num();
    printf("***\\Total of the numbers is %d//***\n", tot_num);

    float avg_num = average_num();
    printf("***\\Average of the numbers is %.2f//***\n", avg_num);
}
//largest number checking function
int large_num()
{
    int max = num[0];
    for(int c = 0; c<10; c++)
    {
        if(max<=num[c])
        {
            max = num[c];
        }
    }
    return max;
}
//smallest number checking function
int small_num()
{
    int min = num[0];
    for(int c = 0; c<10; c++)
    {
        if(min>=num[c] )
        {
            min = num[c];
        }
    }
    return min;
}
//total of the ten numbers finding function
int total_num()
{
    int tot = 0;
    for(int c = 0; c<10; c++)
    {
        tot+=num[c];
    }
    return tot;
}
//average of the ten numbers finding function
float average_num()
{
    int tot_num = total_num();
    float avg = tot_num / 10.0;
    return avg;
}


