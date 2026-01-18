#ifndef _STDLIB_H
#define _STDLIB_H

/* Implemented in Rust */
int abs(int i);
void *bsearch(const void *key, const void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));

/* Provided by tinyrlibc */
int atoi(const char *str);
void qsort(void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *));

#endif