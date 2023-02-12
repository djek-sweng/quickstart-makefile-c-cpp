# target (executable file)
TARGET_EXE = quickstart

# C/C++ compiler
CC = gcc
CXX = g++

# directories
SRC_DIR = ./src
BIN_DIR = ./bin
INC_DIRS = $(shell find $(SRC_DIR) -type d)

# files
SRCS = $(shell find $(SRC_DIR) -name '*.cpp' -or -name '*.c')
OBJS = $(SRCS:%=$(BIN_DIR)/%.o)

# C/C++ compiler flags
FLAGS = -MMD -MP -Wall -Wextra -pedantic -Werror
INC_FLAGS = $(addprefix -I,$(INC_DIRS))

CFLAGS = $(INC_FLAGS) $(FLAGS) -std=c99
CPPFLAGS = $(INC_FLAGS) $(FLAGS) -std=c++11 -stdlib=libc++

# link *.o files to target executable
$(BIN_DIR)/$(TARGET_EXE): $(OBJS)
	$(CXX) $(OBJS) -o $@ $(LDFLAGS)

# compile *.c files
$(BIN_DIR)/%.c.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# compile *.cpp files
$(BIN_DIR)/%.cpp.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CPPFLAGS) -c $< -o $@

.PHONY: restore
restore:
	mkdir $(BIN_DIR)

.PHONY: clean
clean:
	rm -rf $(BIN_DIR)

-include $(DEPS)
