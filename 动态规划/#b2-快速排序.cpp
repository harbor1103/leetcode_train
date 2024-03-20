//#include<iostream>
//using namespace std;
//#include<vector>
//
//int part(int art[], int low, int high)
//{
//	int pivot=art[low];
//	while (low < high)
//	{
//		while (low < high && art[high] >= pivot) high--;
//		art[low] = art[high];
//		while (low < high && art[low] <= pivot)low++;
//		art[high] = art[low];
//	}
//
//
//	art[low] = pivot;
//	return low;
//}
//
//void quickSort(int arr[], int low, int high)
//{
//	if (low < high)
//	{
//		int position = part(arr, low, high);
//		quickSort(arr, low, position-1);
//		quickSort(arr, position + 1, high);
//	}
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