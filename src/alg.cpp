// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
        int i;
    while (!(a % b) == 0) {
        i = a;
        a = b;
        b = i % b;
}
    return b;
}
