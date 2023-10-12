#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
class UnusualAdd {
public:
    int addAB(int A, int B) {
        // write code here
        if (A == 0)
            return B;
        if (B == 0)
            return A;
        int a = A ^ B;
        int b = (A & B) << 1;
        return addAB(a, b);
    }
};