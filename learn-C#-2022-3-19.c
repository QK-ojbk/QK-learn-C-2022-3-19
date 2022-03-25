//1.scanf函数的使用；常变量的含义；标识符常量；枚举常量
#define _CRT_SECURE_NO_WARNINGS 1//直接使用scanf时会出现警告，使用该定义表示让该警告不要出现
//上述定义加在源文件第一行
#include<stdio.h>
int main()
{
	int num1=0;
	int num2=0;
	int sum=0;
	scanf("%d%d",&num1,&num2);
	//scanf_s("%d%d",&num1,&num2);
	//scanf是C语言提供的，scanf_s不是标准的C语言提供的，VS编译器提供的
	//使用scanf_s也只有VS编译器能识别出来，此时不具有跨平台性、可移植性
	//scanf、strcpy、strlen、strcat等传统意义上是不安全的
	sum=num1+num2;
	printf("sum=%d\n",sum);
	return 0;
}
//1：1,2,3,4等都是字面常量
//2：const修饰的常变量：在变量名前加const,则该变量赋值为常数不变
//int main()
//{
//		int n=10;
//		int arr[n]={10}；该程序不可运行，应为数组[]里边只能放入一个常量（表达式），而n是一个变量
//		在int n前面加入const常变量修饰依旧不可以，是因为n此时只有常量属性，但还是变量
//		return 0；
//}
//3：#define定义的标识符常量
//#define MAX 10  ——意思MAX是一个值为10的常量
//int main()
//{
//	int arr[MAX]={0};
//	printf("%d\n",MAX)
//	return 0;此程序可以运行，说明MAX是常量
//}
//4:枚举常量,枚举就是一一列举。比如性别，三元色（红绿蓝）、性别（男、女）、星期（七天，1234567）
//枚举关键字：enum  
//例如列举性别：
//enum Sex
//{
//	male,female
//};   以上就是枚举常量的定义
//int main()
//{
//	enum Sex s=female;
//	return 0;
//}

//2.枚举常量的使用列举
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
enum Color
{
	RED,
	YELLOW,
	BLUE
};
int main()
{
	enum Color color=BLUE;
	return 0;
}*/

//3.单引号、双引号；字符串
/*#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr1[]="abc";//用char类型的数组arr1来存字符串，"abc"为字符串
	//"abc"字符串中还隐藏包含一个'\0'（字符串的结束标志）,该'\0'的值是0
	char arr2[]={'a','b','c',0};//单引号''与单个字母组合成为字符;
	//在
	printf("%s\n",arr1);// %s--意思是打印字符串
	printf("%s\n",arr2);
	return 0;
}*/



