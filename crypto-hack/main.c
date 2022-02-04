#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

void intToAscii(int arr[], int length){
    char result[length]; 
    for(int i = 0; i < length; i++){
        result[i] = arr[i];
    } 
    printf(result);

}

int main(int argc, char **argv){
    int arr[] = {99, 114, 121, 112, 116, 111, 123, 65, 83, 67, 73, 73, 95, 112, 114, 49, 110, 116, 52, 98, 108, 51, 125};

    intToAscii(arr, 23);
}