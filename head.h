class Equation    //��ʽ��
{
private:
	char a[10];//���ַ����������ɵ���ʽ
public:
	void generateExpresion();//������������ʽ
	friend int calculateResult(Equation &);//���ڼ���
	int randomOperation();//������������
	int randomNumber();//���������
	char trans_operation();//ת�������
	void get();//�����ʽ
};
int calculateResult(Equation &)
{
	
}
class Statistics
{
private:
	int right;
public:
	void judge(int ans, int s);//�ж��û����Ƿ���ȷ
	int get();
};
void print(int c)//���ͳ�ƽ��
{

}