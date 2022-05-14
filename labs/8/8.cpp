#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int getRandom() {
  srand(time(0));
  return rand() % 100;
}

int getRandom(int min, int max) {
  return rand() % (max - min + 1) + min;
}

float getAverage(float a, float b) {
  return (a + b) / 2;
}

float getAverage(int min, int max, int n) {
  float sum = 0;
  for (int i=0; i<n; i++) {
    sum += getRandom(min, max);
  }
  return sum / n;
}

int* getRandom(int *a, int *b) {
  int* result = new int[2];
  int n = getRandom(*b, *b + 17);
  int m = getRandom(*a, *a + 54);
  result[0] = n;
  result[1] = m;
  return result;
}

int main() {
  int min, max;
  cout << "Enter the value of min and max: ";
  cin >> min >> max;
  cout << "Average of 1000 random numbers between " << min << " and " << max << " is: " << getAverage(min, max, 1000);
  cout << "\n\nAverage of " << min << " and " << max << " is: " << getAverage(min, max); 
}