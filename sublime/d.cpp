#include <bits/stdc++.h>
using namespace std;

struct SegmentEntry {
    int base;    
    int limit;   
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num_segments;
    cin >> num_segments;
    
    vector<SegmentEntry> segment_table(num_segments);
    
    for(int i = 0; i < num_segments; i++) {
        cin >> segment_table[i].base;
        cin >> segment_table[i].limit;
    }
    
    int segment_number, offset;
    cin >> segment_number >> offset;
    
    if(segment_number >= num_segments || segment_number < 0) {
        cout << "ERROR: Invalid segment number!" << endl;
        return 0;
    }
    
    if(offset >= segment_table[segment_number].limit) {
        cout << "ERROR: Segmentation fault! Offset exceeds segment limit." << endl;
        cout << "Offset: " << offset << ", Segment limit: " << segment_table[segment_number].limit << endl;
        return 0;
    }
    
    int physical_address = segment_table[segment_number].base + offset;
    
    cout << "num_segments: " << num_segments << endl;
    for (int i = 0; i < num_segments; ++i) {
      cout << "Base: " << segment_table[i].base << "; ";
      cout << "Limit: " << segment_table[i].limit << endl;
    }

    cout << "segment_number: " << segment_number << " " << "offset: " << offset << endl;

    cout << "\n=== Address Translation ===" << endl;
    cout << "Logical Address: (" << segment_number << ", " << offset << ")" << endl;
    cout << "Segment " << segment_number << " -> Base: " << segment_table[segment_number].base 
         << ", Limit: " << segment_table[segment_number].limit << endl;
    cout << "Physical Address: " << segment_table[segment_number].base << " + " << offset 
         << " = " << physical_address << endl;
    
    return 0;
}
