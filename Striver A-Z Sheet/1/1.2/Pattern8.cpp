// https://www.naukri.com/code360/problems/reverse-star-triangle_6573685?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void nStarTriangle(int n) {
    for (int i=0; i<n;i++){
        cout<<string(i, ' ')<<string(((2*n - 1) - 2*i), '*')<<string(i, ' ');
        cout << endl;
    }
}