// https://www.naukri.com/code360/problems/increasing-number-triangle_6581893?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void nNumberTriangle(int n) {
    int num=1;
	for (int i=0; i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<num<<" ";
            num++;
		}
		cout<<endl;
	}	
}