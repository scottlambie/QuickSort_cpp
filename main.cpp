#include <iostream>
#include "quicksort.h"

int main(){
    std::cout << "QUICKSORT EXTERNAL FILE TEST, HEADER FUNCTION TEST\n";
    int arrLength = 10;
    int arr[arrLength] = {9, 5, 7, 1, 10, 3, 6, 2, 4, 8};
    
    for (int i=0; i<arrLength;++i){
        std::cout << arr[i] << ",";
    }
    
    std::cout << "\n";
    driver(arr, arrLength);
    std::cout << "\n";

    for (int i=0; i<arrLength;++i){
        std::cout << arr[i] << ",";
    }
}