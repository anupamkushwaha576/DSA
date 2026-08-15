#include <stdio.h>


void display(int arr [] , int x){

    for(int i = 0 ;i<x;i++){
    printf("%d " , arr[i]);}
    printf("\n");
}

void deletion (int brr [], int ele, int ind, int size){
    for(int i = ind-1; i<size;i++){
    brr[i]=brr[i+1];
    }
}


int main() {
   
    int arr[10] ={ 1,2,3,4,5};

    int size = 5;
    int n ,k;
   
     printf(" enter the index");
     scanf("%d",&k);
   
    display(arr , size);

    deletion(arr,n,k,size);
    size-=1;
    display(arr ,  size);

    return 0;
}