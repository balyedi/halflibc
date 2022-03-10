size_t
strlen(const char *str)
{
        const char *s = 0;

        for (s = str; *s; ++s)
                ;
        return (s - str);
}