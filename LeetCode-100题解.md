# LeetCode-100题解

```
重要的是每做一道面试题的时候都要总结这道题的解法有什么特点，
有哪些思路是可以应用到同类型的题目中去的。
比如为了解决面试题“翻转单词序”，我们先翻转整个句子的所有字符，再分别翻转每个单词中的字符。这样多次翻转字符的思路也可以运用到面试题“左旋转字符串”中(面试题 42在解决面试题 28“字符串的排列”之后，我们发现“八后问题”其实归根到底就是数组的排列问题。
本书中很多章节在分析了一道题之后，列举了和这道题相关的题目，
读者可以通过分析这些题目的相关性来提高举一反三的能力。
```

```
如何归纳总结一道题：
0.链接：
1.问题：
2.模型是什么：
3.算法是什么：
4.运行时间是多少,内存是多少
5.如何改进，改进后运行时间是多少：
6.代码：
```

##### 1.LRU缓存

```
0.链接：
1.题目：
2.特点是什么：
3.原解法是什么：
4.运行时间是多少,内存是多少
5.如何改进，改进后运行时间是多少：
6.代码：
```



##### 2.一年中的第几天

```
0.链接：
1.题目：
2.特点是什么：
3.原解法是什么：
4.运行时间是多少,内存是多少
5.如何改进，改进后运行时间是多少：
6.代码：
```



##### 3.两数之和（更新）

```
0.链接：https://leetcode.cn/problems/two-sum/
1.题目：
	一个整数数组 nums 和一个目标target，请你在该数组中找出和为target的两个数返回它们的数组下标。你	可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
	你可以按任意顺序返回答案。
2.特点是什么：
	数组，无序，答案去重，遍历，用index找下标
3.原解法是什么：
	我的原解法：遍历列表，每次用target-i，用count看是否存在target-i，没有就过掉当前遍历，如果有就	 用index接下来下标。用字典，把i的下标当作key，把target-i的下标当作value。然后再把字典的元素放到	   list中返回
4.运行时间是多少,内存是多少
	624ms
	17MB
5.如何改进，改进后运行时间是多少：
	先排序，然后从<=target的数里遍历，接着的方法和原方法一样
	？？？？？？

6.代码：
	class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        count = 0
        first_loc = 0
        seconde_loc = 0
        dict = {}
        l=[]
        while (len(nums) != 0):
            first_data = nums[0]
            nums.pop(0)
            if nums.count(target - first_data) == 0:
                pass
            else:
                seconde_loc = nums.index(target - first_data) + count + 1
                first_loc = count
                dict[first_loc] = seconde_loc
            count += 1
        loc=0
        keys=list(dict.keys())
        values=list(dict.values())
        for i in dict:
            l.append(keys[loc])
            l.append(values[loc])
            loc+=1
        return l
```



##### 4.两数相加

