#include<stdio.h>
int main(){
        int a[2][3]={1,2,3,4,5,6};
        for (int j=0;j<2;j++){
                for (int i=0;i<3;i++){
                        printf("%d \t",a[j][i]);
                }
                printf("\n");
        }

}
