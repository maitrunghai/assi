#include "ass1.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/
 

/*******************************************************************************
 * Prototypes
 ******************************************************************************/


/*******************************************************************************
 * Variables
 ******************************************************************************/


/*******************************************************************************
 * Code
 ******************************************************************************/
void nhapMang(int arrInt[],uint8_t length)
{
    uint8_t i=0;
    for(i=0;i<length;i++)
    {
        printf("nhap gia tri thu %d: ",i+1);
        scanf("%d",&arrInt[i]);
    }
}
 
void printArr(int arrInt[], uint8_t length)
{
    uint8_t i=0;
    printf("\n");
    for(i=0;i<length;i++)
    {
        printf("%3d ",arrInt[i]); /* in gia tri*/
    }
}

void arrChanLe(int arr[], uint8_t length)
{   int temp=0;
    uint8_t i=0;
    uint8_t j=length-1;
    while(1)
    {
        while(arr[i]%2!=0)
        {
            i++;
        }
        while(arr[j]%2==0)
        {
            j--;
        }
        if (i>j)
        {
            break;
        }
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    
}

float trungBinh(int arrInt[],uint8_t length)
{
    uint8_t i=0;
    int sum=0;
    /* tinh tong cac phan tu trong mang*/
    for(i=0;i<length;i++)
    {
       sum+=arrInt[i];
    }
    /*gia tri trung binh*/
    return (float)sum/length;
}


uint8_t countVal(int arrInt[],uint8_t length,float val)
{
    uint8_t i=0;
    uint8_t count =0;
    for(i=0;i<length;i++)
    {
        if(arrInt[i] < val)
        {
            count++;
        }
    }
    return count;
}
    

