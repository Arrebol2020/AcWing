# 典型

## 菱形

输入整数 NN，输出一个 NN 阶的回字形二维数组。

数组的最外层为 11，次外层为 22，以此类推。

#### 输入格式

输入包含多行，每行包含一个整数 NN。

当输入行为 N=0N=0 时，表示输入结束，且该行无需作任何处理。

#### 输出格式

对于每个输入整数 NN，输出一个满足要求的 NN 阶二维数组。

每个数组占 NN 行，每行包含 NN 个用空格隔开的整数。

每个数组输出完毕后，输出一个空行。

#### 数据范围

0≤N≤1000≤N≤100

#### 输入样例：

```
1
2
3
4
5
0
```

#### 输出样例：

```
1

1 1
1 1

1 1 1
1 2 1
1 1 1

1 1 1 1
1 2 2 1
1 2 2 1
1 1 1 1

1 1 1 1 1
1 2 2 2 1
1 2 3 2 1
1 2 2 2 1
1 1 1 1 1
```

#### 代码

> 通过计算曼哈顿距离求解
>
> - 曼哈顿距离：a(x1, y1), b(x2, y2) 则曼哈顿距离为：abs(x1-x2) + abs(y1-y2)
>
> - 计算出中心点的值，c_x, c_y
> - 曼哈顿距离小于等于 c_x 输出 * 

```c++
#include <iostream>

using namespace std;

// 菱形
int main(){
    int n;

    cin >> n;

    int c_x = n / 2, c_y = n / 2;
    int dist;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            dist = abs(c_x - i) + abs(c_y - j);

            if( dist <= c_x) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}
```



## 翻转数组

```c++
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
		int a[100];
		
		int n, k;
		cin >> n >> k;
		
		for( int i = 0; i < n; i++) cin >> a[i];
		
		reverse(a, a + n);
		reverse(a, a + k);
		reverse(a + k, a + n);
		
		for( int i = 0; i < n; i ++) cout << a[i] << ' ';
		
		return 0;
}
```



## 平方矩阵

输入整数 NN，输出一个 NN 阶的回字形二维数组。

数组的最外层为 11，次外层为 22，以此类推。

#### 输入格式

输入包含多行，每行包含一个整数 NN。

当输入行为 N=0N=0 时，表示输入结束，且该行无需作任何处理。

#### 输出格式

对于每个输入整数 NN，输出一个满足要求的 NN 阶二维数组。

每个数组占 NN 行，每行包含 NN 个用空格隔开的整数。

每个数组输出完毕后，输出一个空行。

#### 数据范围

0≤N≤1000≤N≤100

#### 输入样例：

```
1
2
3
4
5
0
```

#### 输出样例：

```
1

1 1
1 1

1 1 1
1 2 1
1 1 1

1 1 1 1
1 2 2 1
1 2 2 1
1 1 1 1

1 1 1 1 1
1 2 2 2 1
1 2 3 2 1
1 2 2 2 1
1 1 1 1 1
```

#### 代码：

> 数组下标从 1 开始 到 n
>
> - 计算当前 i j 对应位置距离各个定点的距离
> - up = i，down = n - i + 1，left = j，right = n - j + 1
> - 这个距离则为当前位置的要输出的值

```c++
#include <iostream>
#include <algorithm>

using namespace std;

// 平方矩阵I
int main(){
    int n;

    while(cin >> n, n){
        for( int i = 1; i <= n; i++){
            for( int j = 1; j <= n; j++){
                int up = i, down = n - i + 1, left = j, right = n - j + 1;
                cout << min(min(up, down), min(left, right)) << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
```



