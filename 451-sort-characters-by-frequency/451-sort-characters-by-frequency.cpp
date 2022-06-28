class Solution {
public:
    string frequencySort(string s) {
        //string s; cin >> s;

	int  n = s.length();

	unordered_map<char, int> mp;

	for (auto x : s) {
		mp[x]++;
	}

	priority_queue<pair<int, char>>pq;


	for (auto [ch, freq] : mp) {
		pq.push({freq, ch});
	}


	string res;

	pair<int, char> curr;

	while (!pq.empty()) {
		curr = pq.top();
		pq.pop();
		res += string(curr.first, curr.second);
	}
    return res;
    }
};