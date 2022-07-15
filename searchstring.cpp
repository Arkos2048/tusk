// C++ program for Naive Pattern
// Searching algorithm!
#include<iostream>
#include<cstring>

using namespace std;

void search(string &txt, string &pat)
{
	int M = pat.length();
	int N = txt.length();

	/* A loop to slide pat[] one by one */
	for (int i = 0; i <= N - M; i++) {
		int j;

		/* For current index i, check for pattern match */
		for (j = 0; j < M; j++)
			if (txt[i + j] != pat[j])
				break;

		if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
			cout << "Pattern found at index "<< i << endl;
	}

    if()
    {
        cout<<"not found"<<endl;
    }
}

// Driver Code
int main()
{
	string txt;
    string pat;

    cin>>txt;
    cin>>pat;

	search(pat,txt);

	return 0;
}

// This code is contributed
// by Akanksha Rai
