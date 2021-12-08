func-void:
	g++ -c src/functions/void/Main.cpp -I src/functions/void/lib -o main.o && g++ -c src/functions/void/Log.cpp -o log.o && g++ main.o log.o -o build/App && rm main.o log.o && clear && sleep 1 && ./build/App

func-void-comment:
	g++ -c src/functions/void/Comment.cpp -I src/functions/void/lib -o comment.o && g++ -c src/functions/void/Log.cpp -o log.o && g++ comment.o log.o -o build/App -Wall && rm comment.o log.o && clear && sleep 1 && ./build/App

func-basic:
	g++ src/functions/basic/Main.cpp -o build/App -Wall && clear && sleep 1 && ./build/App

func-basic-comment:
	g++ src/functions/basic/Comment.cpp -o build/App -Wall && clear && sleep 1 && ./build/App

ep-inparr:
	g++ -c example-programs/input-array/Main.cpp -I example-programs/input-array/lib -o main.o && g++ -c example-programs/input-array/Program.cpp -o program.o && g++ main.o program.o -o build/App -Wall && rm main.o program.o && clear && sleep 1 && ./build/App

edit:
	g++ src/edit.cpp -o build/test -Wall && clear && ./build/test