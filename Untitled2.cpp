#include <stdio.h>
#include <string.h>
int dem (char st[100]){
	int c = 0;
	for (int i = 0 ; i < strlen(st); i++){
		if((st[i] == 'o') || (st[i] == 'i') || (st[i] == 'e') || (st[i] == 'u') || (st[i] == 'a'))
		c++;
	}
	return c;
}
int main(){
	char s [100];
	scanf("%s",&s);
	int kq = dem(s);
	printf("%d",kq);
	return 0;
}
