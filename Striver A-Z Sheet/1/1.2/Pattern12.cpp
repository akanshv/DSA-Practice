// https://www.naukri.com/code360/problems/number-crown_6581894?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void numberCrown(int n) {
	for (int i=0; i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<j+1<<" ";
		}

        for(int j=0;j<(n-i-1);j++){
            cout<<"    ";
        }

        // cout<<string((n-i-1),"    "); 

		for(int j=i;j>=0;j--){
			cout<<j+1<<" ";
		}
		cout<<"\n";
	}
}