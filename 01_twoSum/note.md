# Leetcode 01 两数之和
链接  https://leetcode-cn.com/problems/two-sum/

## 想法
一开始是想先排序，排序之后从左向右遍历，根据每个遍历到到数字去向右**二分查找**它的匹配数字。

这样的话复杂度应该是排序的O(nlogn) + O(nlogn)。

后来回家的时候想到或许可以用**two pointer**优化一下。

还是忒先排序，排序之后，左右指针都放在数组中间位置，让数组内容相加，相加之后和target比较，如果比target小就让左指针左移，如果比target大就让右指针右移。

