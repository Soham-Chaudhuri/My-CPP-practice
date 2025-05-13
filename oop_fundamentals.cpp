// Basic Class Definition

// #include<iostream>
// using namespace std;
// class Student {
// public:
//     string name;
//     int age;
//     Student(string n, int a) : name(n), age(a) {}
//     void display() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };
// int main() {
//     Student student1("John", 20);
//     student1.display();
//     return 0;
// }

// Output:
// Name: John, Age: 20

// Function declared outside the class

// #include <iostream>
// using namespace std;
// class Student {
// public:
//     string name;
//     int age;
//     Student(string n, int a) : name(n), age(a) {}
//     void display(); // Function declaration
// };
// void Student::display() { // Function definition
//     cout << "Name: " << name << ", Age: " << age << endl;
// }
// int main() {
//     Student student1("John", 20);
//     student1.display();
//     return 0;
// }

// Output:
// Name: John, Age: 20

// Preprocessor Constants

// #include <iostream>
// using namespace std;
// #define MAX_AGE 100 // Preprocessor constant
// class Student {
// public:
//     string name;
//     int age;
//     Student(string n, int a) : name(n), age(a) {
//         if (a > MAX_AGE) {
//             cout << "Age exceeds maximum limit!" << endl;
//             age = MAX_AGE; // Set to maximum limit
//         }
//     }
//     void display() {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };
// int main() {
//     Student student1("John", 120); // Age exceeds maximum limit
//     student1.display();
//     return 0;
// }

// Output:
// Age exceeds maximum limit!

// Static Data Members and Static Member Functions

// #include <iostream>
// using namespace std;
// class student{
//     public:
//     static int roll_no;
//     string name;
//     student(string n) : name(n){};
//     static void incrementRoll(){
//         roll_no++;
//     }
//     static void displayRollNo(){
//         cout << "Roll No: " << roll_no << endl;
//     }
// };

// int student :: roll_no = 1;

// int main(){
//     student s1("John");
//     student::displayRollNo();
//     student::incrementRoll();
//     student s2("Doe");
//     student::displayRollNo();
//     student::incrementRoll();
//     return 0;
// }

// Output:
// Roll No: 1
// Roll No: 2

// Different types of constructor with constructor overloading

// #include <iostream>
// using namespace std;

// class student{
//     public:
//         string name;
//         int roll;
//         student(){
//             name = "";
//             roll = 0;
//         }
//         student(string name,int roll){
//             this->name = name;
//             this->roll = roll;
//         }
//         student(student &s){
//             this->name = s.name;
//             this->roll = s.roll;
//         }
//         void display(){
//             cout<<name<<endl;
//             cout<<roll<<endl;
//         }

// };

// int main(){
//     student s1;
//     s1.display();
//     student s2("Soham",1205);
//     s2.display();
//     student s3(s2);
//     s3.display();
//     return 0;
// }

// Output:
// ""
// 0
// Soham
// 1205
// Soham
// 1205

// Destructor

// #include <iostream>
// using namespace std;

// class MyClass {
//     int* arr;
// public:
//     MyClass(int size) {
//         arr = new int[size];  // dynamic memory allocation
//         cout << "Memory allocated" << endl;
//     }

//     ~MyClass() {
//         delete[] arr;         // freeing memory in destructor
//         cout << "Memory released" << endl;
//     }
// };

// int main(){
//     MyClass a1(10);
//     return 0;
// }

// Output:
// Memory allocated
// Memory released

// Operator Overloading

// #include <iostream>
// using namespace std;

// class Number {
//     int value;

// public:
//     Number(int v = 0) : value(v) {}

//     Number operator-() {
//         return Number(-value);
//     }

//     Number operator+(const Number& other) {
//         return Number(value + other.value);
//     }

//     friend Number operator*(const Number& a, const Number& b);

//     friend Number operator!(Number& a);

//     void display() {
//         cout << value << endl;
//     }
// };

