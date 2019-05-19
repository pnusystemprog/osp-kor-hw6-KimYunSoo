#ifndef PHONE_H__
#define PHONE_H__


#include <stdio.h>
#include <string.h>

#define MAX_NUM 50
#define BUFFER_SIZE 20
#define PASSWORD qwerty1234

typedef struct phone
{
	char name[30];
	char number[30];
}User;

//void registerPhoneData(User *book,int *size);
//int deleteByName(User* book,int* size);
//int searchByName(User* book,int* size);
//void printAll(User* book,int* size);


#endif
