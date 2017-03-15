char str[]="ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:";
main ()
{
	char *a, *b, *c, *d, *malloc(), *gets();
	for (a = malloc (81), c = a++; a == gets(a); __DIT ('\n'))
		for ( b = a; *b; __DIT (*d ? _DAH (*c):'?'), __DIT(' '), b++)
			for (*c = 2, d = str; *d && (*d != (*b >= 'a' ? *b &223: *b)); (*c)++, d++)
				*c += (*d >='a' ? *d - 'a' : 0);
}
_DAH (c)
{
	__DIT (c > 3 ? _DAH (c >> 1) : '\0');
	return c & 1 ? '-' : '.';
}
__DIT (c)
char c;
{
(void) write (1, &c, 1);
}
