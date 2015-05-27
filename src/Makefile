TARGET=parser

install: $(TARGET)
	cp parser ../lib/

$(TARGET): parser.cpp
	g++ -o $(TARGET) parser.cpp

clean:
	rm -f $(TARGET)
