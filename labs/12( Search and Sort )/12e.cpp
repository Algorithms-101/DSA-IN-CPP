/**
 * Params
 * arr[] - array that needs to be sorted
 * size - size of the given array arr[]
 * Sorts the array in ascending order using selection sort algorithm
 * returns - total number of element comparision is performed
*/
int selectionSort(int arr[],int size){
    int total_comp = 0; //total number of comparision is performed
    //traverse the array till last second index
    for(int i=0;i<size-1;i++){
        int min_index = i;//index containing the min value in the array initialising it as i
        //find the minimum element's index in the array
        //start checking after i till the end, as all the element before must be sorted before i
        for(int j=i+1;j<size;j++){
            //if element at j is less than the previously selected minimum element's index, change the value of min_index
            total_comp++;//increment the total comparision counter for every comparision
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        //min_index contains index of next min element
        //swap the value of minimum element to ith index
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    return total_comp; //return the total comparision value
}