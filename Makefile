sfml-app: main.o Engine.o Properties.o
	g++ compiled/*.o -lsfml-graphics -lsfml-window -lsfml-system -o bin/sfml-app

Properties.o: src/Properties.cpp src/Properties.hpp
	g++ -std=c++11 -g -c src/Properties.cpp -o compiled/Properties.o

main.o: src/main.cpp
	g++ -std=c++11 -g -c src/main.cpp -o compiled/main.o

Engine.o: src/Engine.cpp src/Engine.hpp src/Properties.cpp src/Properties.hpp
	g++ -std=c++11 -g -c src/Engine.cpp -o compiled/Engine.o