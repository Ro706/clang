#include<stdio.h>
void main(){
	//this code is for 
	//1
	//1 2
	//1 2 3 
	//1 2 3 4 like this 
	for(int j=1;j<=5;j++){
		for (int i=1;i<=j;i++){
			printf("%d ",i); 
		}
		printf("\n");	
	}
	printf("\n");
	//this code is for 
	//1
	//2 2
	//3 3 3
	//4 4 4 4 like this
        for(int j=1;j<=5;j++){
                for (int i=1;i<=j;i++){
                        printf("%d ",j);
                }
                printf("\n");
        }
	printf("\n");
	//this code is for 
	//*
	//* *
	//* * * 
	//* * * * like this 
	for (int i=1;i<=5;i++){
		for (int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
        //this code is for
        //A
        //A B
        //A B C
        //A B C D like this
        for (int i=65;i<=69;i++){
                for (int j=65;j<=i;j++){
                        printf("%c ",j);
                }
                printf("\n");
        }
        printf("\n");
        //this code is for
        //1
        //2 1
        //3 2 1
        //4 3 2 1 like this
        for (int i=1;i<=5;i++){
                for (int j=i;j>=1;j--){
                        printf("%d ",j);
                }
                printf("\n");
        }
        printf("\n");
        //this code is for
        //1 2 3 4 5
        //1 2 3 4
        //1 2 3
        //1 2
	//1 like this
        for (int i=5;i>=1;i--){
                for (int j=1;j<=i;j++){
                        printf("%d ",j);
                }
                printf("\n");
        }
        printf("\n");
	//this code is for
        //5 4 3 2 1
        //5 4 3 2
        //5 2 3
        //5 4
        //5 like this
        for (int i=1;i<=5;i++){
		for (int j=5;j>=i;j--){
                        printf("%d ",j);
                }
                printf("\n");
        }
        printf("\n");
	//this code is for
        //5 4 3 2 1
        //4 3 2 1
        //3 2 1
        //2 1
        //1 like this
        for (int i=5;i>=1;i--){
                for (int j=i;j>=1;j--){
                        printf("%d ",j);
                }
                printf("\n");
        }
        printf("\n");
	//this code is for
        //* * * * *
        //*       *
        //*       *
        //*       *
        //* * * * * like this
        for (int i=1;i<=5;i++){
                for (int j=1;j<=5;j++){
			if(i==1||i==5||j==1||j==5)
                	        printf("*");
			else
				printf(" ");
                }
                printf("\n");
        }
        printf("\n");
	//this code is for
        //*
        //**
        //* *
        //*  *
        //***** like this
        for (int i=1;i<=5;i++){
                for (int j=1;j<=5;j++){
			if (j==1||i==5||j==i)
                        	printf("*");
			else
				printf(" ");
                }
                printf("\n");
        }
        printf("\n");
	//this code is for
        /*     1
   	      12
             123
            1234
           12345
        */
        // like this
        for (int i=1;i<=5;i++){
                for (int k=5;k>=i;k--){
                        printf(" ");
                }
		for (int j=1;j<=i;j++){
			printf("%d",j);
		}
                printf("\n");
        }
        printf("\n");
	//this code is for
        /*     
	    1
 	   1 2
	  1 2 3
 	 1 2 3 4
        1 2 3 4 5
        */
        // like this
        for (int i=1;i<=5;i++){
                for (int k=5;k>=i;k--){
                        printf(" ");
                }
                for (int j=1;j<=i;j++){
                        printf("%d ",j);
                }
                printf("\n");
        }
        printf("\n");


}