```
0.链接：https://leetcode.cn/problems/add-two-numbers/
1.题目：
	给你两个非空的链表，表示两个非负的整数。它们每位数字都是按照逆序的方式存储的，并且每个节点只能存	  储一位数字。例：2->4->3,实际表示的是342
    请你将两个数相加，并以相同形式返回一个表示和的链表。
    你可以假设除了数字 0 之外，这两个数都不会以 0 开头。
2.特点是什么：
	题目先给了一个链表的数据结构作为函数的参数，链表转字符串，字符串转int，int相加，最后再以链表形式		返回
3.原解法是什么：
	先把两个链表的东西存到两个list里，然后两个list调用reverse反转，再转为字符串，字符串再转为int
	两个int相加，转为字符串，字符串reverse反转之后，放到一个新链表里，返回链表头
4.运行时间是多少,内存是多少
	64ms
	16.2MB
5.如何改进，改进后运行时间是多少：
	既然给的是逆序链表，或许可以直接两个同步指针往前走，把相加结果赋给其中一个链表，在设置一个进位标志位，走到链表位的时候判断进位标志位。最后直接返回链表表头即可
	？？？？？？
6.代码：
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        l11 = []
        l22 = []
        while l1:
            tmp=l1.val
            l11.append(tmp)
            l1 = l1.next

        while l2:
            tmp = l2.val
            l22.append(tmp)
            l2 = l2.next

        l11.reverse()
        l22.reverse()
        str1 = ''.join(str(i) for i in l11)
        str2 = ''.join(str(i) for i in l22)
        a = int(str1)
        b = int(str2)
        c = a + b
        str3 = str(c)
        str3 = str3[::-1]

        head = ListNode(int(str3[0]))
        curr = head
        for val in str3[1:]:
            curr.next = ListNode(int(val))
            curr = curr.next
        return head
        
7.改进代码
class Solution:
    def addTwoNumbers(self, l1: [ListNode], l2: [ListNode]) -> [ListNode]:
        if not l1:
            return l2
        if not l2:
            return l1

        curl1=l1
        curl2=l2
        
        headNode=ListNode(0)
        curr=headNode
        
        jinwei=0
        while curl1 or curl2:
            if curl1 is None and curl2 :
                ret = 0 + curl2.val + jinwei
                jinwei=0
                if ret > 9:
                    jinwei = 1
                    ret = ret - 10
                tmpNode = ListNode(ret)
                curl2 = curl2.next
            elif curl2 is None and curl1:
                ret = 0 + curl1.val + jinwei
                jinwei = 0
                if ret > 9:
                    jinwei = 1
                    ret = ret - 10
                tmpNode = ListNode(ret)
                curl1 = curl1.next
            else:
                ret=curl1.val+curl2.val+jinwei
                jinwei = 0
                if ret > 9:
                    jinwei=1
                    ret=ret-10
                tmpNode=ListNode(ret)
                curl1=curl1.next
                curl2=curl2.next
                
            curr.next = tmpNode
            curr = curr.next
        if jinwei==1:
            tmpNode = ListNode(1)
            curr.next = tmpNode
            curr = curr.next

        return headNode.next

```



##### 5.三数之和

```
0.链接：https://leetcode.cn/problems/3sum/
1.题目：
	给一个数组nums，判断是否存在三元组 [nums[i], nums[j], nums[k]] 满足 i != j、i != k 且 j 	!= k ，同时还满足 nums[i] + nums[j] + nums[k] == 0 。请你返回所有和为0且不重复的三元组。
	注意：答案中不可以包含重复的三元组。
2.特点是什么：
	答案不重复，数组，排序，这道题的解法有点用到了二分查找的思想，双指针法，同手从两边向中间移动
3.原解法是什么：
	先判断如果len不超过三，返回空。然后排序。从0遍历到倒数第三个数，先甩一个if判断，判断如果两个挨着		的数都是正数，直接continue，left=i+1，right=最后一个元素，然后遍历，看是否满足题目条件。如果满	足，往集合中添加元素。如果<满足，说明小了，把做左指针右移;如果>,说明太大了，右指针左移。
4.运行时间是多少,内存是多少
	1048ms
	20.7MB
5.如何改进，改进后运行时间是多少：
	？？？？？？？？？？？
6.代码：
class Solution:
    def threeSum(self, nums: list) -> list[list[int]]:
        ret_set = set()
        unique_list = []

        if len(nums) < 3:
            return []

        nums.sort()

        for i in range(len(nums) - 2):
            if i > 0 and nums[i] == nums[i - 1]:
                continue

            left = i + 1
            right = len(nums) - 1

            while left < right:
                total = nums[i] + nums[left] + nums[right]

                if total == 0:
                    ret_set.add((nums[i], nums[left], nums[right]))
                    left += 1
                    right -= 1

                    while left < right and nums[left] == nums[left - 1]:
                        left += 1
                    while left < right and nums[right] == nums[right + 1]:
                        right -= 1
                elif total < 0:
                    left += 1
                else:
                    right -= 1

        unique_list = [list(t) for t in ret_set]
        return unique_list


```



##### 6.无重复字符的最长子串

