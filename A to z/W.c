#include<stdio.h>
int main(){

        for(int i = 0; i < 7 ; i++){
            for(int j = 0 ; j < 24 ; j++){
                if(j == i  || j == 12 - i ||  j == 12 + i || j == 24 - i){
                        printf(" 0 ");
                }else{
                        printf("   ");
                }
            }
            printf("\n");
        }

    return 0;
}