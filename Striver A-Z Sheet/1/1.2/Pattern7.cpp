// https://www.naukri.com/code360/problems/star-triangle_6573671?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void nStarTriangle(int n) {

   	for (int i=0; i<n;i++){
        cout<<string((n - (i+1)), ' ')<<string((2*i + 1), '*')<<string((n - (i+1)), ' ');
        cout << endl;
    }
}