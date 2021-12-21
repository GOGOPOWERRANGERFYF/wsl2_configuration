#include <stdio.h>
int bubbleSort(void);
int compareItem(int item_left, int item_right);
int forEachArray(unsigned int length, int * int_pointer);

int main(void) {
	bubbleSort();
	return 0;
}

int bubbleSort(void) {
	unsigned int length = 6, index;
	const unsigned int LENGTH = length;
	int array[] = {11 , 88, 45, 36, 10, -8}, tempMax;
	// 数组length为1时,停止元素比较;
	while (length > 0) {
		// 数组length为2时,数组还有两个元素,索引为index-1,index => 0,1
		// 数组length为1时,只剩一个元素,无需比较,index<length = index<1,
		// 刚好条件表达式的值为false。
		for (index = 1; index < length; index++) {
			tempMax = compareItem(array[index-1], array[index]);
			if (array[index] != tempMax) {
				array[index -1] = array[index];
				array[index] = tempMax;
			}
		}
		length--;
	}
	forEachArray(LENGTH, array);
	return 0;
}

int compareItem(int item_left, int item_right) {
	if (item_left > item_right) {
		return item_left;
	} else {
		return item_right;
	}
}

int forEachArray(unsigned int length, int * int_pointer) {
	for (unsigned int index = 0; index < length; index++) {
		printf("%d ", *int_pointer);
		int_pointer++;
	}
	printf("\n");
	return 0;
}

