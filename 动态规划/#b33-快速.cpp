//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//int part(int arr[], int begin, int end)
//{
//	int pivot = arr[begin];
//	while (begin < end)
//	{
//		while(begin<end&&arr[end]>=pivot) end--;
//		arr[begin] = arr[end];
//		while (begin < end && arr[begin] <= pivot) begin++;
//		arr[end] = arr[begin];
//	}
//
//	arr[begin] = pivot;
//
//	return begin;
//}
//
//
//
//void quickSort(int arr[], int low, int end)
//{
//	if (low < end)
//	{
//		int pivot = part(arr, low, end);
//		quickSort(arr, low, pivot);
//		quickSort(arr, pivot + 1, end);
//	}
//
//}
//
//
//
//
//
//int main()
//{
//	int test[15] = { 1,3,4,5,2,0,7,8,32,45,21,56,34,67,100 };
//
//	int len = sizeof(test) / sizeof(test[0]);
//	quickSort(test, 0, len - 1);
//	for (int i = 0; i < len; i++)
//	{
//		printf(" %d ", test[i]);
//	}
//
//}