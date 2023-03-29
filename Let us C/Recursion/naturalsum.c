#include <stdio.h>
int sum(int x)
{
    int ans;
    if (x == 1)
    {
        return 1;
    }
    else
    {
        ans = x + sum(x - 1);
    }
    return ans;
}
int main()
{
    int ans;
    ans = sum(25);
    printf("%d", ans);
}