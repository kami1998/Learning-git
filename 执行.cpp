#include "count.h" 
#include <iostream>
using namespace std;
int main()
{
double r,s;
cin>>"请输入圆的半径：">>r;//输入圆的半径
s=count(r);//计算圆面积
cout<<"圆的面积为："<<s<<endl;//输出圆面积
system("pause");
getchar();
getchar();
}
