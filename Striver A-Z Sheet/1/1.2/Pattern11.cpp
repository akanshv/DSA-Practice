// https://www.naukri.com/code360/problems/binary-number-triangle_6581890?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void nBinaryTriangle(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<(i+j+1)%2<<" ";
        }
        cout<<endl;
    }
}