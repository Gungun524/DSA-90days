#include <iostream>
using namespace std; 
//Problem2:search for key in an array.
//Approach:Linear Search.
//Time complexity O(n).
void searchforkey(int *arr,int n,int key){
      int index=-1;
   for(int i =0;i<n;i++){
if(key==arr[i]){
  index=i;
  break;
}
}
if(index==-1){
    cout<<"key not found";
   }
else{
    cout<<"key found at index:"<<index;
}
}
int main(){
    int marks[]={1,2,8,10,40,90,97,93,99,22};
    int length=sizeof(marks)/sizeof(int);
    cout<<"length of array "<<length<<"\n";
    searchforkey(marks,length,5);
    return 0;
}
