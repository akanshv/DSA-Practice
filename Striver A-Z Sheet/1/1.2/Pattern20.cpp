// https://www.naukri.com/code360/problems/symmetry_6581914?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void symmetry(int n) {

    for (int i=0; i<n-1;i++){
		for(int j=0;j<=i;j++){
			cout<<"* ";
		}

        for(int j=0;j<n;j++){
            cout<<"    ";
        }

        for(int j=0;j<=i;j++){
			cout<<"* ";
		}

		cout<<endl;
	}	
    
    for (int i=n; i>0;i--){
        
        for(int j=0;j<i;j++){
            cout<<"* ";
        }

        for(int j=0;j<n-i;j++){
            cout<<"    ";
        }

        for(int j=0;j<i;j++){
            cout<<"* ";
        }
    cout<<endl;
	}	
}