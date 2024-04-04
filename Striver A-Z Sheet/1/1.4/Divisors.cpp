// https://www.naukri.com/code360/problems/sum-of-all-divisors_8360720?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int sumOfAllDivisors(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += (n / i) * i;
    }
    return sum;
}

/*
int sumOfAllDivisors(int n){
    int sqrt = 1;
	while (sqrt*sqrt<=n) {
		sqrt++;
	}
	sqrt--;

	int total = 0;
	int sqrt_sum = sqrt * (sqrt+1)/2;
        for (int i = 1; i <= sqrt; i++) {
                total += i * (n / i) + n / i * (n / i + 1) / 2 - sqrt_sum;
        }
        return total;
}

// Explanation: (Use pen & copy for more clarity)

// 1    =   1

// 2    =   1   2

// 3    =   1        3

// 4    =   1   2        4

// 5    =   1                  5

// 6    =   1   2   3             6

// 7    =   1                            7

// 8    =   1   2        4                  8

// 9    =   1        3                            9

// 10  =   1   2             5                      10

//           ______x_____________________

 

// n = 10. So, sqrt = 3 (approx.)
// Frequency sum of each no. is i * n/i (till sqrt represented by x in example)
// Now the hard part, if you notice 10/1=10, 10/2=5 is forming a linear chain in reverse.
// Take its total sum: n/i * (n/i + 1)/2 that is 10+9+8+…, 5+4+3+…
// Delete the common part that is total sum till sqrt to avoid repetition.
// Total = Frequency sum till sqrt + Linear sum after sqrt - Linear sum till sqrt (for each iteration
*/
