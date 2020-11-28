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

    double result = 0, a = x, eps = 1e-6;
    int k = 1;
 // a - слагаемыe 
        do {
            int l = 1;
            int o = 2*k+1;
            double p = x;
            result += a;
            for (int i = 1; i <= (2 * k + 1); ++i){//(2k+1)!
                l *= i;
        }
            for (int i = 1; i < o; ++i) {//x^(2k+1)
                p *= x;
            }
            if (k % 2 == 0 ) { //(-1)^k
                a =  p / l;
            }
            else {
                a = -p / l;
            }
            ++steps;
            ++k;
        }while (a > eps || a < -eps);
        std::cout << "Result = " << result << std::endl;
        std::cout << "Steps : " << steps << std::endl;
        std::cout << sin(x);
}
 
