#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, i, j;
    double m;
    char c;
    cin>>n>>c;
    m = (int)sqrt((n+1)/2);

    //打印图形
    for (i = 1; i <= m; i++)   // m = 3
    {
        for (j = 1; j<i; j++)
            cout<<" ";
        for (j = 2 * (m - i) + 1; j >= 1; j--)
            cout<<c;
        cout<<endl;
    }
    for (i = 1; i <= m - 1; i++)  // m = 2
    {
        for (j = 1; j <= m-i-1; j++)
            cout<<" ";
        for (j = 1; j <= 2 * i + 1; j++)
            cout<<c;
        cout<<endl;
    }

    //输出多余的数据
    //cout << "m=" << m << endl;
//    if(2*m*m-1 != n)
//    {
    int r = abs(2*m*m-1-n);
    cout << r << endl;
//    }
    return 0;
}

