class Equation    //算式类
{
private:
	char a[10];//用字符数组存放生成的算式
public:
	void generateExpresion();//用于生成运算式
	friend int calculateResult(Equation &);//用于计算
	int randomOperation();//生成随机运算符
	int randomNumber();//生成随机数
	char trans_operation();//转换运算符
	void get();//输出算式
};
int calculateResult(Equation &)
{
	
}
class Statistics
{
private:
	int right;
public:
	void judge(int ans, int s);//判断用户答案是否正确
	int get();
};
void print(int c)//输出统计结果
{

}