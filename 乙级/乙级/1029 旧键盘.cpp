#include<iostream>
#include<set>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    set<char> s1, s2;//������������s1,s2���ڴ洢sen1��sen2�г��ֹ����ַ�
    string sen1, sen2;//���������ַ���sen1��sen2
    vector<int> number;
    cin >> sen1 >> sen2;//�����ַ���

    char temp;
    for (int i = 0; i < sen1.size(); i++)//��sen1�е�ÿһ���ַ����뼯��s1��
    {
        temp = sen1[i];
        if (temp >= 'a'&&temp <= 'z')temp += 'A' - 'a';//�����Сд��ĸ��ת��Ϊ��д��ĸ
        s1.insert(temp);
    }
    for (int i = 0; i < sen2.size(); i++)//ͬ�Ͻ�sen1�е�ÿһ���ַ����뼯��s1��
    {
        temp = sen2[i];
        if (temp >= 'a'&&temp <= 'z')temp += 'A' - 'a';
        s2.insert(temp);
    }

//������������������s2�����㣬���Ա�s2,s1�����У������ͬ��ɾ��s1�е��ַ��������������ľ���������ļ�
    set<char>::iterator it,p;
    for (it = s2.begin(); it != s2.end(); it++)
    {
        for (p = s1.begin(); p != s1.end(); p++)
        {
            if (*it == *p)
            {
                s1.erase(p);
                break;
            }
        }
    }
//��ʵ�������Ѿ��ҳ���������ļ���������s1�У���������set���������ԣ���Щ�ַ��������Ѿ��ź���˳����˱����ҵ�ԭ���Ĳ���˳��

    for (int i = 0; i < sen1.size(); i++)//���Ƚ�sen1�����е�Сд��ĸת��Ϊ��д��ĸ
    {
        if (sen1[i] >= 'a'&&sen1[i] <= 'z')sen1[i] += 'A' - 'a';
    }

  int tep;
    for (it = s1.begin(); it != s1.end(); it++)//��s1��ʣ�µ��ַ�һ������sen1�в�����˳��ʹ��find������������Ŵ���һ������number��
    {
        tep = sen1.find(*it);
        number.push_back(tep);
    }
  //��������򣬴�С����
    sort(number.begin(), number.end());
    for (int i = 0; i < number.size(); i++)//��������Щ��Ŵ�����ַ�
    {
        cout << sen1[number[i]];
    }
    return 0;
}
