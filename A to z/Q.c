#include<stdio.h>
int main(){

        for(int i = 0; i < 10 ; i++){
            for(int j = 0 ; j < 7 ; j++){
                if(i == 0 || i == 6 || (j == 0 && i < 6) || (j == 6 && i < 6) || ( j == 3 && i > 0  && i < 9) || (i == 8 && j > 3)){
                        printf(" 0 ");
                }else{
                        printf("   ");
                }
            }
            printf("\n");
        }

    return 0;
}