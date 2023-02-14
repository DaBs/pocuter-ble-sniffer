#include <Pocuter.h>

static Pocuter p;

Pocuter* setupPocuter() {
    p.begin();

    return &p;
}

Pocuter* pocuterInstance() {
    return &p;
}