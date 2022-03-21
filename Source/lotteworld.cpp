
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
	
	// 상수는 변수이름을 대문자로 하자 
	
	printf("권종을 선택하세요\n1.주간권\n2.야간권\n");
	scanf("%d", &ticketType);  																// ticketType 번호를 받음 
	printf("주민등록번호 앞자리 전부와 뒷 자리 한자리를 입력하세요(ex 930118 1)\n");
	scanf("%d %d", &citizenNum, &numBack);													// 주민증록번호 얖자리, 뒷자리를 받음 
	
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
			else if (3<=calYear<12)
			{
				norPay = NigKid;
			}
			else if (13<=calYear<=18)
			{
				norPay = NigTeen;
			}
			else if (19<=calYear<65)
			{
				norPay = NigNor;
			}
			else if (65<=calYear)
			{
				norPay = NigOld;
			}	
		}
	else if 
				{
					if(calYear<3)
				{
					norPay = MorBaby;
				}
					else if (3<=calYear<12)
				{
					norPay = MorKid;
				}
					else if (13<=calYear<=18)
				{
					norPay = MorTeen;
				}
					else if (19<=calYear<65)
				{
					norPay = MorNor;
				}
					else if (65<=calYear);
				{
					norPay = MorOld;
				}
				}
	printf("티켓 몇 장을 발권하시겠습니까?\n");
	scanf("%d", &ticketNum);
	printf("우대사항을 선택하세요\n");
	printf("1. 없음\n2. 장애인\n3. 국가유공자\n4. 휴가장병\n5. 임산부\n6. 다둥이 행복카드\n");
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
	printf("가격은 %d 원 입니다.\n감사합니다.", totalPay);
	return 0;
}





/*
종일 
어른59,000원
청소년52,000원 
어린이47,000원
베이비15,000원

야간권 
어른56,000원
청소년50,000원
어린이46,000원 
베이비15,000원

- 베이비
1) 0~12개월 미만 : 파크 입장 및 유아 놀이시설(키즈토리아 등) 무료 이용
2) 12개월 이상 36개월 미만 : 파크 입장 무료(단, 단체 입장객 제외), 유아 놀이시설 이용은 유료로 이용 가능

- 36개월 이상 ~ 만 12세 : 어린이 요금 적용

- 만 13세 이상 ~ 만 18세 : 청소년 요금 적용(학교 및 학년 무관)

- 만 65세 이상 : 어린이 요금 적용(기타 우대 적용불가)


*/
