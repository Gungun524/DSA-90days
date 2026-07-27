//Problem: reverse the array with 
//Approach:without using extra space
//Time Complexity: O(n)
#include <iostream>
using namespace std;
void reversearr(int *arr,int n){
    int start =0;
    int end = n-1;
    while(start<end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout<< "reverse array:"<<"[";
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}
int main(){
   int marks[] ={5,4,3,9,2};
   int length=sizeof(marks)/sizeof(int);
   reversearr(marks,length);
    return 0;
}