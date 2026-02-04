#include <iostream>
#include <cmath>

int main() {
    double eps;
    std::cout << "ε = ";
    std::cin >> eps;
    
    if (eps <= 0 || eps >= 1) {
        std::cout << "Ошибка: неверное ε" << std::endl;
        return 0;
    }
    
    double S = 0;
    int k = 1;
    int n;
    
    while (1) {
        double a = 1.0 / (k * (k + 2));
        S = S + a;
        
        if (fabs(S - 0.75) < eps) {
            n = k;
            break;
        }
        
        k++;
    }
    
    std::cout << "S = " << S << std::endl;
    std::cout << "n = " << n << std::endl;
    
    return 0;
}
