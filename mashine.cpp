#include <iostream>
using namespace std;

// تابع پیاده‌سازی ماشین حساب
float calculate(float num1, float num2, char op) {
    switch (op) {
    case '+': // جمع
        return num1 + num2;
    case '-': // تفریق
        return num1 - num2;
    case '*': // ضرب
        return num1 * num2;
    case '/': // تقسیم
        if (num2 != 0) // بررسی تقسیم بر صفر
            return num1 / num2;
        else {
            cout << "Error! Division by zero is undefined." << endl;
            return 0;
        }
    default: // عملگر نامعتبر
        cout << "Error! Invalid operator." << endl;
        return 0;
    }
}

int main() {
    float num1, num2;
    char op;

    // دریافت دو عدد و یک عملگر از کاربر
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    // فراخوانی تابع پیاده‌سازی ماشین حساب و چاپ نتیجه
    cout << "Result: " << calculate(num1, num2, op) << endl;

    return 0;
}
