#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, a, b, c, i = 1;
    cin >> n;
    a = n % 10;
    n /= 10;
    b = n % 10;
    n /= 10;
    c = n;
    while(c){
        cout << "B";
        c--;
    }
    while(b){
        cout << "S";
        b--;
    }
    while(a){
        cout << i;
        i++;
        a--;
    }
    return 0;
}
