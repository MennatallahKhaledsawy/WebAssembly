#include <emscripten/emscripten.h>

extern "C" {
    EMSCRIPTEN_KEEPALIVE
    double sum_of_squares(int n) {
        double total = 0;
        for (int i = 1; i <= n; i++) {
            total += (double)i * i;
        }
        return total;
    }
}