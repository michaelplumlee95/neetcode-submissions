class Solution:
    def isValid(self, s: str) -> bool:

        matching_opener = {')': '(', ']': '[', '}': '{'}
        open_brackets = []

        for ch in s:
            if ch in matching_opener:
                if not open_brackets or open_brackets.pop() != matching_opener[ch]:
                    return False
            else:
                open_brackets.append(ch)
        return not open_brackets
