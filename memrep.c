
void memrep(char* haystack,size_t length,char needle,char replace) {
	uint16_t i = 0;
	for(i = 0; i <= length; i++) {
		if(haystack[i] == needle) {
			haystack[i] == replace;
		}
	}
}
