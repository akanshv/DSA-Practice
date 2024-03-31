// https://www.naukri.com/code360/problems/reverse-letter-triangle_6581906?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void nLetterTriangle(int n) {
	for (int i=n; i>0;i--){
		for(char j='A';j<'A'+i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}	
}