// https://www.naukri.com/code360/problems/n-triangles_6573689?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void nTriangle(int n) {
	for (int i=0; i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<j+1<<" ";
		}
		cout<<endl;
	}	
}