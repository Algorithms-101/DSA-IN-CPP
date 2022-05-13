#include <iostream>
#include <string>

using namespace std;
 
int main()
{
 
    string arr[]={"cat","dog","fish"};
    string find = "dog";
    int len =  sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i < len; i++){
        if (arr[i]==find){
            cout  << find <<" Was Located at index " << i;
        }
      // cout <<arr[i] ;
    }
  

 
    cout << endl;
}