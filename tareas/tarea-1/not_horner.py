#!/usr/bin/env python

from typing import List, Tuple

def not_horner(a: List[float],  # Coefficients
               x: float         # Value of x
              ) -> Tuple[float, float]:
                  # (p(x), p'(x))
    p = 0.0
    for i in range(len(a)):
        p += a[i] * x**i

    q = 0.0
    for i in range(1, len(a)):
        q += i * a[i] * x**(i - 1)
    return (p, q)

if __name__ == "__main__":
    a = []
    n = int(input("n: "))
    for i in range(n + 1):
        a.append(float(input(f"a[{i}]: ")))
    x = float(input("x: "))
    (p, q) = not_horner(a, x)
    print(f"p: {p}, q: {q}");
