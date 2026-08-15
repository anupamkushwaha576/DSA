#include <stdio.h>


void display(int arr [] , int x){
    for(int i = 0 ;i<x;i++){
    printf("%d " , arr[i]);}

    printf("\n");
}

void insertion (int brr [], int ele, int ind, int size){

for(int i = size; i>=ind;i--){
    brr[i+1]=brr[i];
}
brr[ind]= ele;


}


int main() {
   
    int arr[10] ={ 1,2,3,4,5};

    int size = 5;
    int n ,k;
     printf(" enter the value");
     scanf("%d",&n);
     printf(" enter the index");
     scanf("%d",&k);
   
    display(arr , size);

    insertion(arr,n,k,size);
    size+=1;
    display(arr ,  size);

    return 0;
}