// Number operator*(const Number& a, const Number& b) {
//     return Number(a.value * b.value);
// }

// Number operator!(Number& a) {
//     return Number(!(a.value));
//     // 101 -> 10...1 -> !1 -> 0
// }

// int main() {
//     Number n1(5), n2(3);

//     Number neg = -n1;
//     Number sum = n1 + n2;
//     Number product = n1 * n2;
//     Number logicalNot = !n1;

//     neg.display();
//     sum.display();
//     product.display();
//     logicalNot.display();

//     return 0;
// }

// Output:
// -5
// 8
// 15
// 0

// Class Type Conversion

// #include <iostream>
// using namespace std;

// class student{
// public:
//     int roll_no;
//     student(int r) :  roll_no(r) {}
//     void display(){
//         cout << "Basic to Class Roll No: " << roll_no << endl;
//     }
//     operator int(){
//         return roll_no;
//     }
// };

// class student2{
// public:
//     int roll_no;
//     student2(student &s){
//         roll_no = s.roll_no;
//     }
//     void display(){
//         cout << "Class to Class Roll No: " << roll_no << endl;
//     }
// };

// int main(){
//     int roll_no = 1205;
//     student s1 = roll_no;
//     s1.display();
//     int x = s1;
//     cout << "Class to Basic Roll No: " << x << endl;
//     student2 s2 = s1;
//     s2.display();
//     return 0;
// }

// Output:
// Basic to Class Roll No: 1205
// Class to Basic Roll No: 1205
// Class to Class Roll No: 1205

// Different types of Inheritance and use of Virtual keyword

// #include <iostream>
// using namespace std;
// class A
// {
// public:
//     void dispA()
//     {
//         cout << "class A method" << endl;
//     }
// };
// // Single Inheritance
// // Virtual to avoid ambiguity in hybrid inheritance of class F through class B and class C
// class B : virtual public A
// {
// public:
//     void dispB()
//     {
//         cout << "class B method" << endl;
//     }
// };
// // Multilevel Inheritance
// class C : public B
// {
// public:
//     void dispC()
//     {
//         cout << "class C method" << endl;
//     }
// };
// class D
// {
// public:
//     void dispD()
//     {
//         cout << "class D method" << endl;
//     }
// };
// // Multiple Inheritance
// class E : public A, public D
// {
// public:
//     void dispE()
//     {
//         cout << "class E method" << endl;
//     }
// };
// // Hybrid Inheritance
// class F : public B, public C
// {
// public:
//     void dispF()
//     {
//         cout << "class F method" << endl;
//     }
// };

// int main()
// {
//     A a;
//     B b;
//     C c;
//     D d;
//     E e;
//     F f;
//     b.dispA();
//     f.dispF();
//     f.dispA();
//     return 0;
// }

// Output:
// class A method
// class F method
// class A method

// Method Overriding

// #include <iostream>
// using namespace std;

// class Base{
// public:
//     void display() {
//         cout << "Base class display" << endl;
//     }
// };

// class Derived : public Base{
// public:
//     void display() {
//         cout << "Derived class display" << endl;
//     }
// };

// int main(){
//     Derived d;
//     d.Base::display();
//     d.display();
//     return 0;
// }

// Output:
// Base class display
// Derived class display

// Runtime Polymorphism

// #include <iostream>
// using namespace std;
// class Base {
// public:
//     virtual void display() {
//         cout << "Base class display" << endl;
//     }
// };
// class Derived1 : public Base {
// public:
//     void display() {
//         cout << "Derived class 1 display" << endl;
//     }
// };
// class Derived2 : public Base {
// public:
//     void display() {
//         cout << "Derived class 2 display" << endl;
//     }
// };
// int main() {
//     Base* b;
//     Derived1 d1;
//     b = &d1;
//     b->display();
//     Derived2 d2;
//     b = &d2;
//     b->display();
//     delete b;
//     return 0;
// }

// Output:
// Derived class 1 display
// Derived class 2 display

