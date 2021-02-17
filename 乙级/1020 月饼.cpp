#include <bits/stdc++.h>

using namespace std;

struct s{
     double serve;
     double buy;
     double g;
};

bool cmp(s a, s b){return a.g > b.g;}

int main(void)
{
    int n, i, d;
    double sum = 0;
    cin >> n >> d;
    s v[n+10];
    for(i = 0; i < n; i++)
        cin >> v[i].serve;
    for(i = 0; i < n; i++)
        cin >> v[i].buy;
    for(i = 0; i < n; i++)
        v[i].g = v[i].buy/v[i].serve;
    sort(v, v+n, cmp);
    for(i = 0; i < n; i++)
    {
        if(d >= v[i].serve ){
        sum += v[i].serve * v[i].g;
        }
        else{
        sum += d * v[i].g;
        }
        d = d - v[i].serve;
        if(d <= 0) break;
    }
    printf("%.2lf\n",sum);
    return 0;
}

