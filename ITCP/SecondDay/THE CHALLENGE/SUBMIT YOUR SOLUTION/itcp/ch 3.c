#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int leapyear(int y){
    if( y % 4 == 0){
        if(y % 100 != 0){
            if(y % 400 != 0){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }else{
        return false;
    }
}

int main(){
    int y;
    printf("enter the year please: ");
    scanf("%d" ,&y);
    if(leapyear(y) == true){
        printf("the year is a leap year");
    }else{
        printf("the year isnt a leap year");
    }
    return 0;
}