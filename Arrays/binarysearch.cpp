//Problem2:search for key in an array.
//Approach:Binary Search.
//Time complexity O(logn).
#include <iostream>
using namespace std ;
int  binarysearch(int *arr,int n,int key){
    int start =0;
    int end =n-1;
    while(start<=end){
        int mid = (start + end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key){
            start = mid +1 ;
        }
        else {
            end = mid -1;
        }

    }
    return -1;
}
int main (){
    int array[] = {1,2,4,9,10,16};
    int length = sizeof(array)/sizeof(int);
    int ans = binarysearch(array,length,2);
    if (ans == -1)
        cout << "Key not found";
    else
        cout << "Key found at index " << ans;

    return 0;
}