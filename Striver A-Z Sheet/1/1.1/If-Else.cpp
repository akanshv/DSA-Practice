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
