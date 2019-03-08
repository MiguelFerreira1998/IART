play: play.o parser.o
	g++ play.o parser.o -o play

play.o: play.cpp
	g++ -c play.cpp

parser.o: parser.cpp
	g++ -c parser.cpp

clean:
	rm *.o play
