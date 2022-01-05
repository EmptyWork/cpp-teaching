CPP = g++
CPPFLAGS = -Wall
RM = rm

func_void: main_void.o log_void.o
	$(CPP) main.o log.o -o build/func_void $(CPPFLAGS)

main_void.o: src/functions/void/Main.cpp
	$(CPP) -c src/functions/void/Main.cpp -I src/functions/void/lib -o main.o

log_void.o: src/functions/void/Log.cpp
	$(CPP) -c src/functions/void/Log.cpp -o log.o

func_basic: 
	$(CPP) src/functions/basic/Main.cpp -o build/func_basic $(CPPFLAGS)

clean:
	$(RM) build/*
	$(RM) *.o

ep_inparr: main_ep_inparr.o program_ep_inparr.o
	$(CPP) main.o program.o -o build/ep_inparr $(CPPFLAGS)

main_ep_inparr.o: example-programs/input-array/Main.cpp
	$(CPP) -c example-programs/input-array/Main.cpp -I example-programs/input-array/lib -o main.o

program_ep_inparr.o: example-programs/input-array/Program.cpp
	$(CPP) -c example-programs/input-array/Program.cpp -o program.o