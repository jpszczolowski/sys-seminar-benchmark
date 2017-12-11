#include <benchmark/benchmark.h>
#include <vector>

static void BM_create(benchmark::State &state) {
    for (auto _ : state) {
        std::vector<int> v;
        (void)v;
    }
}

BENCHMARK(BM_create);

static void BM_pb(benchmark::State &state) {
    for (auto _ : state) {
        std::vector<int> v;
        v.push_back(42);
    }
}

BENCHMARK(BM_pb);

BENCHMARK_MAIN();