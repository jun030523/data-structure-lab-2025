#include "sparsepoly.hpp"

int main() {
    SparsePoly A, B, C;

    cout << "다항식 A 입력:" << endl;
    A.read();
    A.display("Poly A:");

    cout << "다항식 B 입력:" << endl;
    B.read();
    B.display("Poly B:");

    cout << "A와 B를 더한 결과 C:" << endl;
    C = A;
    C.add(B);
    C.display("Poly C:");

    return 0;
}