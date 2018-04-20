Big Oh Notation (upper bound)


Function FibList(n):

create an array F[0...n]  -- O(n)
F[0] = 0  -- O(1) 
F[1] = 1  -- O(1)
for i from 2 to n: -- O(n)
	F[i] = F[i-1] + F[i-2]  --O(n) ~ addition of n digits
return F[n]    -- O(1)


O(n) + O(1) + O(1) + O(n) * O(n) + O(1) = O(n^2)



Omega notation (lower bound)
f>= g ,iff f(n) >= c*g(n) --> f grows no slower than g

Feta notation (same rate bounding)
f = g , ie

bounded above by Big Oh, and bunded below by omega



Small oh notation
f(n) = o((g(n)) ,iff f < g
f(n) / g(n) -->0 as n-->infinity



Concept of constant bound
eg
P(x) = 3*n^3 + 4 * n^2 + 5*n + 2 <= 3 * n^3 + 4 * n^3 + 5*n^3 + 2 * n^ 3 = 14 * n * n^3

Another way of visualizaing, dvide by highest power
P(x) / n^3 = 3 as n -> infinity


Quiz1

nlog2n = n
=> log2n = 1, which is not valid for all values of n; ony when n=1

Quiz2
Qn5.
5^(log2n) = O(n^2)
log2 y=(log2n)(log2 5)
      = (log2 n ^ (log25))
therefore y = n ^ (log2 5)
log2 5 > 2
Therefore n ^ (log2 5) > n ^ 2
O(y) = O(n ^ (log2 5) ) > O(n ^2)

Q6.
n^5 = O(2^3log2n)
Let y = n^5
log2 y = 5 * log2 n > 3 log2 n
Therefore y= 2 ^( 5 * log2 n) > 2 ^ ( 3 log2 n) 
Therefore O(y) > O(2 ^ ( 3 log 2 n))

Q2.
n log2 n = O(n)
n log2 n > n ^2


Quiz 3
Q1
f1 = n ^ 3
f2 = n ^ 0.3
f3 = n
f4 = n ^ 0.5
f5 = n ^ 3/2
f6 = n ^ 2

f2 = n ^ 0.3, f4 = n ^ 0.5, f3 = n, f5 = n ^ 3/2 ,f6 = n^2, f1 = n^3

Q2
f1 = 3 ^ n
f2 = n log2 n
f3 = log4 n
f4 = n
f5 = 5 ^ (log2n)
f6 = n ^ 2
f7 = n ^ 0.5
f8 = 2 ^ (2n)


f3 = log4 n

f7 = n ^ 0.5

f4 = n

f2:
y = n log2 n < n ^ 2

f6 = n ^ 2

f5:
y = 5 ^ (log2n)
log y = log2n * log 5

f1:
y = 3 ^ n 
log y = n log 3

f8:
y=2 ^(2n)
log y = 2n log 2








