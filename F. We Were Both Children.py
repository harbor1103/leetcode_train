# F. We Were Both Children
# https://codeforces.com/contest/1850/problem/F
# https://codeforces.com/contest/1850/my
#此题标准解：不要用python，用c++，python实在是太慢了，超时了


# #include<bits/stdc++.h>
# using namespace std;
# #define int long long
# const int N=2e5+100;
# int a[N];
# int b[N];
# void solve()
# {
# 	map<int,int> mp;
# 	int n;
# 	cin>>n;
# 	int max=0;
# 	for(int i=1;i<=n;i++)
# 	{
# 		b[i]=0;
# 	}
# 	for(int i=1;i<=n;i++)
# 	{
# 		cin>>a[i];
# 		mp[a[i]]++;
# 	}
# 	for(auto i=mp.begin();i!=mp.end();i++)
# 	{
# 		for(int j=i->first;j<=n;j+=i->first)
# 		{
# 			b[j]+=i->second;
# 		}
# 	}
# 	for(int i=1;i<=n;i++)
# 	{
# 		if(b[i]>max)
# 		{
# 			max=b[i];
# 		}
# 	}
# 	cout<<max<<'\n';
# }
# signed main()
# {
# 	std::ios::sync_with_stdio(false);
# 	int t;
# 	cin>>t;
# 	while(t--)
# 	{
# 		solve();
# 	}
# 	return 0;
# }









# 网上答案
# for cas in range(int(input())):
#     n = int(input())
#     a = list(map(int, input().split()))
#
#     count = [0] * (n + 1)
#
#     for x in a:   #x=1 2 3 4 5 n=5
#         cur = x
#         while cur <= n:
#             count[cur] += 1
#             cur += x
#
#     print(max(count))



# 我写的答案
# t = int(input())  # 输入测试用例数量
# for _ in range(t):
#     n = int(input())  # 青蛙数量
#     frog_jumps = list(map(int, input().split()))  # 青蛙跳跃长度列表

#     # 优化计算 hash 数组的逻辑
#     hash = [0] * (n + 1)

#     maxNum=0
#     for jump in frog_jumps:
#         if jump > n:
#             continue
#         jump_dist = 0
#         jump_dist += jump
#         while jump_dist <= n:
#             hash[jump_dist] += 1
#             if hash[jump_dist]>maxNum:
#                 maxNum=hash[jump_dist]
#             jump_dist += jump
#
#     print(maxNum)  # 输出结果


# 线段树
# class SegmentTreeNode:
#     def __init__(self, left, right):
#         self.left = left
#         self.right = right
#         self.max_value = 0
#
#
# class SegmentTree:
#     def __init__(self, n):
#         self.tree = [None] * (4 * n)
#         self.build(1, 1, n)
#
#     def build(self, node, left, right):
#         self.tree[node] = SegmentTreeNode(left, right)
#         if left == right:
#             return
#         mid = (left + right) // 2
#         self.build(2 * node, left, mid)
#         self.build(2 * node + 1, mid + 1, right)
#
#     def update(self, node, pos):
#         if self.tree[node].left == self.tree[node].right:
#             self.tree[node].max_value += 1
#             return
#         mid = (self.tree[node].left + self.tree[node].right) // 2
#         if pos <= mid:
#             self.update(2 * node, pos)
#         else:
#             self.update(2 * node + 1, pos)
#         self.tree[node].max_value = max(self.tree[2 * node].max_value, self.tree[2 * node + 1].max_value)
#
#     def query(self, node, ql, qr):
#         if self.tree[node].left > qr or self.tree[node].right < ql:
#             return 0
#         if ql <= self.tree[node].left and self.tree[node].right <= qr:
#             return self.tree[node].max_value
#         return max(self.query(2 * node, ql, qr), self.query(2 * node + 1, ql, qr))
#
#
# def solve(test_cases):
#     for hops in test_cases:
#         n = len(hops)
#         st = SegmentTree(n)  # 创建线段树
#         ans = 0
#         for hop in hops:
#             if hop > n:
#                 continue
#             cur=hop
#             while cur<=n:
#                 st.update(1, cur)
#                 cur+=hop
#
#         max=st.tree[1].max_value
#         print(max)
#
#
#
#
#
#
#
#
# t = int(input())
# test_cases = []
# for _ in range(t):
#     n = int(input())
#     hops = list(map(int, input().split()))
#     test_cases.append(hops)
#
# solve(test_cases)

# 加map后的
# def solve():
#     n = int(input())
#     a = list(map(int, input().split()))
#
#     mp = {}  # 用于记录每个跳跃长度的出现次数
#     b = [0] * (n + 1)
#
#     for i in range(1, n + 1):
#         b[i] = 0
#
#     for i in range(1, n + 1):
#         if a[i - 1] > n:
#             continue
#         if a[i - 1] not in mp:
#             mp[a[i - 1]] = 0
#         mp[a[i - 1]] += 1
#
#     for key, value in mp.items():
#         for j in range(key, n + 1, key):
#             b[j] += value
#
#     max_count = max(b)
#     print(max_count)
#
# t = int(input())
# for _ in range(t):
#     solve()
