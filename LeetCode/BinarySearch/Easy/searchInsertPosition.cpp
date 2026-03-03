#include <vector>
#include <iostream> 
#include <algorithm>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); //Сортировка
        int left = 0, right = nums.size(), mid; 
        while (left < right){ //Берём интервал [left, right)
            mid = left + (right - left) / 2; // Вычисление середины
            if (nums[mid] == target){ //Если элемент найден
                return mid; 
            }
            else if (nums[mid] > target){ 
                right = mid; // Берём right = mid, т.к выбран интервал [left, right), и мы можем пропустить правильную позицию
            }
            else {
                left = mid + 1; //Сдвиг left на одну позицию вправо
            }
        }
        return left;
    }
};

int main(){
    return 0;
}