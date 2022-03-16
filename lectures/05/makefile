all:04

04: 04_04.o PairOfDice.o Die.o MyRandom.o Player.o Barbuti.o
	g++ -o 04 04_04.o PairOfDice.o Die.o MyRandom.o Player.o Barbuti.o
	
4_04.o: 04_04.cpp Barbuti.h
	g++ -c 04_04.cpp Barbuti.h
	
PairOfDice.o: PairOfDice.cpp Die.h MyRandom.h
	g++ -c PairOfDice.cpp Die.h
	
Die.o: Die.cpp MyRandom.h
	g++ -c Die.cpp MyRandom.h
	
MyRandom.o: MyRandom.cpp
	g++ -c MyRandom.cpp
	
Player.o: Player.cpp PairOfDice.h
	g++ -c Player.cpp PairOfDice.h
	
Barbuti.o: Barbuti.cpp Player.h
	g++ -c Barbuti.cpp Player.h
