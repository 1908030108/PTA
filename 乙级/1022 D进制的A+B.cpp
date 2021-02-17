#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int  d;
    long long a, b, sum;
    int i;
    cin >> a >> b;
    cin >> d;
    sum = a + b;
    vector<int> r;
    if(sum == 0){
        cout << 0 << endl;
        return 0;
    }
    while(sum)
    {
        r.push_back(sum % d);
        sum = sum / d;
    }
    for(i = r.size()-1; i >= 0; i--)
        cout << r[i];
    cout <<endl;
    return 0;
}
