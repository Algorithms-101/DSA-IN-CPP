#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int* Fun(int* arr1,int n1,int* arr2,int n2){
  int *arr = (int*)malloc((n1+n2)*sizeof(int));

  for(int i=0;i<n1;++i){
    arr[i]=arr1[i];
  }

  for(int i=0;i<n2;++i){
    arr[i+n1] = arr2[i];
  }

  return arr;
}