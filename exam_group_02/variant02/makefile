all: main

main: main.cpp cluster.cpp server.cpp
	g++ main.cpp cluster.cpp server.cpp -o main 

run: main
	main.exe

clean:
	rm -f main.exe
