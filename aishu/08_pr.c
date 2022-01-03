#include <stdio.h>
int main()
{
    int angle1, angle2, angle3;

    printf("Input two angles of triangle separated by comma : \n");
    scanf("%d %d", &angle1, &angle2);

    angle3 = 180 - (angle1 + angle2);

    printf("Third angle of the triangle :  %d\n", angle3);

    return 0;
}
