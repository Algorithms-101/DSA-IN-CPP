/**
 * Params
 * arr[] - array that needs to be sorted
 * size - size of the given array arr[]
 * Sorts the array in ascending order
*/
void bubbleSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        //Last i elements will already be sorted
        for(int j=0;j<size-1-i;j++){
            //if the greater value exists before the next value swap them so that they can be in ascending order
            if(arr[j]>arr[j+1]){
                //swap the values
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}