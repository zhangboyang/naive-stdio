#include <stdio.h>
#include <string.h>
#include "naive-stdio.h"

int naive_strlen(const char *s)
{
    const char *p = s;
    while (*p) p++;
    return p - s;
}

int naive_memcmp(void *p1, void *p2, int n)
{
    unsigned char *s1 = p1, *s2 = p2;
    int i;
    for (i = 0; i < n; i++)
        if (s1[i] < s2[i])
            return -1;
        else if (s1[i] > s2[i])
            return 1;
    return 0;
}

void naive_memset(void *p, char c, int n)
{
    unsigned char *s = p;
    int i;
    for (i = 0; i < n; i++)
        s[i] = c;
}


char input_buffer[] = " -214 7482648asdfdasdasf -9223372036854775808 1234567890123456789";
char output_buffer[128];

int main()
{
    int cnt = 0;
    int x;
    long long ll;
    char s[100];
    memset(output_buffer, 'E', sizeof(output_buffer));
    cnt = naive_scanf("%d%s %lld", &x, s, &ll);
    naive_printf("cnt %d, out: %s, x=%d, ll=%lld\n", cnt, s, x, ll);
    finish_output();
    printf("cnt %d, out: %s, x=%d, ll=%lld\n", cnt, s, x, ll);
    printf("%s", output_buffer);
    return 0;
}


