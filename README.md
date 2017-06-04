# semi-static-linear-solver
Sytem of linear equtions semi-static solver

Generates effective solution code for every combination of static and dynamic data.
For instance, this was generated for the same matrix and a same vector, but with different side-effects deliberately untroduced to prevent optimization:

    -rw-rw-r-- 1 okaleniuk okaleniuk 2276 чер  4 11:37 ./tests/generate_static_matrix_and_vector.s
    -rw-rw-r-- 1 okaleniuk okaleniuk 3454 чер  4 11:37 ./tests/generate_static_matrix.s
    -rw-rw-r-- 1 okaleniuk okaleniuk 4867 чер  4 11:37 ./tests/generate_static_none.s
    -rw-rw-r-- 1 okaleniuk okaleniuk 3918 чер  4 11:37 ./tests/generate_static_partially.s
    -rw-rw-r-- 1 okaleniuk okaleniuk 4843 чер  4 11:37 ./tests/generate_static_vector.s

Please note the size of generated disassemblies. They are different for when either vector or matrix is constant. When everything is constant, the solution is calculated in compile time entirely!

But what's even more exciting, it generates effective code even for non-const data structures, even when parts of them are being rewritten. It basically computes static minors of generally non-static matrix. How cool is that!  
