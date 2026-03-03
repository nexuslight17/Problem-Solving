Задачи с лёгким уровнем сложности
#Intersection of Two Arrays II
Идея: Для каждого элемента в меньшем векторе ищем совпадение в большем векторе
Использованные инструменты: Сортировка, Бинарный поиск
Сдвигаем левую границу переменной s, чтобы не попадались повторяющиеся элементы

#Search Insert Position
Идея: Найти первый элемент >= target, а left - будет выступать в роли минимального индекса позиции. Использованный интервал [left, right).
Использованные инструменты: Сортировка, Бинарный поиск
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.
Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4
Constraints:
    1 <= nums.length <= 10^4
    -10^4 <= nums[i] <= 10^4
    nums contains distinct values sorted in ascending order.
    -10^4 <= target <= 10^4
