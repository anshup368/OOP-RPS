output: Computer.o Person.o Player.o main.o
	g++ Computer.o Person.o Player.o main.o -o output

Computer.o: Computer.cpp
	g++ -c Computer.cpp

Person.o: Person.cpp
	g++ -c Person.cpp

Player.o: Player.cpp
	g++ -c Player.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm *.o output