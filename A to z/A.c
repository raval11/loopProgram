#include<stdio.h>
int main(){

        for(int i = 0; i < 7 ; i++){
            for(int j = 0 ; j < 10; j++){
                if( j == 4 - i || j == 5 + i ||  (i == 3 && j > 1 && j < 8)){
                        printf(" 0 ");
                }else{
                        printf("   ");
                }
            }
            printf("\n");
        }

    return 0;
}