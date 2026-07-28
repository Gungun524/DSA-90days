//Problem: creating subarray from an array .
//Time complexity: O(n^3).
#include <iostream>
using namespace std ;
void printsubarray(int *arr,int n){
    for(int start =0;start<n;start++){
        for(int end = start;end<n;end++){
            for(int i = start;i<end; i++){
                cout<<arr[i];
            }
            cout<<" ";
        }
        cout<<"\n";
    }
}
int main(){
     int array[] = {1,2,3,4,5};
    int length = sizeof(array)/sizeof(int);
     printsubarray(array,length);
    return 0;
}
