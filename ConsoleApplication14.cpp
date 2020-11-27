 #include <iostream>
 #include<cmath>
int main()
{
    double x;
    int n,steps = 0;
    std::cout << "Input x: ";
    std::cin >> x;
   
    do {
        std::cout << "Input n :";
        std::cin >> n;
    } while (n <= 0);

        double result = 0,a = x,eps = 1e-6, k = 0;;
        while (a > eps || a < -eps) {
            result += a;
            a *= (-1) * x * x / (2 * k + 2) / (2 * k + 3);
            ++steps;
            ++k;
        }
        std::cout << "Result = " << result << std::endl;
        std::cout << "Steps : " << steps << std::endl;
        std::cout << "sin(x) = " << sin(x);
}
 