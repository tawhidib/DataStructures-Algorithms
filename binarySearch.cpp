#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int n, int s) {
    int left = 0, right = n - 1 ;
    int mid = (left + right) / 2;
    while(right >= left) {
        if(arr[mid] == s) {
            return mid;
        }
        else if (arr[mid] < s) {
            left = mid + 1;
            mid = (left + right) / 2;
        }
        else if (arr[mid] > s) {
            right = mid - 1;
            mid = (left + right) / 2;
        }
    }
    return -1;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50};
    printf("my array is: ");
    int n = sizeof(arr)/ sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nand array size is = %d\n", n);
    int s;
    printf("what you want to find? ");
    scanf("%d", &s);
    int findStatus = binarySearch(arr, n, s);
    if(findStatus < 0) {
        printf("%d is not found in given array!!!\n", s);
    }
    else {
        printf("%d is in %d th position in this array\n", s, findStatus + 1);
    }
    return 0;
}
