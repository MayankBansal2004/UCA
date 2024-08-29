#include <stdio.h>

int compareAscending(int a, int b) {
    return a > b;
}

int compareDescending(int a, int b) {
    return b > a;
}


void sort(int arr[], int size, int (*compare)(int, int)){
	int n = size;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n - i -1; j++){
			if(compare(arr[j], arr[j+1]) > 0){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(){
	int arr[] = {5,3,6,1,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr, n, compareAscending);
	for(int i = 0; i < n; i++){
		printf("%d\n", arr[i]);
	}

	sort(arr, n, compareDescending);
	for(int i = 0; i < n; i++){
                printf("%d\n", arr[i]);
        }

}
