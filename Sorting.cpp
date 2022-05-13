#include <iostream>
#include <string>

using namespace std;
 
int main()
{
 
    int arr[]={3,5,1,7,2,9,4};
    
    int len =  sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i < len; i++){
        if (arr[i] > arr[i+1]){
           arr[i], arr[i+1] = arr[i+1], arr[i]; 
        }
      // cout <<arr[i] ;
    }
  

    for(int i=0; i < len; i++){
        
            cout  << arr[i];
        
      // cout <<arr[i] ;
    }
  
    cout << endl;
}