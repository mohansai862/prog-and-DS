#include <stdio.h>

// void wishes();
void goodmorning();
void goodafternoon();
void goodnight();

int main()
{
    //wishes();  ---> To run the program in a single call.
    goodmorning();   // To run the program
    goodafternoon(); //     in
    goodnight();     // different calls
    return 0;
}

// void wishes()
// {
//     printf("Good Morning Mohan \n");
//     printf("Good Afternoon Mohan \n");
//     printf("Good Evening Mohan \n");
// }
void goodmorning()
{
    printf("Good Morning Mohan \n");
}
void goodafternoon()
{
    printf("Good Afternoon Mohan \n");
}
void goodnight()
{
    printf("Good Night Mohan \n");
}
