#include <bits/stdc++.h>
#define int long long int
#include <random>
using namespace std;
#define uid(a,b) uniform_int_distribution<long long>(a,b)(rng)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
const int mod1 = 998244353;
const int mod2 = 1000000007;
int gcd(int a,int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int power(int x,int y, int md = mod2){
    int res = 1;
    if (md == -1) {

        while (y) {
            if(y&1)res = (res*x);
            x *= x;
            y >>= 1;
        }
        return res;
    } else {
        x %= md;
        while (y) {
            if(y&1)res = (res*x)%md;
            x *= x;
            if(x>=md) x %= md;
            y >>= 1;
        }
        return res;
    }
}
void psum(int *arr, int* psums, int n){
    psums[0] = arr[0];
    for (int i=1;i<n;i++) {
        psums[i] = psums[i-1]+arr[i];
    }
}

int max(int a, int b){
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
pair<int, int> intersect(pair<int, int> p1, pair<int, int> p2){
    return pair<int, int>(max(p1.first,p2.first),min(p1.second,p2.second));
}
struct cmp {
    bool operator() (vector<int> a, vector<int> b) const {
        int i = 0;
        while (a[i] == b[i] && i < a.size()-1) {
            i++;
        }
        return a[i]<b[i];
    }
};
int gcda(int* a, int n, int start){
    int ans = 0;
    for (int i=start;i<n;i+= 2) {
        ans = gcd(ans, *(a+i));
    }
    return ans;
}
//bool check(int *a, int n, int start, int g){
//    bool ans = true;
//    for (int i=start;i<n;i+= 2) {
//        if (*(a+i)%g == 0) {
//            ans = false;
//            break;
//        }
//    }
//    return ans;
//
//}
bool check(int x[], int lo, int ri, int y[], int st){
    for (int i=lo;i<= ri;i++) {
        if(x[i] != y[st+i-lo]){
            return false;
        }
    }
    return true;
}
int min(int x, int y, int z){
    return min(x,min(y,z));

}
struct cmp2 {
    bool operator() (int a, int b) const {
        return a%3<b%3;
    }
};
int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n = 230;
	string s[n];
	set<string> se;
	for(int i = 0; i < n; i++){
		cin >> s[i];
		//if(s[i].length() == 11){
			//string t = "001210000";
			//int c = 0;
			//if(s[i][4]-'A'<26){
				//c = 'a'-'A';
			//} 
			//for(int j = 0; j < 2; j++){
				//t[j] = (char) s[i][j+4]+ c;
			//}
			//t[2] = s[i][6];
			//for(int j = 5; j < 9; j++){
				//t[j] = s[i][j+2];
			//}
			//se.insert(t);
		//} else {
			//se.insert(s[i]);
		//}
		for(int j = 0; j < s[i].length(); j++){
			if(s[i][j] >= 97){
				s[i][j] = (char) s[i][j]-32
			}


		}

	}
	for(auto i : se){
		cout << i << '\n';
	}




}


