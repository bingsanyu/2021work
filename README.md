**1.欧几里得算法求素数**

> 欧几里得算法又称辗转相除法，用来求两个正整数的最大公约数。

文字描述形式：两个整数的最大公约数等于其中较小的那个数和两数相除余数的最大公约数。

数学形式：
<img src="https://latex.codecogs.com/svg.image?gcd(a,b)=gcd(&space;b,a\rm{mod}b)" title="gcd(a,b)=gcd( b,a\rm{mod}b)" />

伪代码形式：

```text
input a,b;   //输入两个整数。
create r;    //中间量用来存放余数。
while(b>0)
{
r=a%b;
a=b;
b=r;
}
output a;   //当b=0时，a即为最大公约数。
```

