//Problem: sorting array.
//Approach:Bubble Sort.
//Time complexity: O(n^2).
#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b ;
    b=temp;
};


int   bubblesort(int *arr,int n ){
    
    for(int i =0;i<n-1;i++){
        bool isswap=false;
        for(int j = 0 ;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswap=true;
            }
        }
        if(isswap==false){
            break;
        }
    }
    cout<<"sorted array usning Bubble Sort :";
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
//Approach:Selection Sort.
//Time complexity: O(n^2).
int selectionsort(int *arr,int n){
    for(int i = 0 ; i<n-1;i++){
        int minindex= i ;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
                swap(arr[minindex],arr[i]);
            }
        }
    }
    cout<<"sorted array using Selection Sort :";
    for(int i = 0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int main(){
    int array[] = {5,4,1,3,2};
    int length = sizeof(array)/sizeof(int);
    bubblesort(array,length);
    selectionsort(array,length);
    return 0;
} 