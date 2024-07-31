#include <stdio.h>
#include <string.h>

int main()
{
    char source[3], destination[3];
    scanf("%s", source);
    scanf("%s", destination);

    char letters[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    int letterValues[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    char steps[100][3];
    int stepCount = 0;

    int horizontal = letterValues[destination[0] - 'a'] - letterValues[source[0] - 'a'];
    int vertical = destination[1] - source[1];

    while (horizontal != 0 || vertical != 0)
    {
        if (horizontal < 0)
        {
            if (vertical < 0)
            {
                strcpy(steps[stepCount], "LD");
                horizontal += 1;
                vertical += 1;
            }
            else if (vertical > 0)
            {
                strcpy(steps[stepCount], "LU");
                horizontal += 1;
                vertical -= 1;
            }
            else
            {
                strcpy(steps[stepCount], "L");
                horizontal += 1;
            }
        }
        else if (horizontal > 0)
        {
            if (vertical < 0)
            {
                strcpy(steps[stepCount], "RD");
                horizontal -= 1;
                vertical += 1;
            }
            else if (vertical > 0)
            {
                strcpy(steps[stepCount], "RU");
                horizontal -= 1;
                vertical -= 1;
            }
            else
            {
                strcpy(steps[stepCount], "R");
                horizontal -= 1;
            }
        }
        else
        {
            if (vertical < 0)
            {
                strcpy(steps[stepCount], "D");
                vertical += 1;
            }
            else if (vertical > 0)
            {
                strcpy(steps[stepCount], "U");
                vertical -= 1;
            }
        }
        stepCount++;
    }

    printf("%d\n", stepCount);
    for (int i = 0; i < stepCount; i++)
    {
        printf("%s\n", steps[i]);
    }

    return 0;
}
