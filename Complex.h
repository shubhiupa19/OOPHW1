#include <iostream>
#include <cmath>
using namespace std;
class Complex{
  private:
    float real;
    float imaginary;
  public:
    Complex(){
      real = 0;
      imaginary = 0;
    }
    Complex(float r, float i){
      real = r;
      imaginary = i;
    }
    Complex operator+(Complex rhs){
      return Complex(real + rhs.real, imaginary + rhs.imaginary);
      
    }
    Complex operator-(Complex rhs){
      return Complex(real - rhs.real, imaginary - rhs.imaginary);
    }
    Complex operator*(const Complex& other) const {
      return Complex((real * other.real) - (imaginary * other.imaginary), (real*other.imaginary) + (imaginary*other.real));
      
    }
    Complex operator/(const Complex& other) const {
      float result_real = ((real * other.real) + (imaginary * other.imaginary)) / (pow(other.real,2) + pow(other.imaginary,2));
      float result_imaginary = ((imaginary * other.real) - (real * other.imaginary)) / (pow(other.real,2) + pow(other.imaginary,2));
      return Complex(result_real, result_imaginary);
      
    }
    Complex conjugate() {
      return Complex(real, -1 * imaginary);
    }
    void set_real(float r){
      real = r;
    }
    void set_imaginary(float i){
      imaginary = i;
    }
    float get_real(){
      return real;
    }
    float get_imaginary(){
      return imaginary;
    }
};
