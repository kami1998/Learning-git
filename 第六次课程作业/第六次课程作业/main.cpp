#include "head.h"
#include <iostream>
using namespace std;
int main()
{
	int n, ans, count = 0;
	double s;
	cin >> n;
	Equation e;
	Statistics e1;
	for (int i = 0; i < n; i++)
	{
		e.generateExpresion();
		s = calculateResult(e);
		if (s != (int)s)
		{
			i--;
			continue;
		}
		e.get();
		cin >> ans;
		e1.judge(ans, (int)s);
		cout << "����" << s<<endl;
	}
	count=e1.get();
	cout << "������" << count << "����"<<","<<"�����"<<n-count<<"����";
	getchar();
	getchar();
}