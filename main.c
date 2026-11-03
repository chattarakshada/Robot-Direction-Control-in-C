#include <stdio.h>
#include <string.h>

int main()
{
    char direction[15];

    printf("Enter Direction (FORWARD/BACKWARD/LEFT/RIGHT): ");
    scanf("%14s", direction);

    if (strcmp(direction, "FORWARD") == 0)
    {
        printf("Robot Moving Forward\n");
    }
    else if (strcmp(direction, "BACKWARD") == 0)
    {
        printf("Robot Moving Backward\n");
    }
    else if (strcmp(direction, "LEFT") == 0)
    {
        printf("Robot Turning Left\n");
    }
    else if (strcmp(direction, "RIGHT") == 0)
    {
        printf("Robot Turning Right\n");
    }
    else
    {
        printf("Invalid Direction\n");
    }

    return 0;
}
