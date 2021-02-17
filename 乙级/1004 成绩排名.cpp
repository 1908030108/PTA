#include <bits/stdc++.h>

using namespace std;

struct student{
     string name;
     string sno;
     int grade;
};

bool cmp(student a, student b){return a.grade>b.grade;}

int main(void)
{
    int n;
    vector<student>v;
    cin>> n;
    for(int i = 0; i < n; i++)
    {
        string name, sno;
        int grade;
        cin >> name >> sno >> grade;
        student t;
        t.name = name;
        t.sno = sno;
        t.grade = grade;
        v.push_back(t);
    }
    sort(v.begin(),v.end(),cmp);
    cout << v[0].name<<" "<<v[0].sno<<endl;
    cout << v[n-1].name<<" "<< v[n-1].sno << endl;
    return 0;
}
