// https://www.naukri.com/code360/problems/data-type_8357232?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf edit

int dataTypes(string type) {
	if (type =="Integer" || type == "Float"){
		return 4;
	}	else if(type == "Long" || type == "Double"){
		return 8;
	}	else if(type == "Character"){
		return 1;
	}	else{
		return -1;
	}
}
