// https://www.naukri.com/code360/problems/alpha-triangle_6581429?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void alphaTriangle(int n) {
    int ch='A' + n - 1;
	for (int i=0; i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<char(ch-j)<<" ";
		}
		cout<<endl;
	}	
}