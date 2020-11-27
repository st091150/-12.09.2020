 #include <iostream>
int main()
{
    int n;
    do {
        std::cout << "Input n(n>0) :";
        std::cin >> n;
        std::cout << std::endl;
    } while (n <= 0);
    
        for (int i = 1; i <= n; ++i) {
            for (int k = n; k >= 1; --k) {
                for (int j = 1; j <= n - i; ++j) {
                    std::cout << " ";
                }
                for (int j = 1; j <= 2 * i - 1; ++j) {
                    std::cout << "*";
                }
                for (int j = n; j < 2 * n - i; ++j) {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }

        for (int i = n - 1; i >= 1; --i) {
            for (int k = n; k >= 1; --k) {
                for (int j = 1; j <= n - i; ++j) {
                    std::cout << " ";
                }
                for (int j = 1; j <= 2 * i - 1; ++j) {
                    std::cout << "*";
                }
                for (int j = n; j < 2 * n - i; ++j) {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
}

 