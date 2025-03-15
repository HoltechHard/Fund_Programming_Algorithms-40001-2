all: main

main: main.cpp vectorize.cpp client.cpp
	g++ main.cpp vectorize.cpp client.cpp -o main 

run: main
	main.exe

clean:
	del main.exe	
	