//Problem: sorting array.
//Approach: insertion sort.
//Time complexity:O(n^2).
#include <iostream>
using namespace std;
int insertionsort(int *arr,int n){
    for(int i =1;i<n;i++){
        int curr = arr[i];
        int prev =  i-1;
        while(prev>=0 && arr[prev]>curr){
            arr[prev + 1] = arr[prev]; 
            prev--;
        }
        arr[prev+1]=curr;
    }
    cout<<"sorted array using Insertion Sort :";
     for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
};
int main(){
    int array[] = {5,4,1,3,2};
    int length = sizeof(array)/sizeof(int);
    insertionsort(array,length);
    return 0;
}
