#include <stdio.h>
int main()
{
int s1,s2,s3,s4,s5;
printf("-------------Student marksheet------------\n");

printf("\nenter marks in maths ");
scanf("%d",&s1);

printf("\nenter marks in hindi ");
scanf("%d",&s2);

printf("\nenter marks in english ");
scanf("%d",&s3);

printf("\nenter marks in chemistry ");
scanf("%d",&s4);

printf("\nenter marks in physics ");
scanf("%d",&s5);


printf("\n----------------------------------------------");

int T=s1+s2+s3+s4+s5;
float P=T/5.00;

printf("\ntotal is = %d",T);
printf("\npercentage is =%f",P); 

if (P>=90)
{
    printf("\n  A grade");
}
else if (P>=75)
{
    printf("\n  B grade");
}
else if (P>=60)
{
    printf("\n  C grade");
}
else if (P>=40)
{
    printf("\n  D grade");
}
else if (P<40)
{
    printf("\n  FAIL  ");
}
    return 0;
}
