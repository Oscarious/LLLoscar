/*水题= =，比C的构造不知道水到哪里去了

从后往前考虑，最后一个s[n]一定就是比a[n]小的所有数字的和，所以可以直接算出a[n]。

接下来，s[n-1]是去掉a[n]之后的情况下，比a[n-1]小的所有数字的和，我们也可以知道a[n-1]的值

这样用一个树状数组维护一下去掉后面已经确定的数字，当前情况下的前缀和即可
*/