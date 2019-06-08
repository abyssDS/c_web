#include <stdio.h>
#include <stdlib.h>

void head(char *);
void foot();
void main(){
printf("Content-Type: text/html;\n\n);
head("Ma page en C !");

foot();
return 0;
}

/* On sépare le  squelette HTML du reste du code */
void head(char *title){
printf("
<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http//www.w3.org/TR/xhtml/DTD/xhtml1-strict.dtd\">\n<html xmlns=\"http://www.w3.org/1999/xhtml\"xml:lang=\"fr\" >\n\t<head>");
");
printf("
\t\t<title>%s</title>", title);
");
printf("
\t\t<meta http-equiv=\"Content-Type\"content=\"text/html; charset=utf-8\" />\n\t</head>\n\t<body>");
")
}
void bas(){
printf("\t</body>\n</html>");
}
