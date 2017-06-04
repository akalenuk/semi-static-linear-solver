all:
	g++ -O3 -std=c++11 tests/test_linear_solver.cpp -o tests/test_linear_solver
	./tests/test_linear_solver 
clean:
	rm ./tests/test_linear_solver
