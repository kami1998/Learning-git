#include "head.h"
#include <iostream>
using namespace std;
int main()
{
	int n,s,ans,count=0;
	cin >> n;
	Equation e;
	Statistics e1;
	for (int i = 0; i < n; i++)
	{
		e.generateExpresion();
		s =calculateResult(e);
		e.get();
		cin >> ans;
		e1.judge(ans,s);
		
	}
	count=e1.get();
	print(count);
	
	return 0;

}