# https://leetcode.cn/problems/valid-parentheses/?envType=featured-list&envId=2cktkvj
# 20. Valid Parentheses

class Solution:
    def isValid(self, s: str) -> bool:
        flag = True
        valid_chars = "()[]{}"
        check_stack = []
        length = 0
        for i in range(len(s)):
            if s[i] not in valid_chars:
                flag = False
                break
            if s[i] == '(':
                check_stack.append(s[i])
                length += 1
                continue
            if s[i] == '[':
                check_stack.append(s[i])
                length += 1
                continue
            if s[i] == '{':
                check_stack.append(s[i])
                length += 1
                continue

            if s[i] == ')':
                if length > 0:
                    if check_stack[-1] == '(':
                        check_stack.pop()
                        length -= 1
                        continue
                    else:
                        flag = False
                        break
                else:
                    flag = False
                    break

            if s[i] == ']':
                if length > 0:
                    if check_stack[-1] == '[':
                        check_stack.pop()
                        length -= 1
                        continue
                    else:
                        flag = False
                        break
                else:
                    flag = False
                    break
            if s[i] == '}':
                if length > 0:
                    if check_stack[-1] == '{':
                        check_stack.pop()
                        length -= 1
                        continue
                    else:
                        flag = False
                        break
                else:
                    flag = False
                    break

        if len(check_stack) > 0:
            flag = False

        return flag








solve=Solution()

print(solve.isValid("(){}}{"))