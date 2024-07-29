#include<stdio.h>
int main(){

        for(int i = 0 ; i <= 7 ; i++){
            for(int j = 0 ; j <= 7 ; j++){
                if(j == 5 || i == 5 || j == 5 - i){
                    printf(" 0 ");
                }else{
                    printf("   ");
                }
            }
            printf("\n");
        }

    return 0;
}