
/*****B*****/
/**
 * Function Params
 * arr[] - array sorted in ascending order
 * size - size of the given array arr[]
 * item - item to be searched in the array using binary search
 * return - index of the element if found else -1 if element doesn't exists
*/
int binarySearch(int arr[],int size,int item){
    int first = 0; //first index of array
    int last = size-1; //last index of the array
    /**
     * mid - Middle index between first and last index, calculated as first + (last-first)/2
    */
    int mid;
    //run the loop till element exist in the sub array i.e. between index first and last
    while(first<=last){
        mid = first+(last-first)/2;
        if(arr[mid]==item){
            //if the item is found at middle return the index
            return mid;
        }
        else if(item<arr[mid]){
            //item can only exists betwenn first and mid index part, 
            //as all the elements left to the middle index will be less that mid element - array sorted in ascending order
            //shift the last index before the mid index
            last = mid-1;
        }
        else {
            //item>arr[mid]
            //item can only exist after mid index as all the value after mid till last will be greater than value at mid - array sorted in ascending order
            //shift first index to mid+1
            first = mid+1;
        }
    }
    //if above loop doesn't return any value return -1 representing item not found
    return -1;
}
