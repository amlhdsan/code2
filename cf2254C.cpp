/*

**This is the easy version of the problem. In this version, you are only asked to determine whether string $a$ can be transformed into string $b$.**

Yousef has given you two binary strings, $a$ and $b$, of the same length $n$.

You are allowed to perform any of the following operations:

-   Choose a substring$^{\text{∗}}$ in $a$ equal to $\texttt{001}$ and replace it with $\texttt{100}$, or vice versa (i.e., $\texttt{001} \rightarrow \texttt{100}$ or $\texttt{100} \rightarrow \texttt {001}$).
-   Choose a substring in $a$ equal to $\texttt{110}$ and replace it with $\texttt{011}$, or vice versa (i.e., $\texttt{011} \rightarrow \texttt{110}$ or $\texttt{110} \rightarrow \texttt {011}$).

Your task is to determine whether it is possible to transform string $a$ into string $b$ using a finite number of operations.

$^{\text{∗}}$A string $a$ is a substring of a string $b$ if $a$ can be obtained from $b$ by deletion of several (possibly zero or all) characters from the beginning and several (possibly zero or all) characters from the end.

**Input**

The first line contains a single integer $t$ ($1 \le t \le 10^4$) — the number of test cases.

The first line of each test case contains a single integer $n$ ($1 \le n \le 2 \cdot 10^5$) — the length of each string.

The second line of each test case contains a binary string $a$ ($|a| = n$), consisting of only characters $\texttt{0}$ and/or $\texttt{1}$.

The third line of each test case contains a binary string $b$ ($|b| = n$), consisting of only characters $\texttt{0}$ and/or $\texttt{1}$.

It is guaranteed that the sum of $n$ over all test cases does not exceed $2 \cdot 10^5$.

**Output**

For each test case, output "YES" if the string $a$ can be transformed into string $b$ using a finite number of operations, and "NO" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

*/


#include <bits/stdc++.h>
using namespace std;

inline int read() {
    int x = 0, f = 1;
    char ch = getchar();
    while(ch < '0' || ch > '9') {
        if(ch == '-') {
            f = -1;
        }
        ch = getchar();
    }
    while(ch >= '0' && ch <= '9') {
        x = (x << 3) + (x << 1) + (ch ^ 48);
        ch = getchar();
    }
    return x * f;
}

inline void write(int x) {
    if(x < 0) {
        putchar('-');
        x = -x;
    }
    if(x > 9)
        write(x / 10);
    putchar(x % 10 + '0');
}

inline void writeln(int x) {
    write(x);
    putchar('\n');
}

int main() {
    

    return 0;
}