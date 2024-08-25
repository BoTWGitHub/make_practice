# TARGETS
# target: prerequisites
# 	commands

DEBUG = 1
INCLUDE_DIR = include
SOURCE_DIR = src
BUILD_DIR = build

TARGET_NAME = main
CC = gcc
CC_WARNINGS = -Wall -Wextra -Wpedantic
CPP_FLAGS = -I $(INCLUDE_DIR)
LDFLAGS =

ifeq ($(DEBUG), 1)
CCFLAGS += -g -O0
else
CCFLAGS += -O3
endif

CC_COMPILER_CALL = $(CC) $(CC_WARNINGS) $(CPP_FLAGS)

SRCS = $(wildcard $(SOURCE_DIR)/*.c)
OBJS = $(patsubst $(SOURCE_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

explain:
	@echo "This is make practice"
	@echo "make $(TARGET_NAME) to build target"
	@echo "make exec to run"
	@echo "make clean to clean"
	@echo $(SRCS)

$(TARGET_NAME): $(OBJS)
	$(CC_COMPILER_CALL) $^ $(LDFLAGS) -o $(BUILD_DIR)/$(TARGET_NAME)

$(BUILD_DIR)/%.o: $(SOURCE_DIR)/%.c
	@mkdir -p $(BUILD_DIR)
	$(CC_COMPILER_CALL) -c $< -o $@

exec: $(TARGET_NAME)
	@./$(BUILD_DIR)/$(TARGET_NAME)

clean:
	rm $(BUILD_DIR)/*.o
	rm $(BUILD_DIR)/$(TARGET_NAME)