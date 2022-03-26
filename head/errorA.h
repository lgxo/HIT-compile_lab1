typedef enum errora {
	Illegal_floating,
	Illegal_int,
	Mysterious
}ErrorA;

static inline void beginning(int line){
	printf("Error type A at Line %d: ", line);
}

void printErrorA(int lineno, ErrorA errortype, char* text){
	beginning(lineno);
	
	if(errortype == Illegal_floating){
		printf("Illegal floating point number \"%s\".\n", text);
	}
	else if(errortype == Illegal_int){
		printf("Illegal integer \"%s\"(out of range).\n", text);
	}
	else if(errortype == Mysterious){
		printf("Mysterious character \"%s\".\n", text);
	}
}
