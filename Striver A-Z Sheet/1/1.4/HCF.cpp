// https://www.naukri.com/code360/problems/hcf-and-lcm_840448?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int calcGCD(int n, int m){
    while (n != 0 && m != 0) {
        if (n > m) {
            n = n % m;
        } else {
            m = m % n;
        }
    }
    return (n == 0) ? m : n;
}