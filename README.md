# experiment3_task1
汉诺塔

汉诺塔是一个经典的递归问题。有三根柱子，分别标记为 A、B 和 C。在柱子 A 上有 n 个大小不同的圆盘，这些圆盘按照从小到大的顺序堆叠，小的在上，大的在下。目标是将所有圆盘从柱子 A 移动到柱子 C，移动过程中需要遵守以下规则：

每次只能移动一个圆盘。

每次移动时，将最上面的圆盘从一根柱子移动到另一根柱子的最上面。

在任何时候，都不能将较大的圆盘放在较小的圆盘之上。

请编写程序，输出将 n 个圆盘从柱子 A 移动到柱子 C 的所有移动步骤。

【输入描述】

一行，包含一个正整数 n（1 ≤ n ≤ 10），表示圆盘的数量。

【输出描述】

若干行，每行描述一次移动操作。

格式为：

Move disk from [source] to [destination]

其中 [source] 和 [destination] 分别代表起始柱子和目标柱子的名称（A、B 或 C）。

【输入示例】

1

【输出示例】

Move disk from A to C

【输入示例】

3

【输出示例】

Move disk from A to C

Move disk from A to B

Move disk from C to B

Move disk from A to C

Move disk from B to A

Move disk from B to C

Move disk from A to C
