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
ARGDIR=$(SRC)/args
FUNCDIR=$(SRC)/functions
DTDIR=$(SRC)/data-types
NMSPCDIR=$(SRC)/namespace

EXE=

# =====
# daftar aplikasi dan name `make` 
# =====

EPS=ep_inparr ep_cashier
FUNCS=fbasic void inline auto
DTS=dbasic array1d enum class struct
ARGS=argc argv envp
NMSPCS=nbasic

# =====
# koleksi aplikasi
# =====

EP=ep
FUNC=func
DT=dt
AR=ar
NMS=nms

all: $(DT) $(FUNC) $(EP) $(AR)

$(AR): $(ARGS)

argc: $(BUILD) $(ARGDIR)/argc/src/argc.cpp
	$(CPP) $(CPPFLAGS) $(ARGDIR)/argc/src/argc.cpp -o $(BUILD)/argc${EXE}

argv: $(BUILD) $(ARGDIR)/argv/src/argv.cpp
	$(CPP) $(CPPFLAGS) $(ARGDIR)/argv/src/argv.cpp -o $(BUILD)/argv${EXE}

envp: $(BUILD) $(ARGDIR)/envp/src/envp.cpp
	$(CPP) $(CPPFLAGS) $(ARGDIR)/envp/src/envp.cpp -o $(BUILD)/envp${EXE}

$(FUNC): $(FUNCS)

fbasic: $(BUILD) $(FUNCDIR)/basic/src/basic.cpp
	$(CPP) $(CPPFLAGS) $(FUNCDIR)/basic/src/basic.cpp -o $(BUILD)/$@${EXE}

void: $(BUILD) $(FUNCDIR)/void/src/void.cpp
	$(CPP) $(CPPFLAGS) $(FUNCDIR)/void/src/void.cpp -o $(BUILD)/$@${EXE}

inline: $(BUILD) $(FUNCDIR)/inline/src/inline.cpp
	$(CPP) $(CPPFLAGS) $(FUNCDIR)/inline/src/inline.cpp -o $(BUILD)/$@${EXE}

auto: $(BUILD) $(FUNCDIR)/auto/src/auto.cpp
	$(CPP) $(CPPFLAGS) $(FUNCDIR)/auto/src/auto.cpp -o $(BUILD)/$@${EXE}

$(DT): $(DTS)

dbasic: $(BUILD) $(DTDIR)/basic/src/basic.cpp
	$(CPP) $(CPPFLAGS) $(DTDIR)/basic/src/basic.cpp -o $(BUILD)/$@${EXE}

struct: $(BUILD) $(DTDIR)/struct/src/struct.cpp
	$(CPP) $(CPPFLAGS) $(DTDIR)/struct/src/struct.cpp -o $(BUILD)/$@${EXE}

enum: $(BUILD) $(DTDIR)/enum/src/enum.cpp
	$(CPP) $(CPPFLAGS) $(DTDIR)/enum/src/enum.cpp -o $(BUILD)/$@${EXE}

class: $(BUILD) $(DTDIR)/class/src/class.cpp
	$(CPP) $(CPPFLAGS) $(DTDIR)/class/src/class.cpp -o $(BUILD)/$@${EXE}

array1d: $(BUILD) $(DTDIR)/array/array1d/src/array1d.cpp
	$(CPP) $(CPPFLAGS) $(DTDIR)/array/array1d/src/array1d.cpp -o $(BUILD)/$@${EXE}

$(NMS): $(NMSPCS)

nbasic: $(BUILD) $(NMSPCDIR)/basic/src/basic.cpp
	$(CPP) $(CPPFLAGS) $(NMSPCDIR)/basic/src/basic.cpp -o $(BUILD)/$@${EXE}

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