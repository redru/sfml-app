sfml-app: main.o Engine.o Properties.o
	g++ compiled/*.o -lsfml-graphics -lsfml-window -lsfml-system -o bin/sfml-app

main.o: src/main.cpp src/engine/Engine.hpp src/engine/utils/Properties.hpp
	g++ -std=c++11 -g -Wall -c src/main.cpp -o compiled/main.o

Engine.o: src/engine/Engine.cpp src/engine/Engine.hpp src/engine/utils/Properties.hpp
	g++ -std=c++11 -g -Wall -c src/engine/Engine.cpp -o compiled/Engine.o

Properties.o: src/engine/utils/Properties.cpp src/engine/utils/Properties.hpp
	g++ -std=c++11 -g -Wall -c src/engine/utils/Properties.cpp -o compiled/Properties.o