#include <benchmark/benchmark.h>
#include <hello/hello.h>

static void BM_Factorial(benchmark::State& state) {
    for (auto _ : state) {
        benchmark::DoNotOptimize(factorial(10));
    }
}
BENCHMARK(BM_Factorial);

BENCHMARK_MAIN();