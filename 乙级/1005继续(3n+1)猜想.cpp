#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int list[1000000];//���ڱ�����ֵ��м����֣�ȫ�ֱ���intĬ�ϳ�ʼ��Ϊ0

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
	//ѭ������v�����м���ֵ����ּ��뵽��ϣ����
	for (int i = 0; i < n; i++) {
		//ʹ���±��������vector�е����ݣ���м����ݲ�����
		int num = v[i];
		while (num > 1) {
			if (num % 2 != 0) {
				//����
				num = 3 * num + 1;
			}
			num /= 2;
			//���м����ݱ���
			list[num] = 1;
		}
	}
	//�Ӵ�С����
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
