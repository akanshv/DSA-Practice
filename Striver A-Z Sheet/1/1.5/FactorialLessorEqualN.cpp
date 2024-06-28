// https://www.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty%255B%255D=-1&page=1&query=problemTypefunctionaldifficulty%255B%255D-1page1

class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long > factorial;
        for(long long i=1,j=2;i<=n;i*=j,j++){
            factorial.push_back(i);
        }
        return factorial;
    }

};