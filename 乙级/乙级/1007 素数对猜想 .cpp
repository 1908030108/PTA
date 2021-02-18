#include <bits/stdc++.h>

using namespace std;

bool isprime(int i)
{
    int j;
    int k = (int)sqrt(i);
    for(j = 2; j <= k; j++)
    {
        if(i % j == 0)
            break;
    }
    if(j > k)
        return true;
    else
        return false;

}

int main(void)
{
    int n, d, i;
    vector<int >p;
    cin >> n;
    for(i = 0; i <= n; i++)
    {
        if(isprime(i))
            p.push_back(i);
    }
    int sum = 0;
    for(int i = 0; i < p.size(); i++)
    {
       d = p[i+1] - p[i];
       if(d == 2) sum++;
    }
    cout << sum << endl;
    return 0;
}
