int search(string pat, string txt) {
        int i = 0, count = 0;
        int k = pat.size(), siz = txt.size();
        vector<int> pat_freq(26), substr_freq(26);
        for (char c : pat) pat_freq[c - 'a']++;
        for (int j = 0; j < siz; j++) {
            substr_freq[txt[j] - 'a']++;
            if (j - i + 1 > k) {
                substr_freq[txt[i] - 'a']--;
                i++;
            }
            if (j - i + 1 == k && pat_freq == substr_freq) {
                count++;
            }
        }
        return count;
    }