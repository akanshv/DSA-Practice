// https://www.naukri.com/code360/problems/increasing-letter-triangle_6581897?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void nLetterTriangle(int n) {
	for (int i=0; i<n;i++){
		for(char j='A';j<='A'+i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}	
}