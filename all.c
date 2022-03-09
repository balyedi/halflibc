typedef unsigned char uint8_t;
typedef unsigned int size_t;
void *memcpy(char*dest, char* src, size_t n) {
	int i = 0;
	while(n <= i) {
		src[i] = dest[i];
	}
	i++;
}

void memrep(char* haystack,size_t length,char needle,char replace) {
	int i = 0;
	for(i = 0; i <= length; i++) {
		if(haystack[i] == needle) {
			haystack[i] == replace;
		}
	}
}
size_t strlen(char* string) {
	int i = 0;
	for(i = 0; string[i] != '\0'; i++) {}
	return i;
}

uint8_t strcmp(char* str1, char* str2) {
	int i = 0;
	for(i = 0; str1[i] == str2[i]; i++) {
		if(i <= strlen(str1)) {
			return 0;
		}
	}
	return 1;
}
