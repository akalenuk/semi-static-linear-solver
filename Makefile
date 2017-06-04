all:
	g++ -O3 -std=c++11 tests/test_linear_solver.cpp -o tests/test_linear_solver
	./tests/test_linear_solver
	g++ -O3 -std=c++11 tests/generate_static_matrix_and_vector.cpp -S -o tests/generate_static_matrix_and_vector.s
	g++ -O3 -std=c++11 tests/generate_static_matrix.cpp -S -o tests/generate_static_matrix.s
	g++ -O3 -std=c++11 tests/generate_static_vector.cpp -S -o tests/generate_static_vector.s
	g++ -O3 -std=c++11 tests/generate_static_partially.cpp -S -o tests/generate_static_partially.s
	g++ -O3 -std=c++11 tests/generate_static_none.cpp -S -o tests/generate_static_none.s
	ls -l ./tests/*.s
clean:
	rm ./tests/test_linear_solver
	rm ./tests/*.s
