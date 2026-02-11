#include <vector>
#include <iostream> 
#include <algorithm>
using namespace std;
class Solution {
public:
    int binarySearch(int x, int s, vector<int>& nums){ /*x - элемент который нужно найти, s - переменная для сдвига левого индекса границы, nums - вектор*/
        int left = s, right = nums.size() - 1, mid;     /*left - крайний левый индекс, right - крайний правый индекс, mid - индекс середины*/
        while (left <= right){ 
            mid = left + (right - left) / 2; //Формула нахождения индекса середины
            if (nums[mid] == x){  //Если элемент вектора nums[mid] == x, то функция возвращает  индекс середины 
                return mid; 
            }
            else if (nums[mid] > x){  //Если элемент вектора nums[mid] > x, то сдвигаем правый индекс границы на mid - 1
                right = mid - 1;
            }
            else { //Если элемент вектора nums[mid] < x, то сдвигаем левый индекс границы на mid + 1
                left = mid + 1;
            }
        }
        return -1; //Если элемент не удалось найти, то функция возвращает -1
    }

    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end()); //Сортировка вектора nums1 по возрастанию
        sort(nums2.begin(), nums2.end()); //Сортировка вектора nums2 по возрастанию
        if (nums1.size() > nums2.size()){ //Если размер nums1 > nums2, то меняем векторы местами
            nums1.swap(nums2);
        }
        vector<int> res; //Вектор результата
        int s = 0; //Задаём левую границу для бинарного поиска
        for (int i : nums1){ //Проходимся переменной i по вектору nums1
            int idx = binarySearch(i, s, nums2); //idx - хранит результат функции binarySearch
            if (idx != -1){ //Если результат функции не равен -1
                res.push_back(i); //Добавляем в вектор результата найденный элемент i(i = x)
                s = idx + 1; //Сдвигаем левый индекс границы на mid + 1, чтобы избежать повторения одинаковых эелемент
            }
        }
        return res; //Возвращаем результирующий вектор
    }
};

int main(){
    return 0;
}