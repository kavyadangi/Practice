#include <stdio.h>
#include <conio.h>
#include <string.h>
int stk[10];
int top=–1;
int pop();
void push(int);
int main()
{
char prefix[10];
int len, val, i, opr1, opr2, res;
clrscr();
printf("\n Enter the prefix expression : ");
gets(prefix);
len = strlen(prefix);
       for(i=len–1;i>=0;i––)
 {
switch(get_type(prefix[i]))
{
case 0:
val = prefix[i] – '0';
 push(val);
 break;
 case 1:
 opr1 = pop();
 opr2 = pop();
switch(prefix[i])
 {
 case '+': 
 res = opr1 + opr2;
 break;
 case '–': 
 res = opr1 – opr2;
 break;
 case '*': 
 res = opr1 * opr2;
 break;
 case '/': 
 res = opr1 / opr2;
 break;
 }
 push(res);
 }
 }
printf("\n RESULT = %d", stk[0]);
 getche();
return 0;
 }
 void push(int val)
 {
 stk[++top] = val;
/*Figure 7.26  Algorithm for evaluation of a prefix
expression
Character scanned Operand stack
12 12
4 12, 4
/ 3 
8 3, 8
* 24
7 24, 7
2 24, 7, 2
– 24, 5
+ 29
Stacks 243*/
}
int pop()
{
return(stk[top––]);
}
int get_type(char c)
{
if(c == '+' || c == '–' || c == '*' || c == '/')
 return 1;
else return 0;
}
Outpu