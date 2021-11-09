#include<stdio.h>
int main()
{
    int num, q, sum=0, rem;
    printf("Please enter a number ");
    scanf("%d", &num);
    q=num;
    while (num!=0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if (q==sum)
        printf("%d is a armstrong number",q);
    else
        printf("%d is not a armstrong number",q);
    return 0;     
}