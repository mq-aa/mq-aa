#include<stdio.h>
int main (void)
{
	float weight;/*  �������*/
	float value;/* ��������İ׽��ֵ*/
	printf(" Are you worth your weight in platoinum?\n");
	printf("Let's cheek it out .\n");
	printf("Please enter your weight in pouynds; ");
	/*  ��ȡ�û����ݵ�����*/
	scanf("%f",&weight);
	/* ���� �׽�۸���ÿ��˿ 1700*/
	/* 14.5833 ���ڰ�Ӣ�����ú��˿ת��Ϊ�����˿*/
	 value=1700.0*weight*14.5833;
	 printf("Your weight in platinum id worth $%.2f.\n",value);
	 printf("You are easily worth that! platinum princes drop,\n"); 	
	 printf(" eat  more to main tain your value.\n");
	 return 0;
 } 
 /* ����õ��� float ��������   ���� scanf(); ����������*/  
