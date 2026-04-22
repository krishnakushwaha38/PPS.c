#include <stdio.h>
int main()
{
      int p1=100,p2=20,p3=30,p4=60,p5=10;
printf("\n------------Billing system-------------");
printf("\n---------------------------------------");
      printf("\n p1=%d",p1);
      printf("\n p2=%d",p2);
      printf("\n p3=%d",p3);
      printf("\n p4=%d",p4);
      printf("\n p5=%d",p5);
      printf("\n---------------------------------------");
int q1,q2,q3,q4,q5;

printf("\n enter quantity for p1 : ");
scanf("%d",&q1);
printf("\n enter quantity for p2 : ");
scanf("%d",&q2);
printf("\n enter quantity for p3 : ");
scanf("%d",&q3);
printf("\n enter quantity for p4 : ");
scanf("%d",&q4);
printf("\n enter quantity for p5 : ");
scanf("%d",&q5);
int totalbill =(p1*q1) + (p2*q2) + (p3*q3) + (p4*q4) + (p5*q5);
      printf("\ntotal bill =%d",totalbill);
      int discount = totalbill * 0.1;
      printf("\nyou get discount of  =%d",discount);
      printf("\n---------------------------------------");
       int finalbill = totalbill - discount;
       printf("\nfinal bill =%d",finalbill);
      printf("\n---------------------------------------");
return 0;
}
