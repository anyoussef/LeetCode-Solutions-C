bool isPalindrome(int x){

    int n, d, k = 0;

    if (x < 0) {
        return false;
    }

    n = x;
    while(n) {
        d = n % 10;
        if (k > (0x7fffffff - d) / 10) {
            return false;
        }
        k = k* 10 + d;
        n = n / 10;
    }

    return (k == x);
}