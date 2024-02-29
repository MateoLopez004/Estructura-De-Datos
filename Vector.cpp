#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector(void) {
	vec[10] = 0;
	n = 0;
	
}//constructor
Vector::~Vector(void) {
}// destructor
void Vector::set_n(int _n) {
	n = _n;
	
}

int Vector::get_n() {
	return n;

}
void Vector::cargarVector(int vec[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "vec[" << i << "] =";
		cin >> vec[i];
	}
}//metodos
void Vector::mostrarVector(int[], int n){
	for (int i = 0; i < n; i++) {
		cout << vec[i] << ", ";
	}
	cout << endl;
}



void Vector::ordenarVecto(int[], int n) {
	int aux;
	for (int i = 0; i < (n - 1); i++) {
		for (int j = i; j < n; j++) {
			if (vec[i] > vec[j]) {
				aux = vec[i];
				vec[i] = vec[j];
				vec[j] = aux;
			}
		}
	}
}
