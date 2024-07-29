#include<stdio.h>
int main(){

    for(int i = 0 ; i <= 7 ; i++){
        for(int j = 0 ; j <= 7 ; j++){
                if(i == 0 || j == 7 - i){
                        printf(" 9 ");
                }else{
                    printf("   ");
                }
        }
        printf("\n");
    }

    return 0;
}