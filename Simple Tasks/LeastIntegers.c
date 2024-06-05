/*
Write a C program that takes n number of positive integers. Find the integer that appears the least number of 
times among the said integers. If there are multiple such integers, select the smallest one.
*/

#include<stdio.h>
int counter[100];
int num;

int main()
{
    int i, min_num, x, result;
    printf("Kindly input the number of integers:");
    scanf("%d",&num);
    printf("Input your numbers:");
    for (i=0;i<num;i++)
    {
        scanf("%d",&x);
        counter[x]++;
    }
    min_num = 100;
    for (i=0;i<100;i++)
    {
        if(counter[i]>0 && counter[i]<min_num)
        {
            result = i;
            min_num = counter[i];

        }
    }
    printf("Smallest Integer is: %d\n",result);
    return 0;

}