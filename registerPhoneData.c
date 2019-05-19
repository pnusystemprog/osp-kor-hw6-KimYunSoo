#include "phone.h"

void registerPhoneData(User*book,int* size)
{
	char command[BUFFER_SIZE];
	printf("비밀번호를 입력하세요: \n");
	scanf("%s",command);
	if(strcmp(command,"qwerty1234")==0)
	{
		if (*size<MAX_NUM)
		{
			printf("등록할이름:\n");
			scanf("%s",book[*size].name);
			printf("등록할 전화번호: \n");
			scanf("%s",book[*size].number);
			(*size)++;
			printf("정보가 저장되었습니다.\n\n");
		}
		else
		{
			printf("데이터가 꽉차서 더이상 등록불가!\n\n");
		}
	}
	else
	{
		printf("비밀번호가 1회 틀렸습니다. 다시 입력하세요.\n\n");
		scanf("%s",command);
		if(strcmp(command,"qwerty1234")==0)
		{
			if(*size<MAX_NUM)
			{
				printf("등록할 이름:\n");
				scanf("%s",book[*size].name);
				printf("등록할 전화번호:\n");
				scanf("%s",book[*size].number);
				(*size)++;
				printf("정보가 저장되었습니다.\n\n");
			}
			else
			{
				printf("데이터가 꽉차서 더이상 등록불가!\n\n");
			}
		}
		else
		{
			printf("비밀번호가 2회 틀렸습니다. 다시 입력하세요\n\n");
			scanf("%s",command);
			if(strcmp(command,"qwerty1234")==0)
			{
				if(*size<MAX_NUM)
				{
					printf("등록할 이름:\n");
					scanf("%s",book[*size].name);
					printf("등록할 전화번호:\n");
					scanf("%s",book[*size].number);
					(*size)++;
					printf("번호가 저장되었습니다.\n\n");
				}
				else
				{
					printf("데이터가 꽉차서 더이상 등록불가!\n\n");
				}
			}
			else
			{
			printf("비밀번호가 3회 틀렸습니다.등록할 수 없음!\n\n");
			return 0;
			}
		}

	}
}
