//
//#include<iostream>
//using namespace std;
//#include<vector>
//
//int part(int arr[], int begin, int end)
//{
//	int pivot = arr[begin];
//	while (begin < end)
//	{
//		while (begin < end && arr[end] >= pivot) end--;
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
//
//int quickSort(int arr[], int L, int R,int K)
//{
//	if (L <= R)
//	{
//
//		int pivot = part(arr, L, R);
//		if (pivot = K)
//		{
//			return arr[pivot];
//		}
//		else if (pivot > K)
//		{
//			quickSort(arr, L, pivot - 1,K);
//		}
//		else
//		{
//			quickSort(arr, pivot + 1, R, K);
//		}
//	}
//
//
//
//}
//
//
//
//
//
//int main()
//{
//	int test[16] = { 1,3,4,5,2,0,7,8,32,45,21,56,34,67,100,99 };
//
//	int len = sizeof(test) / sizeof(test[0]);
//	int k = 1;
//	int ret=quickSort(test, 0, len - 1,16-k);
//
//	cout<<"第 "<<k<< "大的数是："<<ret<<endl;
//
//	for (int i = 0; i < len; i++)
//	{
//		printf(" %d ", test[i]);
//	}
//
//}