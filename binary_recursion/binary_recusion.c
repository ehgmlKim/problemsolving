#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int binary_search(int key, int low, int high) {
	int middle;
	int list[] = { 1,2,3,4,5,6,7,8,9,10 };

	while (low <= high) {
		middle = (low + high) / 2;
		if (key == list[middle])
			return middle;
		else if (key > list[middle])
			return binary_search(key, middle + 1, high);
		else
			return binary_search(key, low, middle - 1);
	}
	return -1;
}
int main() {
	int key;
	printf("key = ");
	scanf("%d", &key);
	int r = binary_search(key, 0, 9);
	if (r == -1)
		printf("%d를 찾지 못했습니다.\n", key);
	printf("%d는 배열의 %d번째에 있습니다.\n", key, r + 1);

	return 0;
}