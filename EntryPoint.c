#include"MyHeader.h"

int main(int argc, char const *argv[])
{
    int iValue=0;

    printf("Enter a positive integer number:");
    scanf("%d",&iValue);

    printf("Pattern of Q1:\n");
    Pattern1(iValue);    
    printf("\n");

    printf("Pattern of Q2:\n");
    Pattern2(iValue);    
    printf("\n");

    printf("Pattern of Q3:\n");
    Pattern3(iValue);    
    printf("\n");

    printf("Pattern of Q4:\n");
    Pattern4(iValue);    
    printf("\n");

    printf("Pattern of Q5:\n");
    Pattern5(iValue);    
    printf("\n");

    return 0;
}
