
#include<stdio.h>
void main()
{
    int n1,n2,sum,diff,prod,div,rem;
    printf("enter the two numbers\n");
    scanf("%d%d",&n1,&n2);
    sum = n1 + n2;
    diff = n1 - n2;
    prod = n1 * n2;
    div = n1 / n2;
    rem = n1 % n2;
    printf("Sum of %d and %d is %d\n", n1,n2,sum);
    printf("Difference of %d and %d is %d\n", n1,n2,diff);
    printf("Product of %d and %d is %d\n", n1,n2,prod);
    printf("Division of %d and %d is %d\n", n1,n2,div);
    printf("Remainder of %d and %d is %d\n", n1,n2,rem);

}
