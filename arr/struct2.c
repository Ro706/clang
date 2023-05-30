#include<stdio.h>
struct student{
        long long int prn;
        float marks;
        int year;
        char sec;
};
int main(){
        struct student s1;
        printf("%d",sizeof(s1));
        s1.prn = 22070521075;
        s1.marks = 80.5;
        s1.year=1;
        s1.sec='c';
        printf("%lld\n",s1.prn);
        printf("%f\n",s1.marks);
        printf("%d\n",s1.year);
        printf("%c\n",s1.sec);
}
