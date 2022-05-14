/**
 * Parameters
 * arr[] - array 
 * size - size of the given array arr[]
 * item - value we need to look for into the array and return the closest element
*/
int findClosest(int arr[],int size, int item){
    /**
     * Absolute difference between two number is given by |a-b| which returns a positive value always
     * we want to minimize the absolute difference value to find the closest element
     * e.g. {1,5}, item we are looking 4, |1-4| = 3 and |5-4| = 1, 5 is the closest number
    */
    int abs_diff = INT_MAX; //initialising with maximum value as possible
    int value; //closest value
    //going through each element in the array and checking if the absolute value we have is minimum or not
    for(int i=0;i<size;i++){
        //abs(a-b) = |a-b|
        if(abs(arr[i]-item)<abs_diff){
            //if we have value which give less absolute difference then update the current value
            value = arr[i];
            abs_diff = abs(arr[i]-item);
        }
    }
    return value;
}