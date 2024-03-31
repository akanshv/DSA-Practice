// https://www.naukri.com/code360/problems/if-else-decision-making_8357235?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

string compareIfElse(int a, int b) {

	string st;

  	if(a < b) {
		st.assign("smaller");
		return st;
  	} else  if (a > b) {
		st.assign("greater");
		return st;
	} else {
		st.assign("equal");
		return st;
	}
}