// Abstract Class and Pure Virtual Function

// #include <iostream>
// using namespace std;
// class Base{
// public:
//     virtual void display() = 0;
// };
// class Derived1 : public Base{
// public:
//     void display() {
//         cout << "Derived 1 class display" << endl;
//     }
// };
// class Derived2 : public Base{
// public:
//     void display() {
//         cout << "Derived 2 class display" << endl;
//     }
// };

// int main() {
//     Base* b;
//     Derived1 d1;
//     Derived2 d2;
//     b = &d1;
//     b->display();
//     b = &d2;
//     b->display();
//     return 0;
// }

// Output:
// Derived 1 class display
// Derived 2 class display

// getline() and write()

// #include <iostream>
// using namespace std;
// int main() {
//     char str[100];
//     cout << "Enter a string: ";
//     cin.getline(str, 100);
//     cout.write(str, 100);
//     cout << endl;
//     return 0;
// };

// ios function

// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     cout.fill('*');
//     cout.setf(ios::left, ios::adjustfield);
//     cout.width(10);
//     cout << "value";
//     cout.setf(ios::right, ios::adjustfield);
//     cout.width(15);
//     cout << "SQRT OF VALUE" << "\n";
//     cout.fill('.');
//     cout.precision(4);
//     cout.setf(ios::showpoint);
//     cout.setf(ios::showpos);
//     cout.setf(ios::fixed, ios::floatfield);
//     for (int i = 1; i <= 10; i++)
//     {
//         cout.setf(ios::internal, ios::adjustfield);
//         cout.width(5);
//         cout << i;
//         cout.setf(ios::right, ios::adjustfield);
//         cout.width(20);
//         cout << sqrt(i) << "\n";
//     }
//     cout.setf(ios::scientific, ios::floatfield);
//     cout << "\nSQRT(100)=" << sqrt(100) << "\n";
//     return 0;
// }

// Output:
// value*******SQRT OF VALUE
// +...1.............+1.0000
// +...2.............+1.4142
// +...3.............+1.7321
// +...4.............+2.0000
// +...5.............+2.2361
// +...6.............+2.4495
// +...7.............+2.6458
// +...8.............+2.8284
// +...9.............+3.0000
// +..10.............+3.1623

// SQRT(100)=+1.0000e+001

// Manipulators

// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main()
// {
//     cout.setf(ios::showpoint);
//     cout << setw(5) << "n"
//          << setw(15) << "Inverse of n"
//          << setw(15) << "Sum of terms\n\n";
//     double term, sum = 0;
//     for (int n = 1; n <= 10; n++)
//     {
//         term = 1.0 / float(n);
//         sum = sum + term;
//         cout << setw(5) << n
//              << setw(14) << setprecision(4)
//              << setiosflags(ios::scientific) << term
//              << setw(13) << resetiosflags(ios::scientific)
//              << sum << endl;
//     }
//     return 0;
// }

// Output:
// n   Inverse of n Sum of terms

// 1   1.0000e+000        1.000
// 2   5.0000e-001        1.500
// 3   3.3333e-001        1.833
// 4   2.5000e-001        2.083
// 5   2.0000e-001        2.283
// 6   1.6667e-001        2.450
// 7   1.4286e-001        2.593
// 8   1.2500e-001        2.718
// 9   1.1111e-001        2.829
// 10   1.0000e-001        2.929

// File Handling

// #include <iostream>
// #include <fstream>
// using namespace std;

// class student {
// public:
//     int roll_no;
//     student() {}
//     student(int r) {
//         roll_no = r;
//     }
//     void displayData() {
//         cout << "Roll No: " << roll_no << endl;
//     }
// };

// int main() {
//     student a[5] = {
//         student(101), student(102), student(103), student(104), student(105)
//     };
//     // int a[5] = {101, 102, 103, 104, 105};
//     fstream file;
//     file.open("student.dat", ios::out | ios::binary);

