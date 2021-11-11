#include "str_easy.h"

string itc_slice_str(string str, int start, int end)
{
	if ((start < 0) || (end < 0)) {
	return "-1";
	}
	else if ((start > end) || (start >= itc_len(str))) {
		return str;
	}
	else if (end >= itc_len(str)) {
		end = itc_len(str);
	}
	string sndstr = "";
	for (int i = start; i <= end; i++) {
		sndstr += str[i];
	}
	return sndstr;
}
