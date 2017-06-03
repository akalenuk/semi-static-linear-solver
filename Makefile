all:
	g++ -O3 -std=c++11 tests/test_linear_equations.cpp -o tests/test_linear_equations
	./tests/test_linear_equations 
clean:
	rm ./tests/test_linear_equations 
