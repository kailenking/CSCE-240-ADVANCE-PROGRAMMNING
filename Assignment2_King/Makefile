#Build executable called test file
#List all source files
CC = g++

CFLAGS = -g -Wall

TARGET = test

all: $(TARGET)
$(TARGET):	 main.cpp myfunction.h myfunction.cpp
	$(CC) $(CFLAGS) -o $(TARGET)	 main.cpp myfunction.cpp
clean:
	$(RM) $(TARGET)






