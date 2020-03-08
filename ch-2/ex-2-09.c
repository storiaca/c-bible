/* bitcount: count 1 bits in x - faster version */

int bitcount(usigned x)
{
  int b;

  for (b = 0; x != 0; x &= x - 1)
    ++b;
  return b;
}