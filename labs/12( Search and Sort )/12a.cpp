int getLargest(int arr[], int size){
    //Since the array is sorted in ascending order, the last index i.e. size-1 will be the largest element in the array
    //e.g [1,1,2,3,6,10] array of size 6, index 5 contains larges element i.e 10
    return arr[size-1]; //returning the last element of the array
}