#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, sum = 0;
    cin>>n;
    while(n>1)
    {
        if(n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = 3*n + 1;
            n = n / 2;
        }
        sum++;
        if(n == 1)
        {
            break;
        }
    }
    cout << sum <<endl;
    return 0;
}
