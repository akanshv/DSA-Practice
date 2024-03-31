// https://www.naukri.com/code360/problems/rotated-triangle_6573688?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void nStarTriangle(int n) {
    for(int i=0;i<n;i++){
        cout<<string(i+1, '*')<<endl;
    }
    for(int i=n-1;i>0;i--){
        cout<<string(i, '*')<<endl;
    }
}