#include <string.h>
class Equation    //算式类
{
private:
	char a[10];//用字符数组存放生成的算式
public:
	void generateExpresion();//用于生成运算式
	friend double calculateResult(Equation &N);//用于计算
	char randomNumber();//生成随机数
	char trans_operation(int b);//转换运算符
	void get();//输出算式
	int lenth()
	{
		return strlen(a);
	}
	Equation()
	{
		for (int i=0; i < 10; i++)
			a[i] = '\0'; 
	}
};
class Statistics
{
private:
	int right;
public:
	void judge(int ans, int s);//判断用户答案是否正确
	int get();
	Statistics()
	{
		right = 0;
	}
};
struct Num_Struct
{
	double data[10];
	 int top;
};
struct Operator_Struct
{
	char data[10];
	int top;
};
