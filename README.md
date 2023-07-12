# c language
This repo is made to store the c file <br>
`Fact about c programming language`<br>
1) It was developed at Bell Laboratories in 1972 by Dennis Ritchie.<br>
2) c programming language is high level programming language <br>
1) c programming language has 32 keywords <br>

`compiler`:<br>
it is a program which processes statement written in a  praticular programming language and convert them in machine understandable language,which a machine can process.<br>
`high level language` :<br>
High-level languages are programming languages that are designed to allow humans to write computer programs and interact with a computer system without having to have specific knowledge of the processor or hardware that the program will run on.<br><br>
`Advantage of high level language `<br>
1) Readability increase <br>
2) Can be modified easily <br>
3) started supporting portability (can be runned on multiple os without any change )<br>

`pracedural programming language`
1) Line by line execution <br>
2) Basic building black /procedure /Function/Method <br>
3) Flow control --> (can be change the flow of statement)<br>
    a)condition statement<br>
    b)loops<br>
    c)switch case<br>
   [nested function not allowed in c]<br><br>
`what is program?`
1) sequence of instructions are called program <br>
2) Instruction is command to perform specific task<br>

`Basic structure of c programming language `
``` shell
#include<stdio.h>
```
This a header part of c programming language this is used for printing the data `print statement` and taking input form user `scanf statement` 
``` shell
int main(){

}
```
This is a main function of c programming whatever written inside `main()` function it will execute that.

# short c program for printing hello world
```shell
#include<stdio.h>
int main(){
  printf("hello world");
  return 0;
  }
```
As this `main()` function is of void type it can not return any value.
# Tokens
Tokens are the smallest elements of a program, which are meaningful to the compiler.<br>
The C compiler breaks a program into the smallest possible units and proceeds to the various stages of the compilation,
which is called a token. C supports six types of tokens: Identifiers, Keywords, Constants, Strings, Operators and Special Symbols<br>
> token are 6 type :- <br> 
1) keywords <br>
2) Identifiers <br>
3) constants <br>
4) special symbols <br>
5) string <br>
6) operators <br>

`Q.COunt number of tokens in following statements`
```
//1) int a = 10; => 5
//2)prinf("Hello world \n"); => 5
//3)
#include <Stdio.h>
void(){
int a = 5,b=6;
printf("a=%d,b=%d,sum=%d",a,b,a+b);
}

```
