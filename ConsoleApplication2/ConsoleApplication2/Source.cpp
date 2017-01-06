int *p_allocated = (int*)malloc(sizeof(int) * n);
int *p_copy = p_allocated;
// programmer should use p_copy, not with p_allocated!
// e.g.:
while (n--) { *p_copy++ = n; }
...
free(p_allocated);