#include <bits/stdc++.h>

using namespace std;

int main(void)
{
      string n;
      map<char, int>a;
      getline(cin, n);
      for(int i = 0; i < n.size(); i++)
          a[n[i]]++;
      for(int i = 0;i < 10; i++)
      {
          if(a['0'+i] != 0)
            cout << (i) << ":" << a['0'+i] << endl;
      }
    return 0;
}
