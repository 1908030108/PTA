#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

void to_shuzu(int n, int num[])
{
    for(int i = 0;i < 4; i++)
    {
        num[i] = i % 10;
        n /= 10;
    }
}

int to_number(int num[])
{
    int sum = 0;
    for(int i = 0; i < 4; i++)
        sum = 10 * sum + num[i];
    return sum;
}

int main(void)
{
    int n, maxn, minn;
    int num[5];
    cin >> n;
    while(1)
    {
        to_shuzu(n, num);
        sort(num, num+4);
        minn = to_number(num);
        sort(num, num+4, cmp);
        maxn = to_number(num);
        n = maxn - minn;
        printf("%04d - %04d = %04d", maxn, minn, n);
        if(n == 0 || n == 6174)
          break;
    }
    return 0;
}
