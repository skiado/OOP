all:07

07: 04_07.o date.o time.o date_time.o
	g++ -o 07 04_07.o date.o time.o date_time.o
    
04_07.o: 04_07.cpp date_time.h
	g++ -c 04_07.cpp date_time.h  
	
date.o: date.cpp date.h
	g++ -c date.cpp
	
time.o: time.h time.cpp
	g++ -c time.cpp
	
date_time.o: date_time.cpp date.h time.h
	g++ -c date_time.cpp date.h time.h
