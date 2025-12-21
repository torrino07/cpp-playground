
#include "math.hpp"
#include <numeric>

int add(int a, int b) { return a + b; }
int sum(const std::vector<int>& xs) {
    return std::accumulate(xs.begin(), xs.end(), 0);
}