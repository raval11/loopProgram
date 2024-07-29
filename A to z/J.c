#include<stdio.h>
int main(){

        for(int i = 0; i < 7 ; i++){
            for(int j = 0 ; j < 7 ; j++){
                if(j == 3  || i == 0 || (i > 3 &&  j == i / 2)){
                        printf(" 0 ");
                }else{
                        printf("   ");
                }
            }
            printf("\n");
        }

    return 0;
}