#include <iostream>

using namespace std;

//function to fill the array with the sum of pointers in loops

void func1(int *arr, int m ,int n){

    //iterate m*n times

    for(int i=0;i<m;i++){

        for(int j=0;j<n;j++){

            //set current element as sum of iterators

            *((arr+i*n)+j)=(i+j);

        }

    }

}

//function to find sum of all the diagonal elements of a 3d array

int func2(int *arr, int m){

    //sum variable initialized to 0

    int sum=0;

    //iterate on each first dimension

    for(int i=0;i<m;i++){

        //and for each first dimension sum the diagonal values

        for(int j=0,k=0; j<m && k<m; j++,k++){

            sum+=*(((arr+i*m*m)+j*m)+k);

        }

    }

    //return sum

    return sum;

}

//driver function

int main(){   

    //2D array of size 6*5 initialized with 0

    int arr1[6][5]={0};

    //call func1 by passing array as a pointer

    func1(&arr1[0][0],6,5);

    //3D array of dimension 3*3*3 initialized

    int arr2[3][3][3]={{{0,1,2},{3,4,5},{6,7,8}},

                        {{9,10,11},{12,13,14},{15,16,17}},

                        {{1,2,3},{4,5,6},{7,8,9}}

                        };

    //print the returned sum

    cout<<func2(&arr2[0][0][0], 3);

    return 0;

}