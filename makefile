ptextract : src/main.c src/structs.h
		gcc src/main.c /usr/lib/libb64.so -o ptextract
