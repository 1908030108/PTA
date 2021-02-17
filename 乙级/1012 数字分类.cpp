#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, a1, a2, a3, a4, a5;
    int v[10000];
      cin >> n;
     for(int i = 0; i < n; i++)
        cin >> v[i];

     //sort(v.begin(),v.end());

     a1 = 0;
     a2 = 0;
     a3 = 0;
     a4 = 0;
     a5 = 0;
     int t = 0;
     int m = 0;
     for(int i = 0; i < n; i++)
     {
         if(v[i]% 5 == 0 && v[i] % 2 == 0) a1 += v[i];
         else if(v[i]% 5 == 1){
            if(t % 2 == 0)
                a2 = a2 + v[i];
            else
                a2 = a2 - v[i];
            t++;
         }
         else if(v[i]% 5 == 2) a3 += 1;
         else if(v[i]%5 == 3){
            a4 += v[i];
            m += 1;
         }
         else if(v[i]%5 == 4){
           if(v[i] > a5)
             a5 = v[i];
         }

     }
    if(a1 == 0)
        cout << "N ";
    else
        cout << a1 << " ";
    if(a2 == 0 && t == 0)
        cout << "N ";
    else
        cout << a2 << " ";
    if(a3 == 0)
        cout << "N ";
    else
        cout << a3 << " ";
    if(a4 == 0)
        printf("N ");
    else
        printf("%.1f ", 1.0 * a4 / m);
    if(a5 == 0)
        cout << "N";
    else
        cout << a5;
     cout << "\n";
    return 0;
}
