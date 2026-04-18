all:
	g++ calculator.cpp -o calc

run:
	./calc

clean:
	rm -f calc
