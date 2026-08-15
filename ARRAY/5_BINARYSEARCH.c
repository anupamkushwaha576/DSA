#include <stdio.h>

void sorting(int arr [], int n){
    int j;
    for(int i =0;i<n;i++){
   int mindx = i;
      for(j = i+1;j<n;j++){
        if( arr[j]<arr[mindx])
          mindx =j;
      }
    int temp = arr[i];  // ✅🧐🧐
    arr[i] = arr[mindx];
    arr[mindx] = temp;

    }
}

int binarysearch(int arr[],int n,int x){
    int low =0,mid,high= n-1;
    mid = (low+high)/2;

    while(low<=high){

        if(arr[mid]==x) return mid;
        if(arr[mid]<x)  low = mid+1;
         else  high= mid-1;


    }
return -1;
}


int main() {
   
int arr[] = {5,3,2,1,4,45,52,23,55,677,886,444,3,10};
int n = sizeof(arr)/sizeof(int);

 sorting(arr , n);
 for(int i =0;i<n;i++) printf(" %d", arr[i]);
   int idx = binarysearch(arr,n,10);
printf(" \nthe element idx : %d",idx);

 

    return 0;
}