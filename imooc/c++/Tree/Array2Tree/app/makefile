BIN_PATH = ../bin

CC = g++

#源文件
SRCS = 	main.cpp \
		arrayTree.cpp

#将.cpp 转换为.o
OBJS = $(SRCS:.cpp=.o)

#exe
EXEC=$(BIN_PATH)/exe

start:$(OBJS)
		$(CC) -o $(EXEC) $(OBJS)
		
#.cpp转为.o
.cpp.o:
		$(CC) -o $@ -c $<
		
clean:
		rm -rf	$(OBJS)	$(EXEC)