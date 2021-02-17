#include <bits/stdc++.h>

using namespace std;

const int M = 1e5+30;

struct STU{
    int sno;
    int dem;   //德分 democracy
    int sci;   //才分 science
    int sum;   //总分
    int clas;
}stu[M];
//结构体大小比较
bool cmp(STU a,STU b)
{
    if(a.clas != b.clas) return a.clas < b.clas;
    else if(a.sum != b.sum) return a.sum > b.sum;
    else if(a.dem != b.dem) return a.dem > b.dem;
    else return a.sno < b.sno;
}

int main(void)
{
    int n, l, h;
    cin >> n >> l >> h;
    int cur = n;
    for(int i = 0; i < n; i++)
    {
        cin >>stu[i].sno >> stu[i].dem >> stu[i].sci;
        stu[i].sum = stu[i].dem + stu[i].sci;
        if(stu[i].dem < l || stu[i].sci < l)
        {
            cur--;
            stu[i].clas = 5;
        }
        else if(stu[i].dem >= h && stu[i].sci >= h) stu[i].clas = 1;
        else if(stu[i].dem >= h && stu[i].sci < h) stu[i].clas = 2;
        else if(stu[i].dem < h && stu[i].sci < h && stu[i].dem >= stu[i].sci) stu[i].clas = 3;
        else stu[i].clas = 4;
    }
    sort(stu,stu+n,cmp);
    cout << cur << endl;
    for(int i = 0; i < cur; i++)
    {
        cout << stu[i].sno << " " << stu[i].dem << " " << stu[i].sci << endl;
    }

    return 0;
}
