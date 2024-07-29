#include<stdio.h>

int main(){

    for(int i = 0 ; i < 7 ; i++){
        for(int j = 0 ; j < 7 ; j++){
            if(i == 6 || j == 7/2 || j == 3 - i){
                printf(" 0 ");
            }else{
                printf("   ");
            }
        }
        printf("\n");
    }

    return 0 ;
}