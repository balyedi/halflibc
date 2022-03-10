
char* strtok(char *str, const char delim) {
	uint16_t i = 0;
	char buffer[60];
	int16_t tokcount = -1;
	bool resettokcount = false;
	int oldpointer;
	if(&str == oldpointer) {
		resettokcount = true;
	}
	if(resettokcount == true) {
		tokcount = 0;
		resettokcount = false;
	}
	for(i = 0; i <= strlen(str); i++) {
		if(str[i] != delim) {
			buffer[i] = str[i];
		} else {
			oldpointer = &str;
			tokcount++;
		}
	}
}
