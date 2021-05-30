#include<stdio.h>
int main (void)
{
	float weight;/*  你的体重*/
	float value;/* 相等重量的白金价值*/
	printf(" Are you worth your weight in platoinum?\n");
	printf("Let's cheek it out .\n");
	printf("Please enter your weight in pouynds; ");
	/*  获取用户数据的输入*/
	scanf("%f",&weight);
	/* 假设 白金价格是每蛊丝 1700*/
	/* 14.5833 用于吧英镑常用衡蛊丝转换为仅衡蚕丝*/
	 value=1700.0*weight*14.5833;
	 printf("Your weight in platinum id worth $%.2f.\n",value);
	 printf("You are easily worth that! platinum princes drop,\n"); 	
	 printf(" eat  more to main tain your value.\n");
	 return 0;
 } 
 /* 这个用到了 float 数据类型   还有 scanf(); 函数的运用*/  
