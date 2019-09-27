#!/usr/bin/env python3

x, y = map(float, input().split())
a = complex(x, y)
x, y = map(float, input().split())
b = complex(x, y)

def cmp(a, b):
    return 1 if (abs(a) > abs(b)) else 0 if (abs(a) == abs(b)) else -1;

print("Addition:", "%.3f" % (a + b).real, "%.3f" % (a + b).imag, sep = ' ')
print("Subtraction:", "%.3f" % (a - b).real, "%.3f" % (a - b).imag, sep = ' ')
print("Multiplication:", "%.3f" % (a * b).real, "%.3f" % (a * b).imag, sep = ' ')
print("Division:", "%.3f" % (a / b).real, "%.3f" % (a / b).imag, sep = ' ')
print("Comparsion a == b:", 1 if (a == b) else 0)
print("Conjugate numbers: ")
print("%.3f" % a.conjugate().real, "%.3f" % a.conjugate().imag, sep = ' ')
print("%.3f" % b.conjugate().real, "%.3f" % b.conjugate().imag, sep = ' ')
print("Module comparsion:", cmp(a, b))
    
