#include<stdio.h>
struct product{
        long long int product_id;
        float product_value;
        char product_name[20];
        int manufacturing_year;
        int exp_year;
};
int main(){
        int sizeofarr;
        printf("Enter a number of value you want to enter:");
        scanf("%d",&sizeofarr);
        struct product p[sizeofarr];
        printf("%d\n",sizeof(p));
        for(int i =0;i<sizeofarr;i++){
                printf("Enter the product_id:\n");
                scanf("%d",&p[i].product_id);
                printf("enter a product name:\n");
                scanf("%s",&p[i].product_name);
                printf("ente a product value:\n");
                scanf("%f",&p[i].product_value);
                printf("enter a manufacturing year:\n");
                scanf("%d",&p[i].manufacturing_year);
                printf("enter a expiry year:\n");
                scanf("%d",&p[i].exp_year);
        }
        for (int i =0;i<sizeofarr;i++){
                printf("product id:%lld\n",p[i].product_id);
                printf("product name:%s\n",p[i].product_name);
                printf("product value:%2.f\n",p[i].product_value);
                printf("manufacturing year:%d\n",p[i].manufacturing_year);
                printf("expiry year:%d\n",p[i].exp_year);
        }
return 0;
}
