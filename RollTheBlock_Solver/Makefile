play: play.o parser.o element.o
	g++ play.o parser.o element.o -o play

play.o: play.cpp
	g++ -c play.cpp

parser.o: parser.cpp
	g++ -c parser.cpp

element.o: element.cpp
	g++ -c element.cpp

clean:
	rm *.o play
