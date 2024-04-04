// https://www.naukri.com/code360/problems/check-armstrong_589?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

bool checkArmstrong(int n){
	string num =to_string(n);
	int p=num.length(),sum=0,m=n;

	while(m>0){
		sum= sum + pow(m%10,p);
		m=m/10;
	}

	return (sum!=n?false:true);
}