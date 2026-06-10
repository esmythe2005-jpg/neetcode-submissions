class Solution {
    public boolean isAnagram(String s, String t) {

        int[] sTracker = new int[26];
        int[] tTracker = new int[26];

        if (s.length() != t.length()) {
            return false;
        }

        for (int i = 0; i < s.length(); i++) {
            sTracker[s.charAt(i) - 'a']++;
        }

        for (int i = 0; i < t.length(); i++) {
            tTracker[t.charAt(i) - 'a']++;
        }

        for (int i = 0; i < 26; i++) {
            if (sTracker[i] != tTracker[i]) {
                return false;
            }
        }

        return true;

    }
}
