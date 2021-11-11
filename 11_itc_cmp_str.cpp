#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num)
{
	string str = "";
	long long len = itc_len(str1);
	if (num < 0) {
		return "-1";
	}
	else if (num >= itc_len(str1)) {
		return str1;
	}
	for (int i = 0; i < len; i++) {
		if (i == num) {
			str += str2;
			i += itc_len(str2);
		}
		else {
			str += str1[i];
		}
	}
	return (str );
}
