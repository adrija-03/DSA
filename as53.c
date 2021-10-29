#include <stdio.h>
#define MAX 100
int getId(int M[MAX][MAX], int n)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        if (M[start][end] == 1)
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if ((i != start) && (M[start][i] == 1 || M[i][start] == 0))
            return -1;
    }

    return start;
}
int main()
{
    int n, M[MAX][MAX];
    printf("Enter Matrix Size: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    int x = getId(M, n);
    if (x == -1)
    {
        printf("No Celebrity Found");
    }
    else
    {
        printf("Celebrity found at %d", x);
    }
    return 0;
}