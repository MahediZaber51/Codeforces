
#include<stdio.h>

int main()
{
    char lines[8][8];
    int i,j,count;
    int row[8] = {1,1,1,1,1,1,1,1};
    int column[8] = {1,1,1,1,1,1,1,1};
    int every[8] = {1,1,1,1,1,1,1,1};

    count = 0;
    for (i=0; i<8; i++)
    {
        scanf("%s\n",&lines[i]);
    }
    for (i=0; i<8; i++)
    {
        for (j=0; j<8; j++)
        {
            if (lines[j][i] != 'B')
            {
                column[i] = 0;
            }
            if (lines[i][j] != 'B')
            {
                row[i] = 0;
            }
        }

    }
    for (i=0; i<8; i++)
    {
        if (column[i] && row[i] && memcmp(column, every, sizeof(column)) != 0)
        {
            if(column[i])
            {
                count++;
            }
            if(row[i])
            {
                count++;
            }
        }
        else if (column[i] || row[i])
        {
            count++;
        }

    }

    printf("%d",count);
    return 0;
}
