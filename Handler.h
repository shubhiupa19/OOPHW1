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
            cout << "Enter the first number without spaces (for example: 2+i3): ";
            cin >> num1;
            cout << "Enter the second number without spaces (for example: 2+i3): ";
            cin >> num2;
            int firstNum = 0, secondNum = 0;
            Complex c1, c2;
            for (int i = 0; i < num1.length(); i++)
            {
                // keep iterating until we reach the plus or minus sign, then the first half is the real numbers and the second half after the plus sign is the imaginary number
                if (num1[i] == '+' || num1[i] == '-')
                    {
                
                        c1.set_real(stoi(num1.substr(0, i)));
                        if(num1[i] == '-')
                        {
                           
                            if(num1[num1.length()-1] == 'i')
                            {
                               
                                c1.set_imaginary(-1);
                            }
                            else 
                            {
                            c1.set_imaginary(-1 * stoi(num1.substr(i+2, num1.length())));
                            }
                        }
                        else if (num1[i] == '+')
                        {
                            
                            if(num1[num1.length()-1] == 'i')
                            {
                                c1.set_imaginary(1);
                                
                            }
                            else
                            {
                                
                                c1.set_imaginary( stoi(num1.substr(i+2, num1.length())));
                            }
                        }
                        

                    }
                
            }
            for (int i = 0; i < num2.length(); i++)
            {
                // keep iterating until we reach the plus sign, then the first half is the real numbers and the second half after the plus sign is the imaginary number
                if (num2[i] == '+' || num2[i] == '-')
                    {
                        c2.set_real(stoi(num2.substr(0, i)));
                        if(num2[i] == '-')
                        {
                            if(num2[num2.length()-1] == 'i')
                            {
                                c2.set_imaginary(-1);
                            }
                            else {
                                c2.set_imaginary(-1 * stoi(num2.substr(i+2, num2.length())));
                            }
                           
                        }
                        else if (num2[i] == '+')
                        {
                            if(num2[num2.length()-1] == 'i')
                            {
                                c2.set_imaginary(1);
                            }
                            else {
                                c2.set_imaginary(stoi(num2.substr(i+2, num2.length())));
                            }
                            
                        }

                    }
            }

            Complex result = c1.operator+(c2);

            cout << "the sum is:" << result.get_real() << "+" << result.get_imaginary() << "i" << endl;
            
        }
        static void subtract_two_complex_numbers(){
            string num1, num2;
            
            cout << "Enter the first number without spaces (for example: 2+i3): ";
            cin >> num1;
            cout << "Enter the second number without spaces (for example: 2+i3): ";
            cin >> num2;
            Complex c1, c2;

            for (int i = 0; i < num1.length(); i++)
            {
                // keep iterating until we reach the plus sign, then the first half is the real numbers and the second half after the plus sign is the imaginary number
                if (num1[i] == '+' || num1[i] == '-')
                    {
                        c1.set_real(stoi(num1.substr(0, i)));
                        if(num1[i] == '-')
                        {
                            if(num1[num1.length()-1] == 'i')
                            {
                                c1.set_imaginary(-1);
                            }
                            else {
                                c1.set_imaginary(-1 * stoi(num1.substr(i+2, num1.length())));
                            }
                        }
                        else if (num1[i] == '+')
                        {
                           if(num1[num1.length()-1] == 'i')
                            {
                                c1.set_imaginary(1);
                            }
                            else 
                            {
                                c1.set_imaginary(stoi(num1.substr(i+2, num1.length())));
                            }
                        }
                    }
                
            }
            for (int i = 0; i < num2.length(); i++)
            {
                // keep iterating until we reach the plus sign, then the first half is the real numbers and the second half after the plus sign is the imaginary number
                if (num2[i] == '+' || num2[i] == '-')
                    {
                    //subtract the real numbers and the imaginary numbers from the first number
                    c2.set_real(stoi(num2.substr(0, i)));
                    if(num2[i] == '-')
                        {
                            if(num2[num2.length()-1] == 'i')
                            {
                                c2.set_imaginary(-1);
                            }
                            else {
                                c2.set_imaginary(-1 * stoi(num2.substr(i+2, num2.length())));
                            }
                            
                        }
                    else if (num2[i] == '+')
                        {
                            if(num2[num2.length()-1] == 'i')
                            {
                                c2.set_imaginary(1);
                            }
                            else {
                                c2.set_imaginary(stoi(num2.substr(i+2, num2.length())));
                            }
                        }
                    }
            }
            Complex result = c1.operator-(c2);
            if (result.get_imaginary() < 0)
                {
                    cout << "the difference is:" << result.get_real() << "-" << -1 * result.get_imaginary() << "i" << endl;
                }
            else
                {
                    cout << "the difference is:" << result.get_real() << "+" << result.get_imaginary() << "i" << endl;
                
                }
        }
        static void multiply_two_complex_numbers(){
            string num1, num2;
            cout << "Enter the first number without spaces (for example: 2+i3): ";
            cin >> num1;
            cout << "Enter the second number without spaces (for example: 2+i3): ";
            cin >> num2;
            Complex c1, c2;

            for (int i = 0; i < num1.length(); i++)
            {
                // keep iterating until we reach the plus sign, then the first half is the real numbers and the second half after the plus sign is the imaginary number
                if (num1[i] == '+' || num1[i] == '-')
                    {
                        c1.set_real(stoi(num1.substr(0, i)));
                        if(num1[i] == '-')
                        {
                            if (num1[num1.length()-1] == 'i')
                            {
                                c1.set_imaginary(-1);
                            }
                            else {
                             c1.set_imaginary(-1 * stoi(num1.substr(i+2, num1.length())));
                            }
                        }
                        else if (num1[i] == '+')
                        {
                            if (num1.length()-1 == 'i')
                            {
                                c1.set_imaginary(1);
                            }
                            else {
                            c1.set_imaginary( stoi(num1.substr(i+2, num1.length())));
                            }
                        }
                    }
                
            }
            for (int i = 0; i < num2.length(); i++)
            {
                // keep iterating until we reach the plus sign, then the first half is the real numbers and the second half after the plus sign is the imaginary number
                if (num2[i] == '+' || num2[i] == '-')
                    {
                    //subtract the real numbers and the imaginary numbers from the first number
                        c2.set_real(stoi(num2.substr(0, i)));
                        if(num2[i] == '-')
                            {
                                if(num2[num2.length()-1] == 'i')
                                {
                                    c2.set_imaginary(-1);
                                }
                                else {
                                    c2.set_imaginary(-1 * stoi(num2.substr(i+2, num2.length())));
                                }
                            }
                        else if (num2[i] == '+')
                            {
                                if(num2[num2.length()-1] == 'i')
                                {
                                    c2.set_imaginary(1);
                                }
                                else {
                                    c2.set_imaginary(stoi(num2.substr(i+2, num2.length())));
                                }
                            }
                    }
            }
            Complex result = c1.operator*(c2);
            if (result.get_imaginary() < 0)
                {
                    cout << "the product is:" << result.get_real() << "-i" << -1 * result.get_imaginary() << endl;
                }
            else
                {
                    cout << "the product is:" << result.get_real() << "+" << result.get_imaginary() << "i" << endl;
                
                }

        }
        static void divide_two_complex_numbers(){
            string num1, num2;
            cout << "Enter the first number without spaces (for example: 2+i3): ";
            cin >> num1;
            cout << "Enter the second number without spaces (for example: 2+i3): ";
            cin >> num2;
            Complex c1, c2;

            for (int i = 0; i < num1.length(); i++)
            {
                // keep iterating until we reach the plus sign, then the first half is the real numbers and the second half after the plus sign is the imaginary number
                if (num1[i] == '+' || num1[i] == '-')
                    {
                        c1.set_real(stoi(num1.substr(0, i)));
                        if(num1[i] == '-')
                        {
                            if(num1[num1.length()-1] == 'i')
                            {
                                c1.set_imaginary(-1);
                            }
                            else {
                                c1.set_imaginary(-1 * stoi(num1.substr(i+2, num1.length())));
                            }
                        }
                        else if (num1[i] == '+')
                        {
                            if(num1[num1.length()-1] == 'i')
                            {
                               c1.set_imaginary(1);
                            }
                            else {
                                c1.set_imaginary(stoi(num1.substr(i+2, num1.length())));
                            }
                            
                        }
                    }
                
            }
            for (int i = 0; i < num2.length(); i++)
            {
               
                // keep iterating until we reach the plus sign, then the first half is the real numbers and the second half after the plus sign is the imaginary number
                if (num2[i] == '+' || num2[i] == '-')
                    {
                    //subtract the real numbers and the imaginary numbers from the first number
                    c2.set_real(stoi(num2.substr(0, i)));
                    if (num2[i] == '+')
                        {
                           
                            if(num2[num2.length()-1] == 'i')
                            {
                               
                                c2.set_imaginary(1);
                            }
                            else 
                            {
                                c2.set_imaginary(stoi(num2.substr(i+2, num2.length())));
                            }
                        }
                    else if(num2[i] == '-')
                        {
                            if(num2[num2.length()-1] == 'i')
                            {
                                c2.set_imaginary(-1);
                            }
                            else 
                            {
                                c2.set_imaginary(-1 * stoi(num2.substr(i+2, num2.length())));
                            }

                        }
                    }
            }
        
             Complex result = c1.operator/(c2);
            if (result.get_imaginary() < 0)   
                {
                    cout << "the quotient is:" << result.get_real() << "-" << -1 * result.get_imaginary() << "i" << endl;
                }
            else
                {
                    cout << "the quotient is:" << result.get_real() << "+" << result.get_imaginary() << "i" << endl;
                
                }

            
        }
        
        static void find_conjugate_of_a_complex_number(){
            Complex c1;
            string num1;
            cout << "Enter the number without spaces (for example: 2+i3): ";
            cin >> num1;

            for (int i = 0; i < num1.length(); i++)
            {
                //keep iterating until we reach the plus or minus sign, then the first half is the real numbers and the second half after the plus sign is the imaginary number
                if (num1[i] == '+' || num1[i] == '-')
                {
                    c1.set_real(stoi(num1.substr(0, i)));
                    if(num1[i] == '-')
                    {
                        if(num1[num1.length()-1] == 'i')
                        {
                            c1.set_imaginary(-1);
                        }
                        else 
                        {
                        c1.set_imaginary(-1 * stoi(num1.substr(i+2, num1.length())));
                        }
                    }
                    else
                    {
                        if(num1[num1.length()-1] == 'i')
                        {
                            c1.set_imaginary(1);
                        }
                        else
                        {
                     c1.set_imaginary(stoi(num1.substr(i+2, num1.length())));
                        }
                    }
                }
            }
            Complex result = c1.conjugate();
            if(result.get_imaginary() < 0)
            {
                cout << "the conjugate is: " << result.get_real() << "-i" << -1 * result.get_imaginary() << endl;
            }
            else
            {
                cout << "the conjugate is: " << result.get_real() << "+" <<  "i" << result.get_imaginary() << endl;
            }
        }


};