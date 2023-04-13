#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
void Print_Factorial(const int N) {
    if (N < 0)
        printf("Invalid input");
    else {
        int num[3000] = { 0 }, j, n = N;    //num记录各个位上的数字，全初始化为0
        num[0] = 1;                   //个位初始化为1
        int l = 0;                    //记录结果的位数
        int carry = 0;                //低位向高位的进位
        for (int i = 2; i <= n; i++) {
            for (j = 0; j <= l; j++) {
                int temp = num[j] * i + carry;
                num[j] = temp % 10;     //该位的数
                carry = temp / 10;      //进位的数
            }
            while (carry) {          //拓展结果的总位数记录进位的数，直到进位为0
                num[j++] = carry % 10;  //该位的数
                carry /= 10;          //进位的数
                l++;
            }
        }
        for (; l >= 0; l--)              //数组按照从地位到高位的方式存储结果，逆向输出结果
            printf("%d", num[l]);
    }
}
