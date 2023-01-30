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
 * @file stats.h 
 * @brief Contains Function Prototypes
 *
 * This file contains various function prototypes and its explanation to perform various statistics
 *
 * @author Ajesh Vincent
 * @date 2023 Jauary 1

 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
void print_statistics();

/**
 * @brief Given an array of data and a length, prints the array to the screen
 *
 * <Add Extended Description Here>
 *
 * @param <data[]> <char array containing data >
 * @param <N> <length of the array>
 
 *
 * @return <Add Return Informaiton here>
 */
 void print_array(char[] data, int N);
 
 /**
 * @brief Given an array of data and a length, returns the median value


 *
 * <Add Extended Description Here>
 *
 * @param <data[]> <char array containing data >
 * @param <N> <length of the array>
 
 *
 * @return <Returns a median of array>
 */
 double find_median(char[] data, int N);
 
 /**
 * @brief Given an array of data and a length, returns the mean value


 *
 * <Add Extended Description Here>
 *
 * @param <data[]> <char array containing data >
 * @param <N> <length of the array>
 
 *
 * @return <Returns a mean of array>
 */
 
 double find_mean(char data[], int N);
 
 /**
 * @brief Given an array of data and a length, returns the maximum value


 *
 * <Add Extended Description Here>
 *
 * @param <data[]> <char array containing data >
 * @param <N> <length of the array>
 
 *
 * @return <Returns a maximum of array>
 */
 
 double find_maximum(char data[], int N);
 
 /**
 * @brief Given an array of data and a length, returns the minimum value


 *
 * <Add Extended Description Here>
 *
 * @param <data[]> <char array containing data >
 * @param <N> <length of the array>
 
 *
 * @return <Returns a minimum value of array>
 */
 double find_minimum(char data[], int N);
 
 /**
 * @brief Given an array of data and a length, returns the sorted Array


 *
 * <Add Extended Description Here>
 *
 * @param <data[]> <char array containing data >
 * @param <N> <length of the array>
 
 *
 * @return <Void return type>
 */
 void sort_array(char data[], int N);

#endif /* __STATS_H__ */
