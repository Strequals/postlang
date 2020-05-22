#include <iostream>

typedef unsigned char byte;

namespace postlang_stdio {
byte cin() {
	byte x;
	std::cin >> x;
	return x;
}

void cout(byte b) {
	std::cout << b;
}

void cerr(byte b) {
	std::cerr << b;
}

long cin_i() {
	long x;
	std::cin >> x;
	return x;
}

long cout_i(long i) {
	std::cout << i;
}

long cerr_i(long i) {
	std::cerr << i;
}

long long cin_l() {
	long long x;
	std::cin >> x;
	return x;
}

void cout_l(long long l) {
	std::cout << l;
}

void cerr_l(long long l) {
	std::cerr << l;
}

float cin_f() {
	float x;
	std::cin >> x;
	return x;
}

void cout_f(float f) {
	std::cout << f;
}

void cerr_f(float f) {
	std::cerr << f;
}

double cin_d() {
	double x;
	std::cin >> x;
	return x;
}

void cout_d(double d) {
	std::cout << d;
}

void cerr_d(double d) {
	std::cerr << d;
}
}
