#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

int main() {
    double дійсне_число = 9.21;
    double ціла_частина_double = std::floor(дійсне_число);
    int ціла_частина_int = static_cast<int>(ціла_частина_double);
    double дробова_частина = дійсне_число - ціла_частина_double;
    // Побудова речення безпосередньо у потік std::cout
    std::cout << "Результат (речення): \"";
    std::cout << ціла_частина_int;
    std::cout << " студентів групи ІТ-21 отримали по ";
    std::cout << ціла_частина_int;
    std::cout << " балів за контрольну з інформатики\"" << std::endl;
    std::cout << "\n--- Інформація про число ---" << std::endl;
    std::cout << "Дане число: " << дійсне_число << std::endl;
    std::cout << "Ціла частина (int): " << ціла_частина_int << std::endl;
    std::cout << "Дробова частина: " << std::fixed << std::setprecision(2) << дробова_частина << std::endl;

    return 0;
}