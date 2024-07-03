#include <stdio.h>

int count(int n)
{
    if (n == 1) return 2;
    if (n == 2) return 4;
    int val[n+1];
    val[0] = 1;
    val[1] = 2;
    val[2] = 4;
    for (int i = 3; i <= n; i++)
    {
        val[i] = (val[i-1] + val[i-2] + val[i-3]) % 12345;
    }

    return val[n];
}

int main()
{
    int n;
    printf("Enter the length of the sequence n: ");
    scanf("%d", &n);
    if (n < 2 || n >= 10000)
    {
        printf("The length of the sequence must be in the range 2 <= n < 10000\n");
        return 1;
    }
    printf("Number of valid sequences: %d\n", count(n));
    return 0;
}
