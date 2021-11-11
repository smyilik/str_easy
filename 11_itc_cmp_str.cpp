#include "str_easy.h"

string itc_cmp_str(string str1, string str2, int num)
{
	string str = "";
	long long len = itc_len(str1), len2 = itc_len(str2), j = -1;
	if (num < 0) {
		return "-1";
	}
	else if (num >= len) {
		return str1;
	}
	for (int i = 0; i < len; i++) {
		if (i == num) {
			str += str2;
			i += len2;
			j = i;
			break;
		}
		else {
			str += str1[i];
		}
	}
	if (j != -1) {
		j -= len2;
		for (j; j < len - len2; j++) {
			str += str1[j];
		}
	}
	return (str );
}
