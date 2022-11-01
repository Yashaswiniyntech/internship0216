#include<stdio.h>
int main()
{
    int time;
    printf("enter the time\n");
    scanf("%d",&time);//24 hours clock
    if(time>= 1 && time<12)
    printf("good morning\n");
    else
    if(time>=12 && time<=18)
    printf("good afternoon\n");
    else
    if(time>18 && time<=24)
    printf("good night");
    else
    printf("there is only 24 hours per day \n");

}