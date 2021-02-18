#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    string s1, s2, s3, s4;
    char weekday, hour;
    int mark = 1;
    int minute;
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    getline(cin,s4);
    int len1 = s1.length() < s2.length()? s1.length():s2.length();
    int len2 = s3.length() < s4.length()? s3.length():s4.length();
    for(int i = 0; i < len1; i++)
    {
        if(s1[i] == s2[i] && mark && s1[i] >= 'A' && s1[i] <= 'G')   //ĞÇÆÚ
        {
            weekday = s1[i];
            mark = 0;
            switch(weekday)
            {
                case 'A' : cout << "MON "; break;
                case 'B' : cout << "TUE "; break;
                case 'C' : cout << "WED "; break;
                case 'D' : cout << "THU "; break;
                case 'E' : cout << "FRI "; break;
                case 'F' : cout << "SAT "; break;
                case 'G' : cout << "SUN "; break;
            }
            continue;
        }

        if(s1[i] == s2[i] && mark == 0 && ((s1[i]>='A' && s1[i]<='N') || (s1[i] >= '0' && s1[i] <= '9')))
        {
            hour = s1[i];
            break;
        }
     }
     for(int i = 0; i < len2; i++)
     {
         if(s3[i] == s4[i] && isalpha(s3[i]))
         {
             minute = i;
             break;
         }
     }
     if(hour >= '0' && hour <= '9')
     {
        cout << '0' << hour << ':';
     }
     else
     {
    cout << hour - 'A' + 10 << ':';
     }

    printf("%02d\n", minute);

    return 0;
}
