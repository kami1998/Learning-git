#include <string.h>
class Equation    //��ʽ��
{
private:
	char a[10];//���ַ����������ɵ���ʽ
public:
	void generateExpresion();//������������ʽ
	friend double calculateResult(Equation &N);//���ڼ���
	char randomNumber();//���������
	char trans_operation(int b);//ת�������
	void get();//�����ʽ
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
	void judge(int ans, int s);//�ж��û����Ƿ���ȷ
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
