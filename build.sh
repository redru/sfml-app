g++ -c ./src/main.cpp -o ./compiled/main.o
g++ -c ./src/Engine.cpp -o ./compiled/Engine.o

g++ ./compiled/*.o -o ./bin/sfml-app -lsfml-graphics -lsfml-window -lsfml-system
./bin/sfml-app
