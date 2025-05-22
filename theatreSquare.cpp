#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    // Calcula el número mínimo de losas necesarias
    long long x = (n + a - 1) / a;  // División redondeada hacia arriba para n
    long long y = (m + a - 1) / a;  // División redondeada hacia arriba para m

    // Multiplica para obtener el resultado final
    cout << x * y << endl;

    return 0;
}
