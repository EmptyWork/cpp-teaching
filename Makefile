# TODO: UBAH STRUKTUR FILE INI

# =====
# pengaturan untuk compiler - g++
# =====

CPP=g++
CPPFLAGS=-Wall

# =====
# perintah untuk os
# =====

CD=cd
RMFLAGS=-r
RM=rm $(RMFLAGS)

# =====
# daftar direktori
# =====

SRC=src
BUILD=build
MAINDIR=$(SRC)/main
FUNCDIR=$(SRC)/functions
DTDIR=$(SRC)/data-types

# =====
# daftar aplikasi dan name `make` 
# =====

EPS=ep_inparr ep_cashier
FUNCS=func_void func_basic func_inline
DTS=dt_native dt_native dt_enum dt_class
MAINS=argc argv envp

# =====
# koleksi aplikasi
# =====

EP=ep
FUNC=func
DT=dt
MA=ma

all: $(DT) $(FUNC) $(EP) $(MA)

$(MA): $(MAINS)

argc: $(BUILD) $(MAINDIR)/argc/src/argc.cpp
	$(CPP) $(CPPFLAGS) $(MAINDIR)/argc/src/argc.cpp -o $(BUILD)/argc

argv: $(BUILD) $(MAINDIR)/argv/src/argv.cpp
	$(CPP) $(CPPFLAGS) $(MAINDIR)/argv/src/argv.cpp -o $(BUILD)/argv

envp: $(BUILD) $(MAINDIR)/envp/src/envp.cpp
	$(CPP) $(CPPFLAGS) $(MAINDIR)/envp/src/envp.cpp -o $(BUILD)/envp

$(FUNC): $(FUNCS)

func_void:
	$(CD) $(FUNCDIR)/void && make 

func_basic: $(BUILD) $(FUNCDIR)/basic/src/func_basic.cpp
	$(CPP) $(CPPFLAGS) $(FUNCDIR)/basic/src/$@.cpp -o $(BUILD)/$@

func_inline: $(BUILD) $(FUNCDIR)/inline/src/func_inline.cpp
	$(CPP) $(CPPFLAGS) $(FUNCDIR)/inline/src/$@.cpp -o $(BUILD)/$@

$(DT): $(DTS)

dt_native:
	$(CD) $(DTDIR)/native && make 

dt_struct: $(BUILD) $(DTDIR)/struct/src/struct.cpp
	$(CPP) $(CPPFLAGS) $(DTDIR)/struct/src/struct.cpp -o $(BUILD)/$@

dt_enum: $(BUILD) $(DTDIR)/enum/src/enum.cpp
	$(CPP) $(CPPFLAGS) $(DTDIR)/enum/src/enum.cpp -o $(BUILD)/$@

dt_class: $(BUILD) $(DTDIR)/class/src/class.cpp
	$(CD) $(DTDIR)/class/ && make 

dt_array: $(BUILD) $(DTDIR)/array/src/array.cpp
	$(CD) $(DTDIR)/array/ && make && ./build/main

$(EP): $(EPS)

ep_inparr:
	$(CD) example-programs/input-array/ && make

ep_cashier:
	$(CD) example-programs/cashier/ && make 

ep_cashier-vector:
	$(CD) example-programs/cashier-vector/ && make && ./build/main

clean:
	./clean.sh

$(BUILD):
	mkdir $@