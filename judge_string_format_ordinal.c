#include <stdio.h>

int main()
{
    int number;
    char name[31], result[40];

    scanf("%d %s", &number, name);

    switch (number)
    {
    case 1:
        sprintf(result, "%dst %s", number, name);
        break;
    case 2:
        sprintf(result, "%dnd %s", number, name);
        break;
    case 3:
        sprintf(result, "%drd %s", number, name);
        break;
    default:
        sprintf(result, "%dth %s", number, name);
        break;
    }
    /* 
    if (number == 1)
    {
        sprintf(result, "%dst %s", number, name);
    }
    else if (number == 2)
    {
        sprintf(result, "%dnd %s", number, name);
    }
    else if (number == 3)
    {
        sprintf(result, "%drd %s", number, name);
    }
    else
    {
        sprintf(result, "%dth %s", number, name);
    }
     */
    printf("%s\n", result);

    return 0;
}