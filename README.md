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
`Keyword`<br>
1)keyword are the word whose meaning is already known to the compiler<br>
2)Also Known as reserved words<br>
3)All the keywords must be written in lower case letter<br>
4)There are total 32 keyword in c programming language <br>
they are :-<br>
`Datatype`<br>
void , char ,short ,int ,signed, unsigned, Float, double, long.<br>
`Flow control`<br>
if , else, do ,while ,for ,switch ,case,default,break,continue,goto.<br>
`storage`<br>
auto ,static,extern,register.<br>
`user defined<`br>
struct ,union,enum,typedef.<br>
`Other  `<br>
const,volatile,return ,sizeof.<br>
<br>
`note : c is a case sensitive language`<br>
constant :<br>
constant in c language which does not change during the execution of program constant doess not occupy any memory location in c programming language .<br>
`Type of constant:-   `<br>
1)numeric constant <br>
 a)regular constant => [3,-2,0,8... etc]<br>
 b)Floating constant => [3.14,82.081,2.11...etc]<br>
2)charactor constant 
 a)single charactor constant => 'a' <br>
 b)multiple charactor constant => "Ro706" <br>
=> `Regular constant   :- `<br>
Regular constant or Integer constant refer to sequence of series there three type of Integer constant .<br>
1)Decimal constant (%d)[0 to 9] <br>
2)Octal constant (%o) [0 to 7]<br>
3)Hexdecimal constant (%x) [0 to 9 then A,B,C,D,E,F]<br>
<br>
`How negetive number (integer) is stored at 2Ts complement of the number `<br>
1Ts complement : - changeing zero into  one and one into zero in binary number system <br>
1 0 0 0 1 0 1 0 0<br>
0 1 1 1 0 1 0 1 1<br>
2Ts complement : - changeing zero into  one and one into zero in binary number system then add one .
<br>
<br>
=>`Floating point constant  :-`<br>
It represent the number with decimal point .there are two representation for floating point constant <br>
a)decimal point representation (%f)<br>
b)scientific / exponational representation(%e or %E)<br>
<br>
=>`Single charactor constant :-`<br>
The constant a single charactor enclosed within a pair of single quote marks .Every single charactor constant has associated integer vlaue , known as ascii values .<br?
Ex=>'a','b'
<br><br>
=>`multiple charactor constant :-`<br>
multiple charactor constant or string constant is sequance of charactor enclose in double quote marks .<br>
The charactor can be letters,digits,volid spaces .special symbol etc...<br>
ex => "hello","Ro706"
