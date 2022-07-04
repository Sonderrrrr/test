#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include "game.h"

//��ŵ˹����
//������̨��


void menu ()
{
	printf("**************************\n");
	printf("****  1.play   0.exit ****\n");
	printf("**************************\n");
}

void game ()
{
	char ret = 0 ;
	char board[ROW][COL]={0};
	InitBoard(board , ROW , COL);
	DisplayBoard(board, ROW , COL);
	while (1)
	{
		PlayerMove(board , ROW, COL);
		DisplayBoard(board, ROW , COL);
		ret = IsWin(board , ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board , ROW , COL); 
		DisplayBoard(board, ROW , COL);
		ret = IsWin(board , ROW, COL);
		if (ret != 'C')
		{
			break;
		}		
	}
	if (ret=='*')
	{
		printf ("���Ӯ\n");
	}
	else if (ret =='#')
	{
		printf("����Ӯ\n");
	}
	else if (ret=='Q')
	{
		printf("ƽ��\n");
	}
}


void test ()
{
	int input = 0 ;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ�� ");
		scanf("%d",&input);
		switch(input)
		{
			case 1 :
				printf("������\n");
				game();
				break;
			case 0 :
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ�� \n");
				break;
		}
	}while (input);
}




int main ()
{
	test();
	return 0 ;
}




//void change (char *d)
//{
//	*d='H';	
//	d[1]='E';
//	*(d+2)='L';
//
//
//}
//int main()
//{
//	char c [10]="hello";
//	change (c);
//	printf("%s\n",c);
//
//}
//





//int main ()
//{
//	short s = 0 ; 
//	int a = 10 ;
//	printf ("%d\n",sizeof (s= a+5));	
//	printf("%d\n",s);
// return 0 ;
//}






//
//int main ()  //��������ʱ���� ���������� ���
//{
//	int a = 3 ; 
//	int b = 5 ; 
//	printf ("ԭ����\n%d\n%d\n",a,b);
//	a = a^b ;
//	b = a^b ;
//	a = a^b ;
//	printf ("������\n%d\n%d\n",a,b);
//	return 0 ;
//}






//void bubble_sort(int arr[],int sz)
//{
//	int i = 0 ;
//	int j = 0 ;
//	for (i=0;i<sz-1;i++)
//	{
//		int flag = 1 ;		
//		for (j=0;j<sz-1-i;j++)
//			if (arr[j]>arr[j+1])
//			{
//				int tmp = arr[j+1];
//				arr[j+1]=arr[j];
//				arr[j]=tmp;
//				flag=0;
//			}			
//	if (flag==1)
//		break;
//	}
//}
//
//int main ()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof (arr)/sizeof (arr[0]);
//	int i = 0;
//	bubble_sort(arr,sz);
//	for (i=0;i<sz;i++)
//		printf("%d ",arr[i]);
//	return 0;
//}

//int Fib(int n )
//{
//	int a = 1 ;
//	int b = 1 ;
//	int c = 1 ;
//	while(n>2)
//	{
//		c=a+b;
//		a=b;
//		b=c;
//		n--;
//	}
//	return c ;
//}
//
//int main ()
//{
//	 int n = 0 ;
//	 int ret = 0 ;
//	 scanf ("%d",&n);
//	 ret = Fib(n);
//	 printf("ret = %d\n",ret);
//	 return 0 ; 
//return 0;
//}


//int binary_search(int arr[],int k,int sz )
//{
//	int right =sz - 1 ;
//	int left = 0 ;
//	while (left<=right)
//	{	
//		int mid =(left + right)/2;
//		if (arr[mid]<k)
//			left=mid +1;
//		else if (arr[mid] >k )
//			right = mid -1 ;
//		else 
//			return mid;
//	}	
//	return -1;
//}
//
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//
//	int k = 7;
//	int sz= sizeof (arr)/ sizeof (arr[0]);
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
//	}
//	return 0;
//}
//

//int isprime (int n)
//{
//	int a = 1;
//	for (a=2;a<=n/2;a++)
//	{
//		if (n%a==0)
//			return 0;
//	}
//	return 1;
//}
//
//int main ()
//{
//	int i =0;
//	for (i=1;i<=200;i++)
//	{
//	if (isprime (i)==1)
//		printf("%d ",i);	
//	}
//	return 0;
//}


