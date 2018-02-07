#ifndef PINTOS_TASK1_FIXED_POINT_H
#define PINTOS_TASK1_FIXED_POINT_H

#include "../lib/stdint.h"

#define q 14
uint32_t f = 1 << q;

#define CONVERT_N_TO_FIXED_POINT(N) N*f

#define ROUND_TOWARDS_ZERO(X) X/f

#define ROUND_TOWARDS_NEAREST_INTEGER(X) X>=0 ? (X+f/2)/f : (X-f/2)/f

#define ADD_X_AND_Y(X, Y) X+Y

#define SUBTRACT_Y_FROM_X(X, Y) X-Y

#define ADD_X_AND_N(X, N) X+N*f

#define SUBTRACT_N_FROM_X(X, N) X-N*f

#define MULTIPLY_X_BY_Y(X, Y) ((int64_t) X) * Y/f

#define MULTIPLY_X_BY_N(X, N) X*N

#define DIVIDE_X_BY_Y(X, Y) ((int64_t) X) * f/Y

#define DIVIDE_X_BY_N(X, N) X/N


#endif //PINTOS_TASK1_FIXED_POINT_H
