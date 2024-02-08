#include <iostream>
using namespace std;
int main()
{
    int n, cake_price, price;
    cin >> n >> cake_price >> price;
    cout << ((n / 8) * cake_price) + ((n % 8) * price);
}