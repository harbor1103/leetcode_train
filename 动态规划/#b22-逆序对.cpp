//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//
//vector<int> B(5, 0);
//int Sort(vector<int>& A, int begin, int mid, int end)
//{
//    int ret = 0;
//    for (int i = begin; i <= end; i++)
//    {
//        B[i] = A[i];
//    }
//    int i = begin;
//    int j = mid + 1;
//    int k = begin;
//    while (i <= mid && j <= end)
//    {
//        if (B[i] <= B[j])
//        {
//            A[k] = B[i];
//            i++;
//        }
//        else
//        {
//            A[k] = B[j];
//            j++;
//            ret = mid - i + 1;
//        }
//        k++;
//    }
//
//    while (i <= mid)
//    {
//        A[k] = B[i];
//        i++;
//        k++;
//    }
//    while (j <= end)
//    {
//        A[k] = B[j];
//        j++;
//        k++;
//    }
//    return ret;
//}
//
//int mergeSortAndCount(vector<int>& A, int begin, int end)
//{
//    int ret = 0;
//    if (begin < end)
//    {
//        int mid = begin + (end - begin) / 2;
//        ret += mergeSortAndCount(A, begin, mid);
//        ret += mergeSortAndCount(A, mid + 1, end);
//        ret += Sort(A, begin, mid, end);
//    }
//
//    return ret;
//}
//
//
//
//
//




//
//
//
//int main() {
//    std::vector<int> arr = { 9, 7, 5, 4, 6 };
//    int arr_size = arr.size();
//
//    std::cout << "Given array is \n";
//    for (int i = 0; i < arr_size; i++)
//        std::cout << arr[i] << " ";
//
//    int invCount = mergeSortAndCount(arr, 0, arr_size - 1);
//
//    std::cout << "\nNumber of inversions are " << invCount<<"\n";
//
//    for (int i = 0; i < arr_size; i++)
//        std::cout << arr[i] << " ";
//
//
//    return 0;
//}
