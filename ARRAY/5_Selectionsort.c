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


int main() {
   
int arr[5] = {5,3,2,1,4};

 sorting(arr , 5);
 for(int i =0;i<5;i++)

printf(" %d", arr[i]);


    return 0;
}