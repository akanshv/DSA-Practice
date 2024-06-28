// https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1

class Solution {
  public:
    long long sumOfSeries(long long n) {
        if(n!=0){
            long long sum = n*n*n;
            n--;
            return (sum + sumOfSeries(n));
        }
        else{
            return 0;
        }
    }
};