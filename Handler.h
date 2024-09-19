#include <iostream>
using namespace std;
class Handler{
    public:
        static int print_and_get_choices(){
            int choice;
            cout << "Please choose one of the following options:" << endl;
            cout << "(1) Add" << endl;
            cout << "(2) Subtract" << endl;
            cout << "(3) Multiply" << endl;
            cout << "(4) Divide " << endl;
            cout << "(5) Find conjugate" << endl; 
            cout << "(6) Quit" << endl;
            cin >> choice;
            return choice;
        }
        static void add_two_complex_numbers(){
            string num1, num2;
            cout << "Enter the first number without spaces (for example: 2+3i): ";
            cin >> num1;
            cout << "Enter the second number without spaces (for example: 2+3i): ";
            cin >> num2;
            int firstNum = 0, secondNum = 0;
            Complex c1, c2;
            for (int i = 0; i < num1.length(); i++)
            {
                // keep iterating until we reach the plus sign, then the first half is the real numbers and the second half after the plus sign is the imaginary number
                if (num1[i] == '+')
                {
                    c1.set_real(stoi(num1.substr(0, i)));
                    c1.set_imaginary( stoi(num1.substr(i+1, num1.length()-1)));

                }
                
            }
            for (int i = 0; i < num2.length(); i++)
            {
                // keep iterating until we reach the plus sign, then the first half is the real numbers and the second half after the plus sign is the imaginary number
                if (num2[i] == '+')
                {
                    c2.set_real(stoi(num2.substr(0, i)));
                    c2.set_imaginary(stoi(num2.substr(i+1, num2.length()-1)));

                }
            }
          
            Complex result = c1 + c2;

            cout << "the sum is:" << result.get_real() << "+" << result.get_imaginary() << "i" << endl;
            
        }
        static void subtract_two_complex_numbers(){
            string num1, num2;
            
            cout << "Enter the first number without spaces (for example: 2+3i): ";
            cin >> num1;
            cout << "Enter the second number without spaces (for example: 2+3i): ";
            cin >> num2;
            Complex c1, c2;

            for (int i = 0; i < num1.length(); i++)
            {
                // keep iterating until we reach the plus sign, then the first half is the real numbers and the second half after the plus sign is the imaginary number
                if (num1[i] == '+')
                {
                    c1.set_real(stoi(num1.substr(0, i)));
                    c1.set_imaginary(stoi(num1.substr(i+1, num1.length()-1)));
                }
                
            }
            for (int i = 0; i < num2.length(); i++)
            {
                // keep iterating until we reach the plus sign, then the first half is the real numbers and the second half after the plus sign is the imaginary number
                if (num2[i] == '+')
                {
                  //subtract the real numbers and the imaginary numbers from the first number
                   c2.set_real(stoi(num2.substr(0, i)));
                   c2.set_imaginary(stoi(num2.substr(i+1, num2.length()-1)));
                }
            }
            Complex result = c1 - c2;
            if (result.get_imaginary() < 0)
            {
                cout << "the difference is:" << result.get_real() << "-" << result.get_imaginary() << "i" << endl;
            }
            else
            {
                cout << "the difference is:" << result.get_real() << "+" << result.get_imaginary() << "i" << endl;
            
            }
        }
        static void multiply_two_complex_numbers(){
            // To DOndl;
        }
        static void divide_two_complex_numbers(){
            // To DO
        }
        static void find_conjugate_of_a_complex_number(){
            // To DO
        }
};
