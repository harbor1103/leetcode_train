#include<stdio.h>
//#include<stdlib.h>
//
//
//int up_big_equal(int A[], int L, int R, int V)
//{
//	int mid = 0;
//	while (L < R)
//	{
//		mid = L + (R - L) / 2;
//		if (A[mid] >= V)
//
//			R = mid;
//
//		else
//
//			L = mid + 1;
//	}
//	if (L == R+1)
//		return -1;
//	else
//		return L;
//
//}
//
//int up_big(int A[], int L, int R, int V)
//{
//	int mid = 0;
//	while (L < R)
//	{
//		mid = L + (R - L) / 2;
//		if (A[mid] > V)
//
//			R = mid;
//
//		else
//
//			L = mid + 1;
//	}
//	if (A[L - 1] == V)
//		return L;
//
//	else
//	{
//		return -1;
//	}
//
//}
//
//int up_small_equal(int A[], int L, int R, int V)
//{
//	int mid = 0;
//	while (L < R)
//	{
//		mid =L+(R-L)/2;
//		if (A[mid] <= V)
//		{
//			L = mid ;
//
//		}
//		else
//		{
//			R = mid-1;
//		}
//	}
//	if (L == R + 1)
//		return -1;
//	else
//		return L;
//
//}
//
//int up_small(int A[], int L, int R, int V)
//{
//	int mid = 0;
//	while (L < R)
//	{
//		mid = L + (R - L) / 2;
//		if (A[mid] < V)
//		{
//			L = mid;
//
//		}
//		else
//		{
//			R = mid-1 ;
//		}
//	}
//	if (L == R + 1)
//		return -1;
//	else
//		return L;
//
//}
//
//int down_big(int A[], int L, int R, int V)
//{
//	int mid = 0;
//	while (L < R)
//	{
//		mid = L + (R - L) / 2;
//		if (A[mid] > V)
//		{
//			L = mid;
//		}
//		else
//		{
//			R = mid-1 ;
//		}
//	}
//	if (L == R + 1)
//		return -1;
//	else
//		return L;
//
//}
//
//int down_big_equal(int A[], int L, int R, int V)
//{
//	int mid = 0;
//
//	while (L < R)
//	{
//		mid = L + (R - L) / 2;
//		if (A[mid] >= V)
//		{
//			L = mid;
//		}
//		else
//		{
//			R = mid-1;
//		}
//	}
//	if (L == R + 1)
//		return -1;
//	else
//		return L;
//
//}
//
//
//int down_small(int A[], int L, int R, int V)
//{
//	int mid = 0;
//	while (L < R)
//	{
//		mid = L + (R - L) / 2;
//		if (A[mid] < V)
//		{
//			R=mid;
//		}
//		else
//		{
//			L= mid+1 ;
//		}
//	}
//	if (L == R + 1)
//		return -1;
//	else
//		return L;
//
//}
//
//
//int down_small_equal(int A[], int L, int R, int V)
//{
//	int mid = 0;
//
//	while (L < R)
//	{
//		mid = L + (R - L) / 2;
//		if (A[mid] <= V)
//		{
//			R = mid;
//		}
//		else
//		{
//			L = mid + 1;
//		}
//	}
//	if (L == R + 1)
//		return -1;
//	else
//		return L;
//
//}
//
//
//
//
//
//
//
//int main()
//{
//	//注意必须是有序数组才能进行二分查找
//	int n[12] = { 1,3,3,5,5,5,8,9,10,24,35,67 };
//	int n2[12] = { 67,35,24,10,9 ,8,5,5,5,3,3,1 };
//
//	int len = sizeof(n) / sizeof(n[0]);
//
//	//请写出算法的伪代码：在长度为 n 的降序数组 a 中，二分查找最后一个不小于 v 的数；
//	//if key=3,ret=1
//	//5
//	//	4
//	//		3
//	//			3
//	//				2
//	//					1
//
//	//                  ...
//	//               8 
//	//             5
//	//          5 
//	//       5
//	//    3
//	//  3
//	//1
//
//	printf("打印原数组：\n");
//
//
//	printf("\n up \n");
//	for (int i = 0; i < len; i++)
//	{
//		printf(" %d(%d)   ", n[i], i);
//	}
//
//
//	printf("\n down \n");
//	for (int i = 0; i < len; i++)
//	{
//		printf(" %d(%d)   ", n2[i], i);
//	}
//
//	int key = 67;
//
//	int loc = up_big_equal(n, 0, len - 1, key);
//	printf("\n key: %d , up >=     在数组中的  最左  位置为 %d", key,loc);
//
//	int loc1 = up_big(n, 0, len - 1, key);
//	printf("\n key: %d , up >      在数组中的  最左  位置为 %d", key, loc1);

	//int loc2 = up_small_equal(n, 0, len - 1, key);
	//printf("\n key: %d , up  <=    在数组中的  最右  位置为 %d", key, loc2);

	//int loc3 = up_small(n, 0, len - 1, key);
	//printf("\n key: %d , up  <     在数组中的  最右  位置为 %d", key, loc3);

	////////////////////////////////////////////////////////////////////////

	//int loc4 = down_big(n2, 0, len - 1, key);
	//printf("\n key: %d , down  >   在数组中的  最右  位置为 %d", key, loc4);

	//int loc5 = down_big_equal(n2, 0, len - 1, key);
	//printf("\n key: %d , down  >=  在数组中的  最右  位置为 %d", key, loc5);

	//int loc6 = down_small(n2, 0, len - 1, key);
	//printf("\n key: %d , down  <   在数组中的  最左  位置为 %d", key, loc6);


	//int loc7 = down_small_equal(n2, 0, len - 1, key);
	//printf("\n key: %d , down  <=  在数组中的  最左  位置为 %d", key, loc7);


//}