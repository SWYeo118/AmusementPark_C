
#include <stdio.h>

int main()
{
	int ticketType, ticketNum, advantage, totalPay, citizenNum, year, numBack, calYear, norPay;
	const int MorNor = 59000;
	const int MorTeen = 52000;
	const int MorKid = 47000;
	const int MorBaby = 15000;
	const int MorOld = 47000;
	
	const int NigNor = 56000;
	const int NigTeen = 50000;
	const int NigKid = 46000;
	const int NigBaby = 15000;
	const int NigOld = 46000;
	printf("������ �����ϼ���\n1.�ְ���\n2.�߰���\n");
	scanf("%d", &ticketType);  																// ticketType ��ȣ�� ���� 
	printf("�ֹε�Ϲ�ȣ ���ڸ� ���ο� �� �ڸ� ���ڸ��� �Է��ϼ���(ex 930118 1)\n");
	scanf("%d %d", &citizenNum, &numBack);													// �ֹ����Ϲ�ȣ �A�ڸ�, ���ڸ��� ���� 
	
	year = citizenNum/10000;
	
	if (numBack==1 || numBack==2)
	 {calYear = 2022 - (1900+year);
	 }
	if (numBack==3 || numBack==4)
	 {calYear = 2022 - (2000+year);
	 }
	
	if (ticketType == 2)
		{
			if(calYear<3)
			{
				norPay = NigBaby;
			}
			if (3<=calYear<12)
			{
				norPay = NigKid;
			}
			if (13<=calYear<=18)
			{
				norPay = NigTeen;
			}
			if (19<=calYear<65)
			{
				norPay = NigNor;
			}
			if (65<=calYear)
			{
				norPay = NigOld;
			}	
		}
	else
				{
					if(calYear<3)
				{
					norPay = MorBaby;
				}
					if (3<=calYear<12)
				{
					norPay = MorKid;
				}
					if (13<=calYear<=18)
				{
					norPay = MorTeen;
				}
					if (19<=calYear<65)
				{
					norPay = MorNor;
				}
					if (65<=calYear);
				{
					norPay = MorOld;
				}
				}
	printf("Ƽ�� �� ���� �߱��Ͻðڽ��ϱ�?\n");
	scanf("%d", &ticketNum);
	printf("�������� �����ϼ���\n");
	printf("1. ����\n2. �����\n3. ����������\n4. �ް��庴\n5. �ӻ��\n6. �ٵ��� �ູī��\n");
	scanf("%d", &advantage);
		if(advantage==1)
		{
		norPay=norPay;}
		
		else if(advantage==2)
		{
		norPay=norPay/2;}
			
		else if(advantage==3)
		{
		norPay=norPay/2;}

		else if(advantage==4)		
		{
		norPay=norPay*0.51;}

		else if(advantage==5)
		{
		norPay=norPay/2;}
		
		else if(advantage==6)
		 {
		 norPay=norPay*0.7;}
	
	totalPay = (ticketNum * norPay);
	printf("������ %d �� �Դϴ�.\n�����մϴ�.", totalPay);
	return 0;
}
/*
���� 
�59,000��
û�ҳ�52,000�� 
���47,000��
���̺�15,000��

�߰��� 
�56,000��
û�ҳ�50,000��
���46,000�� 
���̺�15,000��

- ���̺�
1) 0~12���� �̸� : ��ũ ���� �� ���� ���̽ü�(Ű���丮�� ��) ���� �̿�
2) 12���� �̻� 36���� �̸� : ��ũ ���� ����(��, ��ü ���尴 ����), ���� ���̽ü� �̿��� ����� �̿� ����

- 36���� �̻� ~ �� 12�� : ��� ��� ����

- �� 13�� �̻� ~ �� 18�� : û�ҳ� ��� ����(�б� �� �г� ����)

- �� 65�� �̻� : ��� ��� ����(��Ÿ ��� ����Ұ�)


*/
