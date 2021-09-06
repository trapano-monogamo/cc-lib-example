CC := g++
CFLAGS := -Wall -Wextra

INCLUDE := ./include
SRC := ./src
BUILD := ./build

LIBFILE := mylib
DLLFILE := mydll

# all: $(BUILD)/$(LIBFILE) $(BUILD)/$(DLLFILE)

mylib: $(BUILD)/$(LIBFILE)

mydll: $(BUILD)/$(DLLFILE)

$(BUILD)/$(LIBFILE): $(SRC)/*.cpp
	g++ -c -I$(INCLUDE) $^ -o $(BUILD)/$(LIBFILE).o
	ar -rv $(BUILD)/$(LIBFILE).lib $(BUILD)/$(LIBFILE).o

$(BUILD)/$(DLLFILE): $(SRC)/*.cpp
	g++ -c -fPIC -I$(INCLUDE) $^ -o $(BUILD)/$(DLLFILE).o
	g++ -shared -o $(BUILD)/$(DLLFILE).dll $(BUILD)/$(DLLFILE).o