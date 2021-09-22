#include<iostream>
#include<vector>

using namespace std;

// Function to reverse a vector, returns a different vector in reverse order
vector<string> reverse(vector<string> names) {

	vector<string> vReverse;
    // Vectors operate with size_t as far as indexing goes
    size_t index = names.size();
    while (index > 0)
        vReverse.push_back (names[--index]);
        // Creation of the new vector
	return vReverse;
}

// Function prints out vectors
void print(vector<string> V) {
	for(int i = 0; i < V.size(); i++) {
			cout<< V[i] << endl;
		}

}


int main() {
	vector<string> names;

	names.push_back("JOE");
	names.push_back("BILLY");
	names.push_back("BOB");

    // Assigning the original vector to the new one
	names = reverse(names);
	print(names);

	return 0;
}