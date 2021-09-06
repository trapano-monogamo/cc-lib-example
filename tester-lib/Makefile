CC := g++
CC_FLAGS := -Wall -Wextra -g

BIN := ./bin
SRC := ./src
INCLUDE := ./include
LIB := ./lib

LIBRARIES := -lmylib
EXECUTABLE := main

all: $(BIN)/$(EXECUTABLE)

run: all
	$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE):$(SRC)/*.cpp
	$(CC) $(CC_FLAGS) -I$(INCLUDE) -L$(LIB) $^ -o $@ $(LIBRARIES)

.PHONY: debug

debug: all
	gdb ./bin/$(EXECUTABLE).exe


.PHONY: clear

clear:
	del /f "$(BIN)\$(EXECUTABLE).exe"