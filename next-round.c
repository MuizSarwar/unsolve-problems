#include <stdio.h>

int main()
{
    int n, k, count = 0;
    scanf("%d %d", &n, &k);

    int num_arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num_arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if ((num_arr[i] >= num_arr[k - 1]) && (num_arr[i] > 0))
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}