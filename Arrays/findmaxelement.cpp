#include <iostream>
using namespace std;
//Problem1: find max of an array.
//Approach:Linear Traversal.
//Time complexity O(n).
void maxofarr(int *arr,int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        
    }
    
     cout<<"Max of array is:"<<max;
}
int main(){
    int marks[]={1,2,8,10,40,90,97,93,99,22};
    int length=sizeof(marks)/sizeof(int);
    cout<<length<<"\n";
    maxofarr(marks,length);
    return 0;
}