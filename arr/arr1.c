#include<stdio.h>
struct student{
        int roll[100];
        float marks[100];                                                               int year[100];
};
int main(){
        struct student s[100];
        for(int i =0;i<3;i++){
                printf("Enter a rollno:\n");
                scanf("%d",&s[i].roll[i]);
                printf("Enter a marks:\n");
                scanf("%f",&s[i].marks[i]);
                printf("Enter your year:\n");
                scanf("%d",&s[i].year[i]);
        }
        for (int i =0;i<3;i++){
                printf("%d\n",s[i].roll[i]);
                printf("%f\n",s[i].marks[i]);
                printf("%d\n",s[i].year[i]);
        }
return 0;
}
