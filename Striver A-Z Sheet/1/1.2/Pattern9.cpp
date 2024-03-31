// https://www.naukri.com/code360/problems/star-diamond_6573686?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems

void nStarDiamond(int n) {

    for(int i=0;i<n;i++){
        cout<<string((n - (i+1)), ' ')<<string((2*i + 1), '*')<<string((n - (i+1)), ' ');
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<string(i, ' ')<<string(((2*n - 1) - 2*i), '*')<<string(i, ' ');
        cout<<endl;
    }

}