#include "arrayqueue.h"

int main() {
    AQueue P;
    P.AddQ(1);
    P.AddQ(2);
    P.AddQ(3);
    P.AddQ(4);
    P.AddQ(5);
    int x = P.DelQ();
    x = P.DelQ();
    x = P.DelQ();
    x = P.DelQ();
    x = P.DelQ();
    P.DisQ();
    return 0;
}