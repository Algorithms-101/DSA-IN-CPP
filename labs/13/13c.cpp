#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int* Fun(int* arr1,int n1){
  int *arr = (int*)malloc(n1*sizeof(int));

  for(int i=0;i<n1;++i){
    arr[i] = arr1[i];
  }

   int i, j, min_idx;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n1-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < n1; j++)  
        if (arr[j] > arr[min_idx])  
            min_idx = j;  
  
        // Swap the found minimum element with the first element  

        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp; 
    }

    return arr;
}