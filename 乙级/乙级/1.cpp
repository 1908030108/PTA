//1-23
#include <iostream>
using namespace std;

int main(){
	int a[10]={0},i,f;
	for(i=0;i<10;i++)	cin>>a[i];
	for(i=0;i<10;i++){//输出第一个数
		if(a[i]!=0&&i!=0){
			cout<<i;
			a[i]--;
			break;
		}
	}
	for(i=0;i<10;i++){
		if(a[i]!=0){
			while(a[i]!=0){
				cout<<i;
				a[i]--;
			}
		}
	}
	return 0;
}
