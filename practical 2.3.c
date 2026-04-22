#include <stdio.h>
int main()
{
    int choice;
    do{
        
        printf("\n-----------MENU-------------");
        printf("\n1.check if a number is even or odd");
        printf("\n2.check if a number is positive or negative");
        printf("\n3.find the greatest digit");
        printf("\n4.find the sum of the digit");
        printf("\n5.exit the program");

        printf("\nenter the value of case number [1-5]: ");
        scanf("\n%d",&choice);

        int num1,num2,a,b,c,num3,sum=0;
        switch(choice)
        {
            case 1:
            {
                printf("enter a number :");
                scanf("%d",&num1);
                if (num1%2 == 0)
                {
                printf("number is even");
                }
                else 
                {
                    printf("number is odd");
                }
            break;
            }
            case 2:
            {
                printf("enter a number :");
                scanf("%d",&num2);
                if (num2>=0)
                {
                    printf("number is positive");
                }
                else
                {
                    printf("number is negative");
                } 
            break;
            }
            case 3:
            {
                printf("enter three numbers\n");
                scanf("%d %d %d", &a,&b,&c);
                if (a==b && b==c)
                {
                    printf("all numbers are equal");
                }
                else if (a>=b && a>=c)
                {
                    printf("a is the gretest digit");
                }
                else if (b>=a && b>=c)
                {
                    printf("b is the gratest digit");
                }
                else 
                {
                    printf("c is the gratest digit");
                }
            break;
            }
            case 4:
            {
                sum = 0;
                printf("enter a number :");
                scanf("%d",&num3);

                while(num3>0)
                {
                    sum = sum + num3 % 10;
                    num3 = num3 / 10;   
                }
                printf("sum of digits : %d",sum);
            break;
            }

            case 5:
            {
                printf("\nExit the program\n");
            break;
            }

            default :
            {
                printf("\ninvalid");
            }
        }
    }
    while(choice != 5);

return 0;   
}
