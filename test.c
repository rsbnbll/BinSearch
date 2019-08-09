#include<stdio.h>
int main(){
	int arr[] = { 1, 4, 5, 7, 45, 8, 3, 9 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int mid = 0;
	int find = 7;
	while (left <= right){
		mid = (left + right) / 2;
		if (find > arr[mid]){
			left = mid + 1;
		}
		else if(find < arr[mid]){
			right = mid - 1;
		}
		else{
			break;
		}
	}
	if (left <= right){
		printf("找到了\n");
	}
	else{
		printf("没找到\n");
	}
	system("pause");
	return 0;
}