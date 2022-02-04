#include "crypto_functions.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void intToChar(int arr[], int length){
    char result[length]; 
    for(int i = 0; i < length; i++){
        result[i] = arr[i];
    } 
    printf(result);
}

void intToChar2(uint8_t arr[], int length){
    char result[length]; 
    for(int i = 0; i < length; i++){
        result[i] = arr[i];
    } 
    printf(result);
}

void hexToBytes(char str[], int length){
    int arrLength = (int) round((double)(length)/2);
    printf("%d", arrLength);
    uint8_t byteArray[arrLength];
    int i = 0;
    if(arrLength % 2 != 0){
        char substr[1] = {str[0]}; 
        uint8_t hello = (uint8_t) strtol(str[0], NULL, 16);
        printf("%d", hello);
    } 

    // for(int j = i; i + 1 < length; i += 2, j++){
    //     char subStr[] = {str[i], str[i + 1]};
    //     byteArray[j] = strtol(subStr, NULL, 16);
    // }
    // intToChar2(byteArray, arrLength);
}