#include<stdio.h>
#include<vector>
using namespace std;
struct node1 {
	int info;
	int naddr;
};
struct node2 {
	int addr;
	int data;
	int nexta;
};

int main()
{
	int first, N, K;
	 scanf("%d%d%d", &first, &N, &K);
	node1 sss[100000];
	int num,a,b;
	while (N--)
	{
		 scanf("%d%d%d", &num, &a, &b);
		sss[num].info = a;
		sss[num].naddr = b;
	}

	int p = first;
	vector<node2>data1;
	node2 e1, ee;
	ee.addr = 0;
	ee.data=0;
	ee.nexta = 0;
	data1.push_back(ee);
	while (p != -1)
	{
		e1.addr = p;
		e1.data = sss[p].info;
		e1.nexta = sss[p].naddr;
		data1.push_back(e1);
		p = sss[p].naddr;

	}
	int n = data1.size()-1;
	vector<node2>data2;
	int count = 1;
	for (int i = 1; i <= int(n / K); i++)
	{
		for (int j =i*K; j >=count; j--)
		{
			data2.push_back(data1[j]);
		}
		count = count + K ;
	}

	if (count - 1 < n)
	{
		for (int i = count; i <=n; i++)
		{
			data2.push_back(data1[i]);
		}
	}
	for (int i = 0; i < data2.size(); i++)
	{

		if(i==data2.size()-1)
			printf("%05d %d %d\n", data2[i].addr, data2[i].data, -1);
		else
			printf("%05d %d %05d\n", data2[i].addr, data2[i].data, data2[i + 1].addr);
	}
	return 0;
}
