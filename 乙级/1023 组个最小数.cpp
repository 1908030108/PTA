#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int a[10];
    int i;
    for(i = 0; i < 10; i++)
        cin>>a[i];
    for(i = 0; i < 10; i++){
        if(a[i]!=0 && i != 0){
            cout << i;
            a[i]--;
            break;
        }
    }
    for(i = 0; i < 10; i++)
    {
        if(a[i]!=0){
        while(a[i] != 0){
            cout << i;
            a[i]--;
        }
      }
    }
    return 0;
}
