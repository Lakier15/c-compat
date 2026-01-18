#ifndef _MATH_H
#define _MATH_H

float fabsf(float x);
double fabs(double x);

double sqrt(double x);
float sqrtf(float x);

float fminf(float x, float y);
double fmin(double x, double y);

float fmaxf(float x, float y);
double fmax(double x, double y);

double ceil(double x);
float ceilf(float x);

double floor(double x);
float floorf(float x);

double trunc(double x);
float truncf(float x);

double rint(double x);
float rintf(float x);

bool isnan_f32(float x);
bool isnan_f64(double x);
#define isnan(x)  _Generic((x), float:  isnan_f32, double: isnan_f64)(x)

bool signbit_f32(float x);
bool signbit_f64(double x);
#define signbit(x) _Generic((x), float: signbit_f32, double: signbit_f64)(x)


#endif