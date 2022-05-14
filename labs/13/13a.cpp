#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int* Random(int n){
  int* arr = (int *)malloc(n*sizeof(int));
  srand(time(NULL));
  for(int i=0;i<n;++i){
    arr[i]=rand();
  }

  return arr;
}