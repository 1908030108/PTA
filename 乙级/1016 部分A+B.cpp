#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a, b, da, db, pa, pb;
    cin >> a >> da >> b >> db;
    pa = pb = 0;
    while(a)
    {
        int r = a % 10;
        a /= 10;
        if(r == da)
            pa = pa * 10 + da;
    }
    while(b)
    {
        int r = b % 10;
        b /= 10;
        if(r == db)
            pb = pb * 10 + db;
    }
    cout << pa + pb  << endl;
    return 0;
}
