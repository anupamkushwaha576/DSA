#include <stdio.h>

int linear(int a[], int x,int n){
    for(int i =0;i<n;i++){
        if(a[i]==x) return 1;
       
    } return 0;
}

int main() {
   
int a[]= {22,44,33,22,11,3,45,54};
int n= sizeof(a)/sizeof(int);
    printf(" enter the value you vant to search");
    int val;
    scanf("%d",&val);
    int found  = linear(a, val,n);
    printf("%d",found);


    return 0;
}