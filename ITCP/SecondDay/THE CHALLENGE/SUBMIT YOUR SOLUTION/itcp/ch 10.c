#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int i,n;
    int arr[n];
    bool x = false;

    printf("enter the array size: ");
    scanf("%d",&n);

    printf("enter the array elements: ");
    for(i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }

    i=0;

    if(arr[0]>arr[1]){
        while(arr[i]>arr[i+1] && i<n){
            x == true;
            i++;
        }
    }

    i=0;

    if(arr[0]<arr[1]){
        while(arr[i]<arr[i+1] && i<n){
            x == true;
            i++;
        }
    }
    
    if(x == true){
        printf("MONOTONE");
    }else{
        printf("NON MONOTONE");
    }
    
    return 0;
}