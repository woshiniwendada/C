#include <stdio.h>

int main() {
	if(freopen("D:\\shuowen\\in.txt", "r", stdin) == NULL) {
        printf("error redirecting stdin\n");
		return -1;
	}
//    if(freopen("D:\\shuowen\\out.txt", "w", stdout) == NULL) {
//        printf("error redirecting stdout\n");
//    	return -1;
//	}
    
    
    int a;
    char s[100];
//    while (scanf("%d", &a) != EOF) {
//    	
//		printf("%d\n", a);
//	}
    while (scanf("%s", s) != EOF) {
    	
		printf("%s\n", s);
	}
	
	/*close the standard output stream*/
    fclose(stdin);
//    fclose(stdout);
	return 0;
}
