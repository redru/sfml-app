mkdir ./compiled

g++ -std=c++11 -c ./src/main.cpp -o ./compiled/main.o
g++ -std=c++11 -c ./src/Engine.cpp -o ./compiled/Engine.o
g++ -std=c++11 -c ./src/Properties.cpp -o ./compiled/Properties.o

rm -r ./bin
mkdir ./bin
g++ ./compiled/*.o -o ./bin/sfml-app -lsfml-graphics -lsfml-window -lsfml-system
./bin/sfml-app
