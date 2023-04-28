1. Write a program to implement a linear queue.
##include <stdio.h>
#include <conio.h>
0 1 2 3 4 5 6 7 8 9
12 9 7 18 14 36
Figure 8.1 Queue
0 1 2 3 6 4 5 7 8 9
12 9 7 18 14 36 45
Figure 8.2 Queue after insertion of a new element
0 1 2 3 6 4 5 7 8 9
9 7 18 14 36 45
Figure 8.3 Queue after deletion of an element
Step 1: IF REAR = MAX-1
Write OVERFLOW
Goto step 4
[END OF IF]
Step 2: IF FRONT=-1 and REAR=-1
SET FRONT = REAR =
ELSE
SET REAR = REAR+1
[END OF IF]
Step 3: SET QUEUE[REAR] = NUM
Step 4: EXIT
Figure 8.4 Algorithm to insert an element in 
a queue
Step 1: IF FRONT = -1 OR FRONT > REAR
Write UNDERFLOW
ELSE
SET FRONT = FRONT+1
[END OF IF]
Step 2: EXIT
SET VAL = QUEUE[FRONT]
Figure 8.5 Algorithm to delete an element from 
a queue
Queues 255
#define MAX 10 // Changing this value will change length of array 
int queue[MAX];
int front = -1, rear = -1;
void insert(void);
int delete_element(void);
int peek(void);
void display(void);
int main()
{
int option, val;
do
{
printf(“\n\n ***** MAIN MENU *****”);
printf(“\n 1. Insert an element”);
printf(“\n 2. Delete an element”);
printf(“\n 3. Peek”);
printf(“\n 4. Display the queue”);
printf(“\n 5. EXIT”);
printf(“\n Enter your option : “);
scanf(“%d”, &option);
switch(option)
 {
case 1:
 insert();
break;
case 2:
val = delete_element();
if (val != -1)
printf(“\n The number deleted is : %d”, val);
break;
case 3:
val = peek();
if (val != -1)
printf(“\n The first value in queue is : %d”, val);
break;
case 4:
display();
break;
 }
}while(option != 5);
getch();
return 0;
}
void insert()
{
int num;
printf(“\n Enter the number to be inserted in the queue : “);
scanf(“%d”, &num);
if(rear == MAX-1)
printf(“\n OVERFLOW”);
else if(front == -1 && rear == -1)
front = rear = 0;
else
rear++;
queue[rear] = num;
}
int delete_element()
{
int val;
256 Data Structures Using C
if(front == -1 || front>rear)
{
printf(“\n UNDERFLOW”);
return -1;
}
else
{
val = queue[front];
front++;
if(front > rear)
front = rear = -1;
return val;
}
}
int peek()
{
if(front==-1 || front>rear)
{
printf(“\n QUEUE IS EMPTY”);
return -1;
}
else
{
return queue[front];
}
}
void display()
{
int i;
printf(“\n”);
if(front == -1 || front > rear)
printf(“\n QUEUE IS EMPTY”);
else
{
for(i = front;i <= rear;i++)
printf(“\t %d”, queue[i]);
}
}
/*Output
***** MAIN MENU *****"
1. Insert an element
2. Delete an element
3. Peek
4. Display the queue
5. EXIT
Enter your option : 1
Enter the number to be inserted in the queue : 50*/