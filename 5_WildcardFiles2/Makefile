# TARGETS
# target: prerequisites
# 	commands

DEBUG = 1

TARGET_NAME = main
CC = gcc
CC_WARNINGS = -Wall -Wextra -Wpedantic
LDFLAGS =

ifeq ($(DEBUG), 1)
CCFLAGS += -g -O0
else
CCFLAGS += -O3
endif

CC_COMPILER_CALL = $(CC) $(CC_WARNINGS)

SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c, %.o, $(SRCS))

explain:
	@echo "This is make practice"
	@echo "make $(TARGET_NAME) to build target"
	@echo "make exec to run"
	@echo "make clean to clean"
	@echo $(SRCS)

$(TARGET_NAME): $(OBJS)
	$(CC_COMPILER_CALL) $^ $(LDFLAGS) -o $(TARGET_NAME)

%.o: %.c
	$(CC_COMPILER_CALL) -c $< -o $@

exec: $(TARGET_NAME)
	@./$(TARGET_NAME)

clean:
	rm *.o
	rm $(TARGET_NAME)