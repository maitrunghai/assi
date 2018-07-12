#ifndef _ASS1_H_
#define _ASS1_H_

#include<stdio.h>
#include<stdint.h>
/*******************************************************************************
 * Definitions
 ******************************************************************************/
#define MAX 20

/*******************************************************************************
 * API
 ******************************************************************************/
 
 /*!
 * @brief Nhap cac gia tri cua mang
 *
 * @param arrInt <mang so nguyen>.
 * @param length <So phan tu cua mang>.
 *
 * @return <None>.
 */
void nhapMang(int arrInt[],uint8_t length);

/*!
 * @brief In mang
 *
 * @param arrInt <mang so nguyen>.
 * @param length <So phan tu cua mang>.
 *
 * @return <None>.
 */
void printArr(int arrInt[], uint8_t length);

  /*!
 * @brief Tinh gia tri trung binh cua mang
 *
 * @param arrInt <mang so nguyen>.
 * @param length <So phan tu cua mang>.
 *
 * @return gia tri trung binh
 */
float trungBinh(int arrInt[],uint8_t length);

/*!
 * @brief In mang
 *
 * @param arrInt <mang so nguyen>.
 * @param length <So phan tu cua mang>.
 *
 * @return <None>.
 */
uint8_t countVal(int arrInt[],uint8_t length,float val);
 
 /*!
 * @brief Dem so phan tu trong mang nho hon val
 *
 * @param arrInt <mang so nguyen>.
 * @param length <So phan tu cua mang>.
 * @param val <gia tri de so sanh>.
 *
 * @return <So phan tu nho hon val>.
 */
void arrChanLe(int arrInt[], uint8_t length);


#endif /* _ASS1_H_ */
