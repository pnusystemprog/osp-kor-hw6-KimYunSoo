#include "phone.h"

int deleteByName(User* book,int* size)
{
	char name[30];
	int i,j;
	if(*size>0)
	{
		printf("삭제할 이름을 입력하세요: ");
		scanf("%s",name);
		for(i=0;i<MAX_NUM; i++)
		{
			if(strcmp(name,book[i].name)==0)
			{
				(*size)--;
				printf("정보가 삭제되었습니다.\n\n");
				if(i!=MAX_NUM -1)
				{
					for(j=i;j<MAX_NUM;j++)
					{
						strcpy(book[j].name,book[j+1].name);
						strcpy(book[j].number,book[j+1].number);
					}
				*book[MAX_NUM -1].name=NULL;
				*book[MAX_NUM -1].number=NULL;
				}
				else
				{
					*book[MAX_NUM -1].name=NULL;
					*book[MAX_NUM -1].number=NULL;
				}
				return 0;
			}
		}
		printf("찾을수 없습니다.\n\n");
		return 0;
	}
	else
	{
		printf("데이터가 없습니다.\n\n");
		return 0;
	}
}
