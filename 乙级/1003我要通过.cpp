#include <bits/stdc++.h>

using namespace std;

//ҪPǰ���A�ĸ�������PT֮���A�ĸ����Ļ�����T�����A�ĸ������ַ�����ֻ���е���P��T��ΪYES

bool isRight(string s)
{
   int flag_p = 0, flag_t = 0;
   int count_p = 0, count_t = 0;
   int other = 0;
   for(int i = 0; i <s.length();i++)
   {
       if(s[i] == 'P'){
           flag_p = i;    //��¼p��λ��
           count_p++;     //p�ĸ���
       }
       else if(s[i]== 'T'){
          flag_t = i;    //��¼t��λ��
           count_t++;     //t�ĸ���
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
