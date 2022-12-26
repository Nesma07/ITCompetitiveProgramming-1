#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int i,j,n1,n2,n;
    int arr1[]={};
    int arr2[]={};

    printf("enter the first array size: ");
    scanf("%d",&n1);

    printf("enter the secound array size: ");
    scanf("%d",&n2);
    
    printf("enter the first array elements: ");
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }

    printf("enter the secound array elements: ");
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }

    if(n1<n2){
        n = n1;
    }else{
        n = n2;
    }

    int arr3[n];

    for(i=0;i <= 7;i++){
        for(j=0; j<=4 ;j++){
            if(arr1[i] == arr2[j]){
                n = n + 1;
                arr3[7] == arr1[i];
            }
        }
    }

    printf("the intersiction array is: ");
    for(i=0;i<=n;i++){
        printf("%d", arr3[i]);
    }
    return 0;
}