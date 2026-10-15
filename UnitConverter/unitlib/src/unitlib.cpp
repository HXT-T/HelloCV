#include "unitlib.h"

double cToF(double c) {
    return c * 9.0 / 5.0 + 32;
}

double fToC(double f) {
    return (f - 32) * 5.0 / 9.0;
}

double mToFt(double m) {
    return m * 3.28084;
}

double ftToM(double ft) {
    return ft / 3.28084;
}

double kgToLb(double kg) {
    return kg * 2.20462;
}

double lbToKg(double lb) {
    return lb / 2.20462;
}