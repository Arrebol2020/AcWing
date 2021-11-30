# 第一课：

- bool的false与0比较的结果是真

- long long a = 100000000000000LL;  //超出int的表示值的时候，需要在后面加LL，防止溢出

- scanf和printf中常用类型的占位：int %d, float %f, double %lf, char %c, long long %lld

- scanf("%c", &a)会读入空格，而scanf("%d", &a)不会读入空格，使用cin方式输入字符，也不会读入空格

- cin，cout的效率低于scanf和printf

- 头文件cstdio可以使用scanf和printf

- 头文件iostream可以使用cin和cout（加上using namespce std; 后）

# 习题课

- 万能头文件：# include <bits/stdc++.h>，包含了常有的所有头文件
- prinf("%5d", a) a占用5个空间，不足左侧补空格，多了就多了。prinf("%-5d", a) 右侧补空格。prinf("%05d", a)左侧补零
- scanf("%d%c"); 若数字和字符之间有空格，则%c会读如空格，解决方法：scanf("%d %c"); 或使用cin进行读取



# 第二课

输出%，需要%%进行转义



# 第三课

曼哈顿距离：a(x1, y1), b(x2, y2) 则曼哈顿距离为：abs(x1-x2) + abs(y1-y2)

scantf("%d", &x)，当读到结束时，返回-1，scantf("%d", &x) != -1 等价于 -scantf("%d", &x)

cin 返回0表示没有读到值，即读到文件结束符EOF(等价于-1)

逗号表达式（用于逻辑表达式中）；cin >> x, x // 等于最后一个数的值

while(scanf())



# 第四课

double 判断容忍为1e-6

c++默认的栈空间是1M，想要不限制长度的数组，定义成全局变量（存放到堆）即可（全局变量没有初始化，也会默认为0）

头文件cstring的memset可以给数组赋值。

```c++
// 将数组 a 初始化为 0
memset(a, 0, 40);  // a 的数组长度为 10 ， 0 表示给每个 byte 赋的值， 40 表示数组 a 的 byte 数量

// 将数组 a 初始化为 -1
memset(a, -1, 40);

// 不会将数组 a 赋值为 *
memset(a, *, 40);  // * 表示除了 0 和 -1 的数组

// 50 可以通过 sizeof a 获得
```

头文件cstring的memcpy

```c++
memcpy(b, a, sizeof a) // 将数组a的值复制给数组b		
```





