void  *memset(void *b, int c, size_t len)
{
  uint16_t i;
  unsigned char *p = b;
  i = 0;
  while(len > 0)
    {
      *p = c;
      p++;
      len--;
    }
  return(b);
}