#include <stdio.h>
void display(); // Function Prototype

int main()
{
    int a;
    printf("Intializing display function \n");
    display(); // Function call
    printf("Display functions finished it's work \n");
    return 0;
}

// Function Definition
void display()
{
    printf("This is display \n");
}