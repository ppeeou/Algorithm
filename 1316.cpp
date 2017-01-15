#include <stdio.h>
#include <string.h>

int main() {
	int input, ans = 0;
	int array[300];

	scanf("%d", &input);
	ans = input;
	//for
	while (input--) {

		char s[110];
		scanf("%s", s);
		bool check = true;
		int k = -1;

		while (s[++k] != '\0') {
			int arrayNum = (int) (s[k] - 'a');

			if (k == 0) {
				array[arrayNum] = 1;
				continue;
			}

			//처음 array 숫자일 경우
			if (array[arrayNum] == 0) {
				array[arrayNum]++;
			} else if (s[k] == s[k - 1] && array[arrayNum] == 1) {
				//중복 체크
				array[arrayNum]++;
				while (s[k] == s[k - 1]) {
					k++;
				}
				k--;
			} else {
				check = false;
			}

		}

		if (!check)
			ans--;
		memset(array, 0, sizeof(array));
		memset(s,'\0',sizeof(s));

	}
	printf("%d", ans);
	return 0;
}
