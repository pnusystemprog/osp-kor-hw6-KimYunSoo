#include "phone.h"

int searchByName(User *book,int* size)
{
	char name[30];
	int i;
	if(*size>0)
	{
		printf("찾을 이름을 입력하세요: \n");
		scanf("%s",name);
		for(i=0;i<MAX_NUM;i++)
		{
			if(!strcmp(name,book[i].name))
			{
				printf("이름: %s\n",book[i].name);
				printf("전화번호: %s\n\n",book[i].number);
				return 0;
			}
		}
		printf("찾는 이름이 없습니다.\n\n");
		return 0;
	}
	else
	{
		printf("등록된 데이터가 없습니다.\n\n");
		return 0;
	}
}
