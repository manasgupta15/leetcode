class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        // int X = 0;
        // int size = operations.size();
        // for(int i = 0; i<size; i++) {
        //     if(operations[i] == "++X" || operations[i] == "X++") {
        //         X = X + 1;
        //     }
        //     else if(operations[i] == "--X" || operations[i] == "X--") {
        //         X = X - 1;
        //     }
        // }
        // return X;

        int X = 0;
        for(const auto& op : operations) {
            if(op[1] == '+') {
                ++X;
            }
            else {
                --X;
            }
        }
        return X;
    }
};
