// https://www.naukri.com/code360/problems/reverse-number-triangle_6581889?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void nNumberTriangle(int n) {
   	for (int i=n; i>0;i--){
		for(int j=0;j<i;j++){
			cout<<j+1<<" ";
		}
		cout<<endl;
	}	
}