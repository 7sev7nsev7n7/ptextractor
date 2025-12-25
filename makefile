ptcextract : src/main.c src/structs.h src/helpers.h
		gcc src/main.c /usr/lib/libb64.so -o ptcextract
