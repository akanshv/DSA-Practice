// https://leetcode.com/problems/fibonacci-number/solutions/4586217/5-different-approach-full-explained-java-c-c-python3-rust-javascript/

class Solution {
public:
    int fib(int n) {
        if(n<=1) return n;
        return fib(n-1) + fib(n-2);
    }
};