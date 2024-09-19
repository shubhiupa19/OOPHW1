#include <iostream>
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
      
    }
    Complex operator/(const Complex& other) const {
      // To DO
    }
    Complex conjugate() {
      // To DO
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
