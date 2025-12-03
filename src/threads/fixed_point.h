#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H
#include <stdint.h>
#define FP_F (1 << 14)
static inline int
fp_int_to_fp (int n){
  return n * FP_F;
}
static inline int
fp_to_int_zero (int x){
  return x / FP_F;
}
static inline int
fp_to_int_nearest (int x){
  if (x >= 0)
    return (x + FP_F / 2) / FP_F;
  else
    return (x - FP_F / 2) / FP_F;
}
static inline int
fp_add (int x, int y){
  return x + y;
}
static inline int
fp_sub (int x, int y){
  return x - y;
}
static inline int
fp_add_int (int x, int n){
  return x + n * FP_F;
}
static inline int
fp_sub_int (int x, int n){
  return x - n * FP_F;
}
static inline int
fp_mul (int x, int y){
  return (int) (((int64_t) x) * y / FP_F);
}
static inline int
fp_div (int x, int y){
  return (int) (((int64_t) x) * FP_F / y);
}
static inline int
fp_mul_int (int x, int n){
  return x * n;
}
static inline int
fp_div_int (int x, int n){
  return x / n;
}
#endif
