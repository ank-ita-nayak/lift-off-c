#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,ch;
    
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("Enter\n");
    printf("1.For addition\n");
    printf("2.For subtraction\n");
    printf("3.For multiplication\n");
    printf("4.For division\n");
    printf("enter choices:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("sum=%d",a+b);
            break;
        case 2:
            printf("differ=%d",a-b);
            break;
        case 3:
            printf("multiply=%d",a*b);
            break;
        case 4:
            printf("div=%d",a/b);
            break;
        default:
            printf("error");      
    }
    getch();
}