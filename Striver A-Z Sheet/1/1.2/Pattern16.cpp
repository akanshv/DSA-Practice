// https://www.naukri.com/code360/problems/alpha-ramp_6581888?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void alphaRamp(int n) {
	for (int i='A'; i<'A'+n;i++){
		for(int j='A';j<=i;j++){
			cout<<char(i)<<" ";
		}
		cout<<endl;
	}	
}