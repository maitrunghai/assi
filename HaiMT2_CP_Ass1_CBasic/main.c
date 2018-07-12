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


int main(void)
{
    uint8_t n=0;
    uint8_t count=0;
    int arrInt[MAX]={0};
    float TB=0;
    
    /* nhap vao mang so nguyen */
    do
    {
        printf("\nNhap so phan tu cua mang: ");
        scanf("%d",&n);	
    }
    while(n<=0 || n> MAX);
    nhapMang(arrInt,n);
    
    /*In mang*/
    printf("\nMang duoc nhap:\n");
    printArr(arrInt,n);
    
    /* Gia tri trung binh cua mang*/
    TB=trungBinh(arrInt,n);
    printf("\n\nGia tri trung binh cua mang: %0.2f",TB);
    
    /* Dem so gia tri nho hon TB*/
    count=countVal(arrInt,n,TB);
    printf("\nCo %d gia tri nho hon gia tri trung binh\n",count);
    
    /*sap xep arr*/
    arrChanLe(arrInt,n);  
    
    /*In mang*/
    printf("\nMang sau khi sap xep:\n");
    printArr(arrInt,n); 
    /* ket thuc chuong trinh */
    return 0; 
}
