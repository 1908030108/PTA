#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, m, i;
    cin >> n >> m;
    m = m % n;
    int a[n];
    for(i = 0; i < n ; i++)
        cin >> a[i];
    for(i = 0; i < n-1; i++){
        cout << a[(n-m+i)%n] << " ";
    }
    cout << a[(n-m+i)%n] << endl;
    return 0;
}
