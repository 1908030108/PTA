#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int list[1000000];//用于保存出现的中间数字，全局变量int默认初始化为0

bool cmp(int a, int b) {
	return a > b;
}
int main()
{
	int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	//循环遍历v，把中间出现的数字加入到哈希表中
	for (int i = 0; i < n; i++) {
		//使用下标访问容器vector中的数据，穷尽中间数据并保存
		int num = v[i];
		while (num > 1) {
			if (num % 2 != 0) {
				//奇数
				num = 3 * num + 1;
			}
			num /= 2;
			//把中间数据保存
			list[num] = 1;
		}
	}
	//从大到小排序
	sort(v.begin(), v.end(),cmp);
	int flag = 0;
	for (int i = 0; i < n; i++) {
		if (list[v[i]] == 0) {
			if (flag == 1) {
				cout << " ";
			}
			cout << v[i];
			flag = 1;
		}
	}

	return 0;
}
