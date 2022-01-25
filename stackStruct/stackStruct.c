#include <stdio.h>
#include <string.h>


typedef struct employee
{
  char name[20];
  int age;
  int employeeID;
} employee;

#define EMPLOYEELIMIT 50

employee stackImplement[EMPLOYEELIMIT];
int stackTop = 0;


// Pushes struct on top of the stack
void push(employee newEmployee)
{
  // Check if they added an employee before pushing null to stack
  if (newEmployee.employeeID == -1)
    printf("\nNo employee to add\n\n");
    // check if the stack is full before adding
  else if (stackTop < EMPLOYEELIMIT)
  {
    stackImplement[stackTop++] = newEmployee;
    printf("\nPush successful\n\n");
  }
  else
    printf("\nStack is full. Must pop first\n\n");
}


// Pops the top struct off of the stack
void pop(void)
{
  // Check if the stack is empty before removing
  if (stackTop <= 0)
    printf("\nThe stack is empty\n\n");
  else
    printf("\nPopped: %s\n", stackImplement[--stackTop].name);
}


// Prints the entire stack
void printFullStack(void)
{
  int tracer = stackTop - 1;
  printf("Tracer: %d\n", tracer);
  // See if the stack is empty
  if (stackTop <= 0)
    printf("\nThe stack is empty\n\n");
  else
  {
    printf("TOP\n");
    while(tracer >= 0)
    {
      printf("\nName: %sAge: %d\nID: %d\n------------------\n",
      stackImplement[tracer].name, stackImplement[tracer].age, stackImplement[tracer].employeeID);
      tracer--;
    }
    printf("\n");
  }
}


// Prints the head of the stack
void peak(void)
{
  // See if the stack is empty or not
  if (stackTop <= 0)
    printf("\nThe stack is empty\n\n");
  else
    printf("\n\nTop of Stack:\nName: %sAge: %d\nID: %d\n\n",
    stackImplement[stackTop-1].name, stackImplement[stackTop-1].age, stackImplement[stackTop-1].employeeID);
}


// Used to display menu and receive correct function
int menu(void)
{
  int choice;
  printf("1: Add an Employee\n2: Push Employee on stack\n3: Pop Employee off stack\n4: Peak Top of Stack\n5: Print the Entire Stack\n6: Exit program\nChoice: ");
  scanf("%d", &choice);
  // Reads terminating character to use fgets in switch function
  getchar();
  return choice;
}


int main(void)
{
  // Employee struct
  employee newHire;
  newHire.employeeID = -1;

  int choice = 0;
  // Display the menu until the user input equals 6
  while(choice != 6)
  {
    choice = menu();
    switch(choice)
    {
      // Add Employee to system
      case 1:
        printf("\n\nEnter employee's name: ");
        fgets(newHire.name, 20, stdin);
        printf("Enter employee's age: ");
        scanf("%d", &newHire.age);
        printf("Enter employee's ID: ");
        scanf("%d", &newHire.employeeID);
        printf("\n\n");
        break;
      // Push struct on to top of stack
      case 2:
        push(newHire);
        break;
      // Pop the top struct off of stack
      case 3:
        pop();
        break;
      // Exit the program
      case 4:
        peak();
        break;
      case 5:
        printFullStack();
        break;
      case 6:
        printf("\nGoodbye!\n");
        break;
      default:
        printf("\n\nInvalid input\n\n");
    }
  }
}
