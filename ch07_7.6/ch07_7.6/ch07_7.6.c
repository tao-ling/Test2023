#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdarg.h>		//通过宏实现可变参数列表


/*
	计算指定数量的值的平均值
*/
float average(int n_values, ...);

int main(void) {
	float ave = average(6, 1, 2, 3, 4, 5, 67);
	printf("%f\n", ave);
	return 0;
}

float average(int n_values, ...)		//需要传入可变参数列表中的参数个数
{
	va_list var_arg;		//声明用于访问参数列表的未确定部分变量的参数列表
	int count;
	float sum = 0;
	va_start(var_arg, n_values);	//用va_start宏初始化参数列表
	for (count = 0; count < n_values; count += 1) {
		/*int i = va_arg(var_arg, int);
		printf("%d ", i);*/
		sum += va_arg(var_arg, int);	//使用va_arg宏和va_list变量来访问列表中的每一项
	}
	va_end(var_arg);	//完成功能后清理参数列表内存
	return sum / n_values;
}
