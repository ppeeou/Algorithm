#include <stdio.h>
#include <string.h>

int main() {

	char s[2000000];
	int k=-1,ans=0;

	gets(s);

	while (s[++k]) {
		if ((k==0&&s[k]!=' ')||(s[k] != ' ' && s[k - 1] == ' ')) {
			ans++;
		}
	}

	printf("%d",ans);
	return 0;
}
