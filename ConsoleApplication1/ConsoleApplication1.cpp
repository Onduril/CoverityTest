#include <cstdarg>
#include <cstdio>

void my_print(const char * f, ...)
{
    va_list l;
    va_start(l, f);
    std::vprintf(f, l);
    va_end(l);
}

int main(int argc, const char * argv[])
{
    my_print("argc = %d\n", argc);
    return 0;
}
