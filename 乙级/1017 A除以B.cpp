#include <bits/stdc++.h>
//#include <string>

using namespace std;

int main(void)
{
    string a;
    int b;
    cin >> a >> b;
    int tmp, r = 0, d;
    string q;
    if(a.length() == 1)
    {
        q += '0';
        r = (a[0] - '0')% b;
        cout << q << " " << r << endl;
        return 0;
    }
    else
    {
    for(int i =0; i < a.length(); i++)
    {
         tmp = r * 10 + (a[i] - '0');
         if(tmp < b)
         {
             r = tmp;
             q += to_string(0);
         }
         else
         {
             d = tmp / b;
             q += to_string(d);
             r = tmp % b;
         }
    }
    if(q[0] == '0')
    {
        q = q.substr(1);
    }
    cout << q << " " << r << endl;
    return 0;
    }
}
