class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        int p = m - 1;
        int q = n - 1;
        int j = m + n - 1;

        while (q >= 0 && p >= 0) {
            if (n1[p] < n2[q]) {
                n1[j] = n2[q];
                j--;
                q--;
            }
            else {
                n1[j] = n1[p];
                j--;
                p--;
            }
        }

        while (q >= 0) {
            n1[j] = n2[q];
            j--;
            q--;
        }
    }
};
