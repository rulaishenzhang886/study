#include<stdio.h>
 int main()
 {
 	int ret =0;
 	char password[5]={0};
	printf("���������룺");
	scanf("%s",password);
	printf("��ȷ�ϣ�Y/N):");
	ret=getchar();
	if(ret=='Y')
	{
		printf("ȷ�ϳɹ�\n"); 
	}
	else
	{
		printf("����ȷ��\n");
	}
 	return 0 ;
 }