```
0.链接：https://leetcode.cn/problems/longest-substring-without-repeating-characters/
1.题目：给定一个字符串 s ，请你找出其中不含有重复字符的 最长子串 的长度。
2.特点是什么：字符串，子串，
3.原解法是什么：
	？？？？？？？？？？？
4.运行时间是多少,内存是多少
	60ms
	16.1mb
5.如何改进，改进后运行时间是多少：、
	？？？？？？
6.代码：
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        _max, arr = 0, []
        for c in s:
            if c not in arr:
                arr.append(c)
                _max = max(_max, len(arr))
            else:
                arr.append(c)
                arr = arr[arr.index(c) + 1:]
        return _max
```

##### 7.四数之和

```
0.链接：https://leetcode.cn/problems/4sum/description/









#正确代码
# class Solution:
#     def fourSum(self, nums , target: int) :
#         quadruplets = list()
#         if not nums or len(nums) < 4:
#             return quadruplets
#         nums.sort()
#         length = len(nums)
#         for i in range(length - 3):
#             if i > 0 and nums[i] == nums[i - 1]:
#                 continue
#             if nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target:
#                 break
#             if nums[i] + nums[length - 3] + nums[length - 2] + nums[length - 1] < target:
#                 continue
#             for j in range(i + 1, length - 2):
#                 if j > i + 1 and nums[j] == nums[j - 1]:
#                     continue
#                 if nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target:
#                     break
#                 if nums[i] + nums[j] + nums[length - 2] + nums[length - 1] < target:
#                     continue
#                 left, right = j + 1, length - 1
#                 while left < right:
#                     total = nums[i] + nums[j] + nums[left] + nums[right]
#                     if total == target:
#                         quadruplets.append([nums[i], nums[j], nums[left], nums[right]])
#                         while left < right and nums[left] == nums[left + 1]:
#                             left += 1
#                         left += 1
#                         while left < right and nums[right] == nums[right - 1]:
#                             right -= 1
#                         right -= 1
#                     elif total < target:
#                         left += 1
#                     else:
#                         right -= 1
#
#         return quadruplets


#错误代码
def fourSum(nums: list[int], target: int) -> list[list[int]]:
    if len(nums)<4:
        return list()

    nums.sort()

    n = len(nums)
    res = list()

    for i in range(n-3):
        if i>0 and nums[i]==nums[i-1]:
            continue
        if i+3 < n:
            if nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target:
                break
        if nums[i]+nums[n-3]+nums[n-2]+nums[n-1]<target:
            continue
        j=i+1
        while j<n-2:
            if j>i+1 and nums[j]==nums[j-1]:
                continue
            if j+2<n:
                if nums[i]+nums[j]+nums[j+1]+nums[j+2]>target:
                    break
            if nums[i]+nums[j]+nums[n-2]+nums[n-1]<target:
                continue
            LNode=j+1
            RNode=n-1
            while LNode<RNode:
                if nums[i]+nums[j]+nums[LNode]+nums[RNode]==target:
                    tmpList=[nums[i],nums[j],nums[LNode],nums[RNode]]
                    res.append(tmpList)
                    while LNode < RNode and nums[LNode] == nums[LNode+ 1]:
                        LNode += 1
                    LNode += 1
                    while LNode < RNode and nums[RNode] == nums[RNode - 1]:
                        RNode -= 1
                    RNode -= 1
                elif nums[i]+nums[j]+nums[LNode]+nums[RNode]<target:
                    LNode+=1
                elif nums[i]+nums[j]+nums[LNode]+nums[RNode]>target:
                    RNode-=1
            j += 1
        i+=1
    return res
#
#
if __name__ == '__main__':
    nums = [1,0,-1,0,-2,2]
    target = 0
    res = []
    print(fourSum(nums, target))
```

##### 8.斐波那契数列

```
0.链接：https://leetcode.cn/problems/fei-bo-na-qi-shu-lie-lcof/submissions/
1.题目：
2.特点是什么：
3.原解法是什么：
4.运行时间是多少,内存是多少
5.如何改进，改进后运行时间是多少：
6.代码：(python)

class Solution:
    def fib(self, n: int) -> int:
        if n<0:
            return -1
        elif n==0:
            return 0;
        elif n==1:
            return 1;
        else:
            dp = []
            dp.append(0)
            dp.append(1)
            for i in range(2,n+1):
                dp_tmp = (dp[i-1] + dp[i-2])%1000000007
                dp.append(dp_tmp)
            return dp[n]
```

