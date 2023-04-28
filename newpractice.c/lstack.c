Write a program to implement a linked stack.
##include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <malloc.h>
struct stack
{
int data;
struct stack *next;
};
struct stack *top = NULL;
struct stack *push(struct stack *, int);
struct stack *display(struct stack *);
struct stack *pop(struct stack *);
int peek(struct stack *);
int main(int argc, char *argv[]) {
int val, option;
Step 1: IF TOP = NULL
PRINT UNDERFLOW
[END OF IF]
Step 2: SET PTR = TOP
Step 4: FREE PTR
Step 5: END
Step 3: SET TOP = TOP NEXT ->
" "
Goto Step 5
Figure 7.19 Algorithm to delete an 
element from a linked stack
Step 1: Allocate memory for the new
node and name it as NEW_NODE
Step 3: IF TOP = NULL
SET TOP =
ELSE
SET TOP =
[END OF IF]
Step 4: END
Step 2: SET NEW_NODE DATA = VAL
SET NEW_NODE NEXT = NULL
NEW_NODE
SET NEW_NODE NEXT = TOP
NEW_NODE
->
->
->
Figure 7.16 Algorithm to insert an element in a 
linked stack
226 Data Structures Using C
do
{
 printf("\n *****MAIN MENU*****");
 printf("\n 1. PUSH");
 printf("\n 2. POP");
 printf("\n 3. PEEK");
 printf("\n 4. DISPLAY");
 printf("\n 5. EXIT");
 printf("\n Enter your option: ");
 scanf("%d", &option);
 switch(option)
 {
 case 1:
 printf("\n Enter the number to be pushed on stack: ");
 scanf("%d", &val);
 top = push(top, val);
 break;
 case 2:
 top = pop(top);
 break;
 case 3:
 val = peek(top);
 if (val != -1)
 printf("\n The value at the top of stack is: %d", val);
 else
 printf("\n STACK IS EMPTY");
 break;
 case 4:
 top = display(top);
 break;
 }
}while(option != 5);
return 0;
}
struct stack *push(struct stack *top, int val)
{
struct stack *ptr;
ptr = (struct stack*)malloc(sizeof(struct stack));
ptr -> data = val;
if(top == NULL)
{
 ptr -> next = NULL;
 top = ptr;
}
else
{
 ptr -> next = top;
 top = ptr;
}
return top;
}
struct stack *display(struct stack *top)
{
struct stack *ptr;
ptr = top;
if(top == NULL)
printf("\n STACK IS EMPTY");
else
{
Stacks 227
 while(ptr != NULL)
 {
 printf("\n %d", ptr -> data);
 ptr = ptr -> next;
 }
}
return top;
}
struct stack *pop(struct stack *top)
{
struct stack *ptr;
ptr = top;
if(top == NULL)
printf("\n STACK UNDERFLOW");
else
{
 top = top -> next;
 printf("\n The value being deleted is: %d", ptr -> data);
 free(ptr);
}
return top;
}
int peek(struct stack *top)
{
if(top==NULL)
return -1;
else
return top ->data;
}