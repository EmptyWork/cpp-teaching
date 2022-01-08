CPP=g++
CPPFLAGS=-Wall
BUILD=build
SRC=src
FUNCDIR=$(SRC)/functions
DTDIR=$(SRC)/data-types

CD=cd
RMFLAGS=-r
RM=rm $(RMFLAGS)

EPS=ep_inparr ep_cashier
FUNCS=func_void func_basic
DTS=dt_native dt_native dt_enum dt_class

EP=ep
FUNC=func
DT=dt


all: $(DT) $(FUNC) $(EP)

$(FUNC): $(FUNCS)

func_void:
	$(CD) $(FUNCDIR)/void && make 

func_basic: $(BUILD) $(FUNCDIR)/basic/src/func_basic.cpp
	$(CPP) $(CPPFLAGS) $(FUNCDIR)/basic/src/func_basic.cpp -o $(BUILD)/func_basic

$(DT): $(DTS)

dt_native:
	$(CD) $(DTDIR)/native && make 

dt_struct: $(BUILD) $(DTDIR)/struct/src/struct.cpp
	$(CPP) $(CPPFLAGS) $(DTDIR)/struct/src/struct.cpp -o $(BUILD)/struct

dt_enum: $(BUILD) $(DTDIR)/enum/src/enum.cpp
	$(CPP) $(CPPFLAGS) $(DTDIR)/enum/src/enum.cpp -o $(BUILD)/enum

dt_class: $(BUILD) $(DTDIR)/class/src/class.cpp
	$(CD) $(DTDIR)/class/ && make 

$(EP): $(EPS)

ep_inparr:
	$(CD) example-programs/input-array/ && make

ep_cashier:
	$(CD) example-programs/cashier/ && make 

clean:
	./clean.sh

$(BUILD):
	mkdir $@