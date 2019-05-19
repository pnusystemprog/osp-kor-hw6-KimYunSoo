CC=gcc
OBJS=phoneBookMain.o searchByName.o deleteByName.o printAll.o registerPhoneData.o
TARGET=hw6.out

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS)

phoneBookMain.o: phone.h phoneBookMain.c
searchByName.o: phone.h searchByName.c
deleteByName.o: phone.h deleteByName.c
printAll.o: phone.h printAll.c
registerPhoneData.o: phone.h registerPhoneData.c
