// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    while ( a!= b) {
       if (a > b)
            a -= b;
        if (a < b)
            b -= a;
    }
    return a;
}
