#include <iostream>
#include <vector>
#include <string>

struct Employee {
    int id;
    std::string name;
    std::string position;
    double salary;
};

void displayEmployees(const std::vector<Employee>& employees) {
    for (const auto& emp : employees) {
        std::cout << "ID: " << emp.id 
                << ", الاسم: " << emp.name 
                 << ", الوظيفة: " << emp.position 
                  << ", الراتب: $" << emp.salary << std::endl;
    }
}

int main() {
    std::vector<Employee> employees(10);

    // إدخال بيانات الموظفين
    for (int i = 0; i < 10; ++i) {
        std::cout << "ادخل بيانات الموظف " << i + 1 << std::endl;
        std::cout << "ID: ";
        std::cin >> employees[i].id;
        std::cin.ignore(); // لتجاهل الإدخال السابق
        std::cout << "الاسم: ";
        std::getline(std::cin, employees[i].name);
        std::cout << "الوظيفة: ";
        std::getline(std::cin, employees[i].position);
        std::cout << "الراتب: ";
        std::cin >> employees[i].salary;
    }

    std::cout << "\nتفاصيل الموظفين:\n";
    displayEmployees(employees);

    return 0;
}