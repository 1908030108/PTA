#include <bits/stdc++.h>

using namespace std;

bool isprime(int i)
{
    int k = (int )sqrt(i);
    int j;
    for(j = 2; j <= k; j++)
    {
        if(i % j == 0) break;
    }
    if(j > k) return true;
    else return false;
}

int main(void)
{
    int m, n, i = 2;
    int p[10005], q[10005];
    cin>> m >> n;
    int sum = 0;
    int cur = 0;
    while(sum < n)
    {
        if(isprime(i))
        {
            sum++;       //记录现在是第几个素数
            if(sum >= m)
            {
                cout << i;
                cur++;    //count用来记录已经输出多少个素数
                if(cur % 10 == 0)
                    cout << "\n";
                else if(sum != n)
                    cout << " ";
            }
        }
        i++;
    }
    return 0;
}
