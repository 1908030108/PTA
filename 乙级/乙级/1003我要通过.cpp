#include <bits/stdc++.h>

using namespace std;

//要P前面的A的个数乘以PT之间的A的个数的积等于T后面的A的个数且字符串中只含有单个P和T就为YES

bool isRight(string s)
{
   int flag_p = 0, flag_t = 0;
   int count_p = 0, count_t = 0;
   int other = 0;
   for(int i = 0; i <s.length();i++)
   {
       if(s[i] == 'P'){
           flag_p = i;    //记录p的位置
           count_p++;     //p的个数
       }
       else if(s[i]== 'T'){
          flag_t = i;    //记录t的位置
           count_t++;     //t的个数
       }
       else if(s[i] != 'A')
        other++;
   }
   if(count_p!=1 || count_t!=1 || other || (flag_t - flag_p <=1))
     return false;
   else if(flag_p * (flag_t-flag_p-1) == s.length()- flag_t - 1)
     return true;
//   else
//     return false;

}

int main(void)
{
    int n;
    string s;
    cin>>n;
    getchar();
    for(int i = 0; i < n; i++)
    {
        getline(cin, s);
        if(isRight(s))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
