3. Write a program to implement a circular queue.
#include <stdio.h>
#include <conio.h>
#define MAX 10
int queue[MAX];
int front=–1, rear=–1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);
int main()
{
int option, val;
clrscr();
do
{
 printf("\n ***** MAIN MENU *****");
 printf("\n 1. Insert an element");
 printf("\n 2. Delete an element");
 printf("\n 3. Peek");
 printf("\n 4. Display the queue");
 printf("\n 5. EXIT");
 printf("\n Enter your option : ");
 scanf("%d", &option);
switch(option)
 {
 case 1:
 insert();
break;
 case 2:
 val = delete_element();
if(val!=–1)
FRONT = REAR = –1
1 2 3 4 5 6 7 9 8
Figure 8.20 Empty queue
1 2 3 4 5 6 7 FRONT =
REAR = 9
8
Delete this element and set REAR = FRONT=-1
81
Figure 8.21 Queue with a single element
1 2 3 4 6 7 8 FRONT = 9
Delete this element and set FRONT=0
72 63 9 18 27 39 81
rear=5
Figure 8.22 Queue where front = MAX–1 before deletion
Step 1: IF FRONT=-1
Write UNDERFLOW
Goto Step 4
[END of IF]
Step 2: SET VAL = QUEUE[FRONT]
Step 3: IF FRONT = REAR
SET FRONT = REAR=-1
ELSE
IF FRONT = MAX -1
SET FRONT =
ELSE
SET FRONT = FRONT+1
[END of IF]
[END OF IF]
Step 4: EXIT
" "
Figure 8.23 Algorithm to delete an element from a 
circular queue
Queues 263
 printf("\n The number deleted is : %d", val);
 break;
 case 3:
 val = peek();
if(val!=–1)
printf("\n The first value in queue is : %d", val);
 break;
 case 4:
 display();
break;
 }
}while(option!=5);
getch();
return 0;
}
void insert()
{
int num;
printf("\n Enter the number to be inserted in the queue : ");
scanf("%d", &num);
if(front==0 && rear==MAX–1)
 printf("\n OVERFLOW");
else if(front==–1 && rear==–1)
{
front=rear=0;
 queue[rear]=num;
}
else if(rear==MAX–1 && front!=0)
{
rear=0;
 queue[rear]=num;
}
else
{
 rear++;
 queue[rear]=num;
}
}
int delete_element()
{
int val;
if(front==–1 && rear==–1)
 {
 printf("\n UNDERFLOW");
 return –1;
 }
val = queue[front];
if(front==rear)
 front=rear=–1;
else
{
 if(front==MAX–1)
front=0;
 else
 front++;
}
return val;
}
int peek()
{
if(front==–1 && rear==–1)
{
 printf("\n QUEUE IS EMPTY");
 return –1;
264 Data Structures Using C
}
else
{
 return queue[front];
}
}
void display()
{
int i;
printf("\n");
if (front ==–1 && rear= =–1)
 printf ("\n QUEUE IS EMPTY");
else
{
 if(front<rear)
 {
 for(i=front;i<=rear;i++)
 printf("\t %d", queue[i]);
 }
 else
 {
 for(i=front;i<MAX;i++)
 printf("\t %d", queue[i]);
for(i=0;i<=rear;i++)
 printf("\t %d", queue[i]);
 }
}
}
Output
***** MAIN MENU *****
1. Insert an element
2. Delete an element
3. Peek
4. Display the queue
5. EXIT
Enter your option : 1
Enter the number to be inserted in the queue : 25
Enter your option : 2
The number deleted is : 25
Enter your option : 3
QUEUE IS EMPTY
Enter your option : 5