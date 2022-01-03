#include <stdio.h>

void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    goodmorning();
    return 0;
}

void goodmorning()
{
    printf("Good Morning Mohan \n");
    goodafternoon();
}
void goodafternoon()
{
    printf("Good Afternoon Mohan \n");
    goodnight();
}
void goodnight()
{
    printf("Good Night Mohan \n");
}
