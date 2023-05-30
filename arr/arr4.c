#include<stdio.h>
int main(){
        int a[3][3]={1,2,3,4,5,6,7,8,9},i,j;
        for (j=0;j<3;j++){
                for (i=0;i<4;i++){
                        printf("%d \t",a[j][i]);
                }
                printf("\n");
        }
        printf("\n");
        for (j=0;j<3;j++){
                for (i=0;i<3;i++){
                        a[j][i]=(j+i)*3;
                        printf("%d \t",a[j][i]);
                }
                printf("\n");
        }

}
