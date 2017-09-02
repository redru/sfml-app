CC= g++
CFLAGS= -std=c++11 -g -Wall -c
EXEC_FILE= sfml-app

$(EXEC_FILE): main.o Engine.o Properties.o
	$(CC) compiled/*.o -lsfml-graphics -lsfml-window -lsfml-system -o bin/sfml-app

main.o: src/main.cpp src/engine/Engine.hpp src/engine/configuration/EngineConfiguration.hpp
	$(CC) $(CFLAGS) src/main.cpp -o compiled/main.o

Engine.o: src/engine/Engine.cpp src/engine/Engine.hpp src/engine/utils/Properties.hpp src/engine/configuration/EngineConfiguration.hpp
	$(CC) $(CFLAGS) src/engine/Engine.cpp -o compiled/Engine.o

Properties.o: src/engine/utils/Properties.cpp src/engine/utils/Properties.hpp
	$(CC) $(CFLAGS) src/engine/utils/Properties.cpp -o compiled/Properties.o