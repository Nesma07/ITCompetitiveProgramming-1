#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int uppercase(){
    int n,i;
    char s[n];

    printf("enter the string size: ");
    scanf("%d",&n);

    printf("enter the string: ");
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }

    for(i=0 ; i<=n ;i++){
        if(isupper(s[i]) == false){
            printf("false");
            break;
        }
    }
    printf("true");
    return 0;
}