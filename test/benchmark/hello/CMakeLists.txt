set(BENCHMARK_TARGET benchmark_hello)
add_benchmark(${BENCHMARK_TARGET})
target_link_libraries(${BENCHMARK_TARGET} PRIVATE
    mylibrary::hello
)