//int max (int a ,int b)
//{
//	if (a>b)
//		return a ;
//	else
//		return  b;
//}

//int main ()
//{
//	char inp[20] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ�����һ�����ڹرգ����롰�Ƶ�����ȡ��O(��_��)O~\n���룺");
//	scanf ("%s",inp);
//	if (strcmp(inp,"�Ƶ�")==  0)
//		system("shutdown -a" );	
//	else 
//		goto again;
//return 0;
//}

//void menu()
//{
//	printf("\n################################\n");
//	printf("####   1.play     0.exit  ######\n");
//	printf("################################\n");
//}
//
//void game ()
//{
//	int ret = 0 ;
//	int i = 0 ;
//	int guess = 0 ;
//	ret = rand()%100+1;
//	for (i=1;i<=6;i++)
//	{			
//			printf("������\n");		
//			printf ("��ʼ��:");
//			scanf ("%d",&guess);
//			if (guess < ret)
//				printf("��С��\n");
//			else if (guess>ret)
//				printf("�´���\n");
//			else if (guess = ret)
//			{
//			printf("�¶���\n");
//			break;
//			}
//	}
//	if (i=6)
//		printf("����������");
//}
//
//int main ()
//{
//	int input= 0 ; 
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf ("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0 :
//			printf("צ��\n");
//			break;
//		default:
//			printf("�������\n");		
//		}	 	
//	}while (input);
//
//		
//return 0;
//}


//void menu()
//{
//	printf("################################\n");
//	printf("####   1.play     0.exit  ######\n");
//	printf("################################\n");
//}
//
//void game ()
//{
//	int ret = 0 ;
//	int guess = 0 ;
//	ret = rand()%100+1;
//	while(1)
//	{	
//		printf("������\n");		
//		printf ("��ʼ��:");
//		scanf ("%d",&guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess>ret)
//			printf("�´���\n");
//		else if (guess = ret)
//		{
//		printf("�¶���\n");
//		break;
//		}
//	}
//}
//
//int main ()
//{
//	int input= 0 ; 
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf ("%d",&input);
//		switch(input)
//		{
//		case 1:
//			game();
//			break;
//		case 0 :
//			printf("צ��\n");
//			break;
//		default:
//			printf("�������\n");		
//		}	 	
//	}while (input);
//
//		
//return 0;
//}

//int main ()
//{
//	int i = 0 ;
//	int j = 0 ;
//	int a = 0 ;
//	for (i=1;i<=9;i++)
//	{
//		for (j=1;j<=i;j++)
//		{
//			a= i * j ;
//			printf("%d*%d=%-2d ",i,j,a);		
//		}
//		printf("\n");	
//	}
//return 0 ;
//}


//int main()//��ʮ�������е����ֵ
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0 ;
//	int max = arr[0] ;
//	int sz = 0;
//	sz= sizeof (arr)/sizeof (arr[0]);
//	for (i=1;i<=sz;i++)
//	{
//		if (max <arr[i])
//			max=arr[i];
//	}
//	printf("���ֵΪ��%d\n",max);
//return 0;
//}


//int main ()//����1-1/2+1/3+... -1/100
//{
//	int i = 0;
//	int flag = 1 ; 
//	double a = 0.0;
//	for (i=1;i<=100;i++)
//	{
//		a += flag * 1.0 / i ;
//		flag = -flag;
//	}
//	printf ("%lf\n",a);
//return 0;
//}


//int main ()//�ҳ�1-100���ж��ٸ�9
//{
//	int i = 0 ;
//	int count = 0 ;
//	for (i=1;i<=100;i++)
//	{
//		if (i%10==9)//9 19 29 ... 99 
//		{
//			printf("%d ",i);
//			count++;
//		}
//		if (i/10 == 9)//91 92 ...99
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf ("\n����%d��9",count);
//return 0 ;
//}

//int main ()//�ж�һ�����Ƿ�Ϊ����
//{
//	int i = 0 ;
//	int a = 0 ;
//	//char finish[]={0};
//	printf ("������һ������\n");
//	scanf("%d",&a);
//	for (i=2;i<=a/2;i++)
//	{
//		if (a%i==0)
//		{
//			printf("��������");
//			goto finish;
//		}
//	}
//	printf("������\n");
//finish:
//	;		
//return 0;
//}


//���������������������������Լ�� ��շת�������
//int main ()//�ж�1000-2000�������겢����
//{
//	int  i =0 ; 
//	int count = 0 ;
//	for (i=1000;i<=2000;i++)
//	{
//		if ((i%4==0 && i%100!=0)||(i%400==0))
//		{	
//			printf("%d ",i);
//			count++;
//		}
//		
//	}
//printf ("\n�ܼƣ�%d\n��",count);
//return 0;
//}


//int main ()//�ж�1000-2000�������겢����
//{
//	int  i =0 ; 
//	int count = 0 ;
//	for (i=1000;i<=2000;i++)
//	{
//		if (i%4==0 && i%100!=0)
//		{	printf("%d ",i);
//			count++;
//		}
//		else if (i%400==0)
//		{	printf("%d ",i);
//			count ++;
//		}
//	}
//printf ("\n�ܼƣ�%d\n��",count);
//return 0;
//}


//int main ()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("���������������������������Լ��\n");
//	scanf ("%d %d", &a , &b);
//	if (a<=b)
//	{	
//		c = b;
//		b = a;
//		a = c;
//	}
//	while (a % b)
//	{
//			c= a % b;
//			a= b;
//			b= c;
//	}
//	printf ("���Լ��Ϊ��%d\n",b);
//return 0 ;
//}

//int main ()//��ӡ1-100֮������3�ı��������� 
//{
//	int i = 1 ;
//	for (i= 1;i<=100;i++)
//	{
//		if ( i%3==0)
//			printf("%d\n",i);	
//	}
//return 0;
//}

// д���뽫���������Ӵ�С���
//int main ()
//{	int a = 0 ;
//	int b = 0 ;
//	int c = 0 ;
//	int trans = 0;
//	scanf("%d %d %d", &a, &b, &c);//abc bac cab cba acb bca
//	if (a<= b)
//	{	
//		int trans = b;
//		b= a ;
//		a= trans ;
//	}
//	if (a<= c)
//	{
//		trans = a;
//		a=c ;
//		c= trans ;	
//	}
//	if (b<= c)
//	{
//		trans = b;
//		b=c ;
//		c= trans ;	
//	}
//	printf ("%d %d %d\n", a, b, c);
//return 0;
//}
//int main ()
//{	int a = 0 ;
//	int b = 0 ;
//	int c = 0 ;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a>=b&&b>=c)
//		printf ("�Ӵ�СΪ��%d %d %d\n",a,b,c);
//	else if (a>=c&&c>=b)
//		printf ("�Ӵ�СΪ��%d %d %d\n",a,c,b);
//	else if (b>=c&&c>=a)
//		printf ("�Ӵ�СΪ��%d %d %d\n",b,c,a);
//	else if (b>=a&&a>=c)
//		printf ("�Ӵ�СΪ��%d %d %d\n",b,a,c);
//	else if (c>=a&&a>=b)
//		printf ("�Ӵ�СΪ��%d %d %d\n",c,a,b);
//	else 
//		printf ("�Ӵ�СΪ��%d %d %d\n",c,b,a);
//
//return 0;
//}


//int  main ()
//{
//	int num1 = 0  ;
//	int	num2 =0 ;
//    int sum=0;
//	scanf("%d%d" , &num1 , & num2);
//	sum = num1 + num2;
//
//	printf("sum = %d\n", sum);
//	return 0;
//}
//
//
//int main()
//{
//	int input = 0;
//	printf ("��Ҫ�ú�ѧϰ��(1/0)");
//	scanf ("%d\n",&input);
//	if (input == 1)
//		printf("1");
//	else 
//		printf ("0");
//	return 0 ;
//}
//
//Max (int x , int y)
//{
//    if (x>y)
//		return x;
//	else 
//		return y;
//}
//int main ()
//{
//	int num1 = 0 ;
//	int num2 = 0 ;
//	return 0 ;
//}
//
