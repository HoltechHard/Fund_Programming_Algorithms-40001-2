all: main

main: main.cpp person.cpp natural_personal.cpp legal_personal.cpp company.cpp
	g++ main.cpp person.cpp natural_personal.cpp legal_personal.cpp company.cpp -o main

run: main
	main.exe

clean:
	rm -f main.exe
		