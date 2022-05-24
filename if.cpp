//////#include<stdio.h>
////// int main()
////// {
//////  char ret =0;
//////  int ch=0;
//////  char password[10]={0};
////// printf("请输入密码：");
////// scanf("%s",password);
////// while(ch=getchar()!='\n')
////// {
////// 	
////// }
////// printf("请确认（Y/N):");
////// ret=getchar();
//////
////// if(ret=='Y')
////// {
//////  printf("确认成功\n"); 
////// }
////// else
////// {
//////  printf("放弃确认\n");
////// }
////// printf("%s",password);
//////  return 0 ;
////// }
////// 
////#include<stdio.h>
////int main()
////{
////	int a=0;
////	while ((a=getchar())!=EOF)
////	{
////		if (a>='0'&&a<='9')
////		putchar(a);
////	}
////	return 0;
////}
//#include<stdio.h>
//int main()
//{
//int a=0;
//for(a=1;a<100;a+=3)
//{
//	printf("%d\n",a);
//}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a=1;
//	do
//	{
//		printf("%d\n",a);
//		a++;
//	}
//	while(a<10);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n=0;
//	int j=0;
//	int i=1;
//	scanf("%d",&n);
//	for(j=1;j<=n;j++)
//	{
//	i=j*i;
//	}
//	printf("%d",i);
//	return 0;
//}

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	//char arr1[]="0";
	char arr1[20]={0};
	char arr2[]="1dgdf";
	
	int i=1;
	while(i<=3)
	{
		
		printf("请输入密码：");
		scanf("%s",arr1);
		if (strcmp(arr1,arr2)!=0)
		{
//		printf("%s\n",arr1);
//		printf("%s\n",arr2);
			printf("\n密码错误\n"); 
		}
		else
		{
			printf("\n登陆成功"); 
		break;
		}
	i++;
	}
	return 0;
}














#include<string.h>
//#include<windows.h>
//int main()
////{
////	char arr[]="welcome to bit";
////	printf("%s",arr);
////	return 0;
//// } 
//{
//	char arr1[]="welcome to bit!!!";
//	char arr2[]="#################";
//	int l=0;
//	int r=sizeof(arr1)/sizeof(arr1[0])-2;
//	while(l<=r)
//	{
//	arr2[l]=arr1[l];
//	arr2[r]=arr1[r];
//	printf("%s\n",arr2);
//	l++;
//	r--;
//	}
//	
//	return 0;
//}





















//{
//	int arr[]={1,2,3,4,5,6,7,8};
//	int l=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	int r=sz-1;
//	int a=0;
//	scanf("%d",&a);
//	while(l<=r)
//	{
//	
//		int mid=(l+r)/2;
//		if(arr[mid]<a)
//		{
//			l=mid+1;
//		}
//		else if(arr[mid]>a)
//		{
//			r=mid-1;
//		}
//		
//		else
//		{
//			printf("找到了，下标是%d",mid);
//			break;
//		}
//	}
//	if(l>r)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//
//















//{
//	int arr[]={0,1,2,3,4};
//	int a=2;
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	scanf("%d",&a);
//	for(i=0;i<sz;i++)
//	{
//		if(a==arr[i])
//		{
//			printf("找到了，%d",i);
//			break;
//		}
//	
//	}
//	if(i==sz)
//		printf("找不到"); 
//	return 0;
//}
