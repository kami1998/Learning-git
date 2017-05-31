#include <iostream>
#include <ctime>
#include "head.h"
using namespace std;
void push(char v, Operator_Struct x)
{

	x.data[x.top] = v;
	x.top++;
}
int judgelevel(char c)
{
	if (c == '*' || c == '/')
		return 2;
	else return 1;
}
char Equation::randomNumber()
{
	return rand() % 10+'0';
}
void Equation::generateExpresion()
{
	int b;
	srand(time(0));
	a[0]=randomNumber();
	b = rand() % 4;
	a[1] = trans_operation(b);
	a[2] = randomNumber();
}
char Equation::trans_operation(int b)
{
	switch (b)
	{
	case 0:return '+'; break;
	case 1:return '-'; break;
	case 2:return '*'; break;
	case 3:return '/'; break;
	}
}

void Equation::get()
{
	for (int i = 0; i<3; i++)
		cout << a[i];
	cout << "=" << endl;
}
void  Statistics::judge(int ans, int s)
{
	if (ans == s)right++;
}
int Statistics::get()
{
	return right;
}
double calculateResult(Equation &N)
{
	Num_Struct number;
	Operator_Struct ope;
	ope.top = -1; number.top = -1;
	int top_level = 0, now_level;
	int j = 0;
	char b[10] = { ' ' };
	for (int i = 0; i < strlen(N.a); i++)
	{
		if(N.a[i]=='+'||N.a[i]=='-')
		{
			now_level = 1;
			if (top_level < now_level)
			{  
				ope.data[++ope.top] = N.a[i];
				top_level = 1;
			}
			else
			{
				for (; top_level >= now_level;)
				{
					b[j] = ope.data[ope.top];ope.top--;
					top_level = judgelevel(ope.data[ope.top]);
				}
			}
		}
		if ( N.a[i] == '*' || N.a[i] == '/')
		{
			now_level = 2;
			if (top_level < now_level)
			{
				ope.data[++ope.top] = N.a[i];
				top_level = 2;
			}
			else
			{
				for (; top_level >= now_level;)
				{
					b[j] = ope.data[ope.top]; ope.top--;
					top_level = judgelevel(ope.data[ope.top]);
				}
			}
		}
			if ((N.a[i] - '0') <= 9 && (N.a[i] - '0' )>= 0)
			{
				b[j] = N.a[i];
				j++;
			}
		}//
	for (; ope.top >= 0;ope.top--)
	{
		b[j] = ope.data[ope.top];
		j++;
	}//这两部分把中缀表达式转换成后缀表达式
	//接下来是后缀表达式的计算。
	for (int i = 0; i < strlen(b); i++)//后缀表达式的计算
	{
		if ((b[i] - '0') >= 0 && (b[i] - '0') <= 9)
		{
			number.data[++number.top] = b[i] - '0';
		}
		if (b[i] == '+')
		{
			number.data[number.top - 1] = number.data[number.top - 1] + number.data[number.top];
		}
		if (b[i] == '-')
		{
			number.data[number.top - 1] = number.data[number.top - 1] - number.data[number.top];
		}
		if (b[i] == '*')
		{
			number.data[number.top - 1] = number.data[number.top - 1] * number.data[number.top]*1.0;
		}
		if (b[i] == '/')
		{
			number.data[number.top - 1] = number.data[number.top - 1] / number.data[number.top]*1.0;
		}

	}//后缀表达式的计算
	return number.data[0];
}