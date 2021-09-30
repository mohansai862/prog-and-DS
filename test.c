// #include <stdio.h>
// int main()
// {
// int i = 1024;
// int count = 1;
// for (; i; i >>= 1){
//     printf("GatesQuiz %d %d\n",count,i);
//     count++;
// }
// return 0;
// }
#include <stdio.h>
#include <string.h>
char *fun()
{
static char arr[1024];
return arr;
}
int main()
{
    char *str = "ravindrababus";
    strcpy(fun(), str);
    str = fun();
    strcpy(str, "gatessquiz");
    printf("%s", fun());
    return 0;
}