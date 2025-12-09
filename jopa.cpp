#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


template <typename T>
T calculate_expression(T a_val, T b_val) {
    T term_2a = 2.0 * a_val;
    T sum_2a_b = term_2a + b_val;
    T term1 = sum_2a_b * sum_2a_b; 
    T term2 = sum_2a_b * sum_2a_b; 
    T numerator = term1 - term2;
    T denominator = 3.0 * a_val * b_val;
    if (denominator == 0.0) {
        return numeric_limits<T>::quiet_NaN(); 
    }

    return numerator / denominator;
}

int main() {
    cout << fixed << setprecision(20);
    cout << "Обчислення з float (Одинарна точність)" << endl;
    float a_float = 2000.0f;
    float b_float = 0.0002f;
    float result_float = calculate_expression(a_float, b_float);
    
    cout << "A (float): " << a_float << endl;
    cout << "B (float): " << b_float << endl;
    cout << "Результат float: " << result_float << endl;

    cout << "----------------------------------------------" << endl;
    cout << "Обчислення з double (Подвійна точність)" << endl;
    double a_double = 2000.0;
    double b_double = 0.0002;
    
    double result_double = calculate_expression(a_double, b_double);
    
    cout << "A (double): " << a_double << endl;
    cout << "B (double): " << b_double << endl;
    cout << "Результат double: " << result_double << endl;
    
    cout << "----------------------------------------------" << endl;
    
    cout << "Порівняння результатів" << endl;
    cout << "Очікуваний точний результат: 0" << endl;
    
    cout << "Різниця між float та 0: " << abs(result_float) << endl;
    cout << "Різниця між double та 0: " << abs(result_double) << endl;

    return 0;
}