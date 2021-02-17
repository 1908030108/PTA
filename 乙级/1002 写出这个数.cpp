#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    string str[15] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    long long sum = 0;
    vector<int> r;     //动态数组 yyds
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        sum = sum + s[i] - 48;
    }
    while(sum)
    {
      r.push_back(sum%10);
      sum = sum / 10;
    }
    for(int i = r.size()-1; i >= 0; i--){
       if(r[i] == 0) cout << str[0];
       else if(r[i] == 1) cout << str[1];
       else if(r[i] == 2) cout << str[2];
       else if(r[i] == 3) cout << str[3];
       else if(r[i] == 4) cout << str[4];
       else if(r[i] == 5) cout << str[5];
       else if(r[i] == 6) cout << str[6];
       else if(r[i] == 7) cout << str[7];
       else if(r[i] == 8) cout << str[8];
       else if(r[i] == 9) cout << str[9];
       if(i) cout << " ";
    }
    //100 这种考虑不到
//    if(sum % 10 != 0)
//    {
//    while(sum){
//        n = sum % 10;
//        m = m * 10 + n;
//        sum /= 10;
//    }
//    sum = m;
//    }
//
//    while(sum>=10){
//       r = sum % 10;
//       if(r == 0) cout << str[0] << " ";
//       if(r == 1) cout << str[1] << " ";
//       if(r == 2) cout << str[2] << " ";
//       if(r == 3) cout << str[3] << " ";
//       if(r == 4) cout << str[4] << " ";
//       if(r == 5) cout << str[5] << " ";
//       if(r == 6) cout << str[6] << " ";
//       if(r == 7) cout << str[7] << " ";
//       if(r == 8) cout << str[8] << " ";
//       if(r == 9) cout << str[9] << " ";
//       sum = sum / 10;
//    }
//       if(sum == 0) cout << str[0];
//       else if(sum == 1) cout << str[1];
//       else if(sum == 2) cout << str[2];
//       else if(sum == 3) cout << str[3];
//       else if(sum == 4) cout << str[4];
//       else if(sum == 5) cout << str[5];
//       else if(sum == 6) cout << str[6];
//       else if(sum == 7) cout << str[7];
//       else if(sum == 8) cout << str[8];
//       else if(sum == 9) cout << str[9];
    return 0;
}


