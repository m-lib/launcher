#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

#if defined(WIN32) || defined(_WIN32) 
#define PATH_SEPARATOR "\\" 
#else 
#define PATH_SEPARATOR "/" 
#endif

#define JAVA_COMMAND_PATH "/jre/bin/java -jar"
#define JAR_PATH "/jar/app.jar"

string change_diretory(char *file[]) {
	string var = (string) file[0];
	var.replace(var.find_last_of(PATH_SEPARATOR), var.size(), "");
	return var;
}

main(int num, char *file[]) {
	string var = change_diretory(file);
	string hue = var + JAVA_COMMAND_PATH + " " + var + JAR_PATH;
	system(hue.c_str());
}
