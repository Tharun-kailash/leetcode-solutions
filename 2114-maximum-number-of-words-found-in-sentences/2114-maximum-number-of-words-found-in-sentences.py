class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        l=[]
        for i in sentences:
            l.append(i.count(' ')+1)
        return max(l)