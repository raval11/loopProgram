#include<stdio.h>
int main(){

        for(int i = 0 ; i <= 7 ; i++){
            for(int j = 0 ; j <= 7 ; j++){
                    if((j == 7 && i > 4)|| i == 7 ||  i == 4 || i == 0 || j == 0 ){
                            printf(" 0 ");
                    }else{  
                        printf("   ");
                    }
            }
            printf("\n");
        }

    return 0;
}