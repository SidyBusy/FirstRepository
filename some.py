def f(s1, s2, m):
    if s1 + s2 >= 207:
        return m % 2 == 0
    if m == 0:
        return False
    
    h = [f(s1 + 1, s2, m - 1), f(s1 * 2, s2, m - 1), f(s1, s2 + 1, m - 1), f(s1, s2 * 2, m - 1)]
    if m % 2 != 0:
        return any(h)
    return all(h)



print([x for x in range(2, 190) if f(17, x, 2)])
print([x for x in range(2, 190) if not f(17, x, 1) and f(17, x, 3)])
print([x for x in range(2, 190) if not f(17, x, 2) and f(17, x, 4)])