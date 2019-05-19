#include "phone.h"

void printAll(User* book,int *size)
{
	int i=0;
	printf("<<전화번호목록>>\n");
	if(*size>0)
	{
		for(i=0;i<*size;i++)
		{
			printf("이름:%s\n",book[i].name);
			printf("전화번호:%s\n\n",book[i].number);
		}
	}
	else
	{
		printf("등록된 데이터가 없습니다.\n\n");
	}
}
