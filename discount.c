
#include<stdio.h>
int main()
{
    int amount,discount,finalamount;
    printf("enter the amount\n");
    scanf("%d",&amount);
    if(amount>=1000)

    discount=(20/100.0)*amount;
    finalamount=amount-discount;

    printf("the total amount %d\n",amount);
    printf("the discount is %d\n",discount);
    printf("the finalamount is %d\n",finalamount);
    if(amount<1000)
    printf("no discount is given");
    return 0;

}
