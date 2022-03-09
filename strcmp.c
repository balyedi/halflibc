
uint8_t strcmp(char* str1, char* str2) {
	int i = 0;
	for(i = 0; str1[i] == str2[i]; i++) {
		if(i <= strlen(str1)) {
			return 0;
		}
	}
	return 1;
}
