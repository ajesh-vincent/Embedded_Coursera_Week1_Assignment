/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Implementation file to perform various statistical operations
 *
 * 
 *
 * @author <Ajesh Vincent>
 * @date <2023, January 30 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test,SIZE)
  print_statistics(test,SIZE);

}

/* Add other Implementation File Code Here */
void print_array(unsigned char test[], int N)
{
	for(int i=0;i<N;i++)
	{
		printf("%d\t",test[i]);
	}
	
}
void sort_array(unsigned char test[], int N)
{
	int i, j;
	for (i = 0; i < N-1; i++) {
		for (j = 0; j < N-i-1; j++) {
		if (test[j] < test[j+1]) {
        
        char temp = test[j];
        test[j] = test[j+1];
        test[j+1] = temp;
      }
    }
  }
}
double find_median(unsigned char test[], int N)
{
    //sort_array(test,N);
    double median_data=(test[N/2]+test[(N/2)+1])/2;
    return median_data;
}
double find_mean(unsigned char test[], int N)
{
    //sort_array(test,N);
    int sum=0;
    double mean_data=0.0;
    for(int i=0;i<N;i++)
    {
        sum+=test[i];
    }
    mean_data=floor(sum/N);
    return mean_data;
}
int find_maximum(unsigned char test[], int N)
{
    //sort_array(test,N);
    return test[0];
}
int find_minimum(unsigned char test[], int N)
{
    //sort_array(test,N);
    return test[N-1];
}

void print_statistics(unsigned char test[], int N)
{
		sort_array(test,N);
		
		double med=find_median(test,N);
		printf("%f\t",med);
		double me=find_mean(test,N);
		printf("%f\t",me);
		int max=find_maximum(test,N);
		printf("%d\t",max);
		int min=find_minimum(test,N);
		printf("%d\t",min);
		
}




