#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void Fun(int* arr, int n, int* min, int* max) {
  *min = *max = arr[0];
  for (int i = 0; i < n; ++i) {
    if(arr[i]<*min){
      *min = arr[i];
    }
    if(arr[i]>*max){
      *max = arr[i];
    }
  }
}