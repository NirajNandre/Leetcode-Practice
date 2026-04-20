class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
		int currMax = arr[n-1];
		arr[n-1] = -1;

		int i = n-2;
		while(i >= 0) {
			int temp = arr[i];
			arr[i] = currMax;
			if(temp > currMax) {
				currMax = temp;
			}
			i--;
		}

		return arr;
    }
};