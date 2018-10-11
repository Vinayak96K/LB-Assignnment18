#include"MyHeader.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Function Name: Pattern[QuesNumber]
//  Description: Accepts one number and displays a particular pattern.
//  Input: int[IN]
//  Output: NA
//  Author: Vinayak Mahendra Patil
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int GetNumberLen(int iVar)
{
    int iNumLen=0;
    if(iVar<0)
    {
        iVar=-iVar;
    }
    while(iVar!=0)
    {
        iNumLen++;
        iVar=iVar/10;
    }
    return iNumLen;
}

void Pattern1(int iNo)
{
    int iDigitCnt=0,iCnt1=0,iCnt2=0,iVar;
    int *ptr;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    iDigitCnt=GetNumberLen(iNo);

    ptr=(int *)calloc(iDigitCnt,sizeof(int));
    iVar=iNo;

    for(iCnt1=0;iCnt1<iDigitCnt;iCnt1++)
    {
        ptr[iCnt1]=(iVar%10);
        iVar=iVar/10;
    }

    for(iCnt1=1;iCnt1<=iDigitCnt;iCnt1++)
    {
        for(iCnt2=iDigitCnt-1;iCnt2>=0;iCnt2--)
        {
            printf("%d\t",ptr[iCnt2]);
        }
        printf("\n");
    }

    free(ptr);
}

void Pattern2(int iNo)
{
    int iDigitCnt=0,iCnt1=0,iVar;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    iDigitCnt=GetNumberLen(iNo);
    
    for(iCnt1=1;iCnt1<=iDigitCnt;iCnt1++)
    {
        iVar=iNo;
        while(iVar!=0)
        {
            printf("%d\t",iVar%10);
            iVar=iVar/10;
        }
        printf("\n");
    }
}

void Pattern3(int iNo)
{
    int iDigitCnt=0,iCnt1=0,iCnt2=0,iVar;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    iDigitCnt=GetNumberLen(iNo);
    
    for(iCnt1=1;iCnt1<=iDigitCnt;iCnt1++)
    {
        iVar=iNo;
        for(iCnt2=1;iCnt2<=iCnt1;iCnt2++)
        {
            printf("%d\t",iVar%10);
            iVar=iVar/10;
        }
        printf("\n");
    }
}

void Pattern4(int iNo)
{
    int iDigitCnt=0,iCnt1=0,iCnt2=0,iVar;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    iDigitCnt=GetNumberLen(iNo);
    
    for(iCnt1=iDigitCnt;iCnt1>0;iCnt1--)
    {
        iVar=iNo;
        for(iCnt2=1;iCnt2<=iCnt1;iCnt2++)
        {
            printf("%d\t",iVar%10);
            iVar=iVar/10;
        }
        printf("\n");
    }
}

void Pattern5(int iNo)
{
    int iDigitCnt=0,iCnt1=0,iCnt2=0,iVar;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    iDigitCnt=GetNumberLen(iNo);
    
    for(iCnt1=1;iCnt1<=iDigitCnt;iCnt1++)
    {
        iVar=iNo;
        for(iCnt2=1;iCnt2<=iDigitCnt;iCnt2++)
        {
            if((iCnt1==1)||(iCnt1==iDigitCnt)||(iCnt2==1)||(iCnt2==iDigitCnt))
            {
            printf("%d\t",iVar%10);
            }
            else
            {
                printf("0\t");
            }
            iVar=iVar/10;
        }
        printf("\n");
    }
}