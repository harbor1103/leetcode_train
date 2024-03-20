//#include<iostream>
//using namespace std;
//#include<vector>
//
//vector<int > B(9,0);
//
//void mergeSort(vector<int> & arr, int begin, int mid,int end)
//{
//    for (int i = begin; i <= end; i++)
//    {
//        B[i] = arr[i];
//    }
//
//    int i = begin;
//    int j = mid + 1;
//    int K = begin;
//    while (i <= mid && j <= end)
//    {
//        if (B[i] <= B[j])
//        {
//            arr[K] = B[i];
//            i++;
//        }
//        else
//        {
//            arr[K] = B[j];
//            j++;
//        }
//        K++;
//    }
//
//    while (i <= mid)
//    {
//        arr[K] = B[i];
//        K++;
//        i++;
//    }
//    while (j <= end)
//    {
//        arr[K] = B[j];
//        K++;
//        j++;
//    }
//
//
//}
//
//
//
//
//void merge(vector<int>& arr, int begin, int end)
//{
//    if (begin < end)
//    {
//        int mid=begin+(end-begin)/2;
//        merge(arr, begin, mid);
//        merge(arr, mid + 1, end);
//        mergeSort(arr, begin, mid, end);
//    }
//}
//
//
//
//int main()
//{
//    std::vector<int> arr = { 12, 11, 13, 5, 6, 7, 1, 3, 9 };
//    int arr_size = arr.size();
//
//    std::cout << "Given array is \n";
//    for (int i = 0; i < arr_size; i++)
//        std::cout << arr[i] << " ";
//
//    merge(arr, 0, arr_size - 1);
//
//    std::cout << "\nSorted array is \n";
//    for (int i = 0; i < arr_size; i++)
//        std::cout << arr[i] << " ";
//
//    return 0;
//}