//     if (!file) {
//         cout << "File open failed." << endl;
//         return 1;
//     }

//     for (int i = 0; i < 5; i++) {
//         file.write((char*)&a[i], sizeof(a[i]));
//     }

//     file.close();
//     cout << "Data written successfully to student.dat\n";

//     file.open("student.dat", ios::in | ios::binary);
//     if (!file) {
//         cout << "Failed to open file for reading." << endl;
//         return 1;
//     }

//     student b;
//     // int b;
//     cout << "\nReading data from student.dat:\n";
//     while (file.read((char*)&b, sizeof(b))) {
//         b.displayData();
//     }

//     file.close();
//     return 0;
// }

// Output:
// Data written successfully to student.dat

// Reading data from student.dat:
// Roll No: 101
// Roll No: 102
// Roll No: 103
// Roll No: 104
// Roll No: 105

// File to File Copying

// #include<iostream>
// #include<fstream>
// using namespace std;

// int main() {
//     fstream f1, f2;

//     f1.open("abc.txt", ios::in);
//     f2.open("xyz.txt", ios::out);

//     if (!f1) {
//         cout << "Error opening abc.txt" << endl;
//         return 1;
//     }

//     if (!f2) {
//         cout << "Error opening xyz.txt" << endl;
//         return 1;
//     }

//     char ch;
//     while (f1.get(ch)) {
//         if (ch < 'A' || ch > 'Z') {
//             f2.put(ch);
//         }
//     }

//     f1.close();
//     f2.close();

//     cout << "Data processed and written to xyz.txt successfully." << endl;

//     return 0;
// }

// STL

// #include <iostream>
// using namespace std;

// template <typename T>
// void display(T value){
//     cout << "Value: " << value << endl;
// }

// template <typename T1, typename T2>
// void display(T1 value1, T2 value2){
//     cout << "Value 1: " << value1 << ", Value 2: " << value2 << endl;
// }

// template <typename T>
// class ds{
//     T a,b,c;
//     public:
//     ds(T x, T y, T z) : a(x), b(y), c(z) {}
//     void display(){
//         cout << "a: " << a << ", b: " << b << ", c: " << c << endl;
//     }
// };

// int main(){
//     display(5); // int
//     display(3.14); // double
//     display("Hello"); // string
//     display(5, 3.14); // int and double
//     display("Hello", 5); // string and int
//     ds<int> obj(1, 2, 3);
//     obj.display();
//     return 0;
// }

// Output:
// Value: 5
// Value: 3.14
// Value: Hello
// Value 1: 5, Value 2: 3.14
// Value 1: Hello, Value 2: 5
// a: 1, b: 2, c: 3

// Division by Zero Exception Handling

// #include <iostream>
// #include <exception>
// using namespace std;

// void divide(double x, double y)
// {
//     cout << "Inside function \n";
//     try
//     {
//         if (y == 0)
//             throw y;
//         else
//             cout << "Division = " << x / y << "\n";
//     }
//     catch (double)
//     {
//         cout << "caught double inside the function \n";
//         throw;
//     }
//     cout << "End of function \n\n";
// }

// int main()
// {
//     // int a, b;
//     // cout << "Enter two numbers: ";
//     // cin >> a >> b;
//     // try
//     // {
//     //     if (b != 0)
//     //         cout << "Division: " << a / b << endl;
//     //     else
//     //         throw(b);
//     // }
//     // catch (int x)
//     // {
//     //     cout << "Exception: Division by :" << x << endl;
//     // }

//     // cout << "Finally block executed." << endl;

//     cout << "Inside main\n";
//     try
//     {
//         divide(10.5, 2.5);
//         divide(4, 0);
//     }
//     catch (double)
//     {
//         cout << "caught double inside main \n";
//     }
//     cout << "End of main\n";
//     return 0;
// }

// Output:
// Inside main
// Inside function 
// Division = 4.2
// End of function 

// Inside function 
// caught double inside the function 
// caught double inside main 
// End of main
