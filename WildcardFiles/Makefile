# TARGETS
# target: prerequisites
# 	commands

DEBUG = 1

TARGET_NAME = main
CXX_STANDARD = c++17
CXX_WARNINGS = -Wall -Wextra -Wpedantic
CXX = g++
CXXFLAGS = $(CXX_WARNINGS) -std=$(CXX_STANDARD)
LDFLAGS =

ifeq ($(DEBUG), 1)
CXXFLAGS += -g -O0
else
CXXFLAGS += -O3
endif

CXX_COMPILER_CALL = $(CXX) $(CXXFLAGS)

OBJS = main.o my_lib.o

explain:
	@echo "This is make practice"
	@echo "make $(TARGET_NAME) to build target"
	@echo "make exec to run"
	@echo "make clean to clean"

$(TARGET_NAME): $(OBJS)
	$(CXX_COMPILER_CALL) $^ $(LDFLAGS) -o $(TARGET_NAME)

%.o: %.c
	$(CXX_COMPILER_CALL) $< -c

exec: $(TARGET_NAME)
	@./$(TARGET_NAME)

clean:
	rm *.o
	rm main