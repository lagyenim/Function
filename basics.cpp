#include <iostream>
using namespace std;

int product(int p1, int p2, int p3);
int calc (int A1, int A2, int A3,int B1, int B2, int B3);
int sum (int v1, int v2, int v3);

int main() {
    int valueA=12, valueB=7, valueC=23;
    int valueI=2, valueJ=4, valueK=6;
    int x, y, z;

    x = sum(valueA, valueB, valueC);
    y = product(valueI, valueJ, valueK);
    z = calc(valueI, valueJ, valueK, valueA, valueB, valueC);


    cout << "Sum = " << x << endl;
    cout << "Product = " << y << endl;
    cout << "Calculate = " << z << endl;


    return 0;

}
int sum (int v1, int v2, int v3) {
    int total;
    total = v1 + v2 + v3;
    return total;

}

int calc (int A1, int A2, int A3,int B1, int B2, int B3){

    int answer;
    answer = product(A1,A2,A3) - sum(B1,B2,B3);
    return answer;
}
int product(int p1, int p2, int p3) {
    int prod;
    prod = p1 * p2 * p3;
    return prod;
}

