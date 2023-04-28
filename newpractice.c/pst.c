//Write a program to evaluate a postfix expression.
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define MAX 100
float st[MAX];
int top=–1;
void push(float st[], float val);
float pop(float st[]);
float evaluatePostfixExp(char exp[]);
int main()
{
float val;
char exp[100];
clrscr();
printf("\n Enter any postfix expression : ");
gets(exp);
val = evaluatePostfixExp(exp);
printf("\n Value of the postfix expression = %.2f", val);
getch();
return 0;
}
float evaluatePostfixExp(char exp[])
{
int i=0;
float op1, op2, value;
while(exp[i] != '\0')
{
 if(isdigit(exp[i]))
Table 7.1  Evaluation of a postfix expression
Character Scanned Stack
9 9
3 9, 3
4 9, 3, 4
* 9, 12
8 9, 12, 8
+ 9, 20
4 9, 20, 4
/ 9, 5
– 4
238 Data Structures Using C
push(st, (float)(exp[i]–'0'));
 else
 {
 op2 = pop(st);
 op1 = pop(st);
 switch(exp[i])
 {
 case '+':
 value = op1 + op2;
break;
 case '–':
 value = op1 – op2;
break;
 case '/':
 value = op1 / op2;
break;
 case '*':
 value = op1 * op2;
break;
 case '%':
 value = (int)op1 % (int)op2;
 break;
 }
 push(st, value);
 }
 i++;
}
return(pop(st));
}
void push(float st[], float val)
{
if(top==MAX–1)
 printf("\n STACK OVERFLOW");
else
{
 top++;
 st[top]=val;
}
}
float pop(float st[])
{
float val=–1;
if(top==–1)
 printf("\n STACK UNDERFLOW");
else
{
 val=st[top];
 top––;
}
return val;
}