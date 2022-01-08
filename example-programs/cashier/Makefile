CPP=g++
CPPFLAGS=-Wall -I $(LIB)

RM=rm

SRC=src
BUILDDIR=build
BUILD=$(BUILDDIR)/main
OBJ=obj
LIB=lib

SRCS=$(wildcard $(SRC)/*.cpp)
OBJS=$(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))

all: $(BUILD)

$(BUILD): $(OBJ) $(BUILDDIR) $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

$(OBJ):
	mkdir $@

$(BUILDDIR):
	mkdir $@

clean:
	$(RM) -f -r $(BUILDDIR) $(OBJ)