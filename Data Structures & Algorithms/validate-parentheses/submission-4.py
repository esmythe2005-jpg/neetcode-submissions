class Solution:
    def isValid(self, s: str) -> bool:

        stack1 = deque()
        stack2 = deque() 
        matchDict = {'(': ')', '[': ']', '{': '}'}

        for i in range(len(s)):
            if len(stack2) > len(stack1):
                return False
            if s[i] in matchDict.keys():
                stack1.append(s[i])
            if s[i] in matchDict.values():
                stack2.append(s[i])
            
            if stack1 and stack2:
                if stack2[-1] == matchDict[stack1[-1]]:
                    stack1.pop()
                    stack2.pop()
                else:
                    return False

        if stack1 or stack2:
            return False
        else:
            return True

            