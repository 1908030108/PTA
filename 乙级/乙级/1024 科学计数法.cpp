#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s;
    getline(cin, s);
    int i = 0;
    while(s[i]!= 'E') i++;
    if(s[0] == '-') cout << s[0];
    string str = s.substr(1,i-1);
    int n = stoi(s.substr(i+1));
    if(n < 0)
    {
        cout << "0.";
        for(int i = 0; i < abs(n)-1; i++) cout << '0';
        for(int i = 0; i < str.length(); i++)
            if(str[i] != '.') cout << str[i];
    }
    else
    {	//指数为正
		if(n>=str.length() -2){	//指数数值大
			for(int i=0;i<str.length() ;i++)
				if(str[i]!='.')	cout<<str[i];
			for(int i=0;i<n-(str.length()-2) ;i++)	cout<<'0';
		}
		else{	//指数数值小
			cout<<str[0];
			int cnt=0,i;
			for(i=2,cnt;i<str.length() &&cnt<n;i++,cnt++)	cout<<str[i];
			cout<<'.';
			for(i;i<str.length() ;i++)	cout<<str[i];
		}
	}

    return 0;
}
