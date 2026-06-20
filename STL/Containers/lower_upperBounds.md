built-in member functions run in logarithmic time O(log n)

lower_bound(val)
    Element ≥ val
    If Value Exists : Returns iterator to val itself.
    Otherwise : Returns iterator to the next largest element.

s.upper_bound(val)
    Element > val
    If Value Exists : Returns iterator to the next largest element.
    Otherwise : Returns iterator to the next largest element.