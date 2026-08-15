#include <stdio.h>

 void display(int brr [] , int x){
    for(int i = 0 ;i<x;i++){
    printf("%d " , brr[i]);}

    printf("\n");
}


int main() {
   
    int arr[] ={ 3,5,6,7,6,5,4,33,22};
    int n ;
     printf(" enter the value ");
     scanf("%d",&n);

    display(arr,n);


    return 0;
}