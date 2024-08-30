# CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project(MyProject)

# ... (Konfigurasi kompilasi kode produksi)

# Aktifkan Google Test
enable_testing()
include(GoogleTest)
# Tambahkan executable
add_executable(add_two_numbers src/add_two_numbers.cpp)
add_executable(function_problem src/function-easy.cpp)
# Tambahkan executable untuk test
# add_executable(my_tests 
#   tests/module1/test_case1.cpp
#   tests/module1/test_case2.cpp
#   # ... tambahkan file test lainnya
# )

# Link executable test dengan Google Test dan library proyek Anda
target_link_libraries(my_tests gtest_main ${PROJECT_LIBRARIES})

# Tambahkan test ke suite test
gtest_discover_tests(my_tests)