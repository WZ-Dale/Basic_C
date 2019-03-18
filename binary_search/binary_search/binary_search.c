#include <stdio.h>
#include <stdlib.h>

int BinaryFind(int arr[], int num, int v){
	int left = 0, mid = 0, right = num - 1;
	while (left <= right){
		mid = (left + right) / 2;
		if (arr[mid] == v){
			return mid;
		}
		else if (arr[mid] > v){
			right = mid - 1;
		}
		else if (arr[mid] < v){
			left = mid + 1;
		}
	}
	return -1;
}

int main(){
	int arr[] = { 1, 4, 6, 7, 9, 10, 31, 34, 54 };
	int num = sizeof(arr) / sizeof(arr[0]);		//������鳤�ȣ�ֻ�������鶨�����ڵĴ�������
	printf("%d\n", BinaryFind(arr, num, 54));
	system("pause");
	return 0;
}