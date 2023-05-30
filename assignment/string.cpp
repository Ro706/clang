#include<stdio.h>
#include<string.h>
int string_len(){
	char name[20];
	printf("Enter your name:\n");
	scanf("%[^\n]s",&name);
	printf("length of your name is %d",strlen(name));
	return 0;
}
int string_cmp(){
	/*
	Zero ( 0 )
	A value equal to zero when both strings are found to be identical. 
	That is, all of the characters in both strings are the same.
	
	Greater than Zero ( > 0 )
	A value greater than zero is returned when the first not-matching
	character in first_str has a greater ASCII value than the 
	corresponding character in second_str or we can also say that 
	if the character in first_str is lexicographically after the 
	character of second_str, then zero is returned
	
	Lesser than Zero ( < 0 )
	A value less than zero is returned when the first not-matching 
	character in first_str has a lesser ASCII value than the 
	corresponding character in second_str. We can also say that 
	if the character in first_str is lexicographically before 
	the character of second_str, zero is returned.
	*/
	
    char first_str[] = "rohit";
    char second_str[] = "rohid";
    // Using strcmp()
    int res = strcmp(first_str, second_str);
    if (res==0)
        printf("Strings are equal");
    else
        printf("Strings are unequal");
    printf("\nValue returned by strcmp() is: %d" , res);
    return 0;
}
int stringcpy_cat(){
	char name[20];
	printf("Enter a number:\n");
	scanf("%[^\n]s",&name);
	strcpy(name,name);
	strcat(name," is good boy");
	printf("%s\n",name);
	return 0;
}

