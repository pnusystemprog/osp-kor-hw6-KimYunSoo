
#include <stdio.h>
#include <string.h>
#include "phone.h"

#define MAX_NUM 50
#define BUFFER_SIZE 20
#define PASSWORD qwerty1234

void registerPhoneData(User *book,int *size);
int deleteByName(User* book,int* size);
int searchByName(User* book,int* size);
void printAll(User* book,int* size);

int main()
{
	int input;
	User user[MAX_NUM];
	int person=0;

	while(1)
	{
		input='\0';
		printf("=====Telephone Book Management=====\n");
		printf("<<<1.Register 2.PrintAll 3.Search 4.Delete 5.Exit>>>\n");
		scanf("%d",&input);

		if(input==1)
		{
			registerPhoneData(user,&person);
		}
		else if(input==2)
		{
			printAll(user,&person);
		}
		else if(input==3)
		{
			searchByName(user,&person);
		}
		else if(input==4)
		{
			deleteByName(user,&person);
		}
		else if(input==5)
		{
			printf("Bye\n");
			break;
		}
	}
}
