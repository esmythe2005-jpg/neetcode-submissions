class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dict1 = defaultdict(list)

        for temp in strs:
            count = [0] * 26
            for c in temp:
                count[ord(c) - ord("a")] += 1 

            dict1[tuple(count)].append(temp)
        
        return list(dict1.values())