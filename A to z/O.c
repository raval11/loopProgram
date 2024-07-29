#include<stdio.h>
int main(){

        for(int i = 0; i < 7 ; i++){
            for(int j = 0 ; j < 7 ; j++){
                if((j == 0 && i < 6 && j < 6 && i > 0) || (i == 6 && j > 0 && j < 6) || (j == 6 && i < 6 && i >0) || (i == 0 && j > 0 && j < 6)){
                        printf(" 0 ");
                }else{
                        printf("   ");
                }
            }
            printf("\n");
        }

    return 0;
}