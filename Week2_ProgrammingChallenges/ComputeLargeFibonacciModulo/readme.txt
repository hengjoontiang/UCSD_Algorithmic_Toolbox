long long get_pisano_period(long long m) {
    long long a = 0, b = 1, c = a + b;
    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }
}


problem with input
2 10
or 10 2


Lower cases, return manually


intermediate cases
100 100000

Check allocation of memory
use std::array static allocation in the beginning , also control the maxsize

99 999 999 999 999 999 2
