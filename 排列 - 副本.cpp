
#include<stdio.h>

int main() {
	int a, b, c, d, e, f, g, h, i;
	for(a=1; a<=9; a++)
		for(b=1; b<=9; b++)
			for(c=1; c<=9; c++)
				for(d=1; d<=9; d++)
					for(e=1; e<=9; e++)
						for(f=1; f<=9; f++)
							for(g=1; g<=9; g++)
								for(h=1; h<=9; h++)
									for(i=1; i<=9; i++) {
										if (6 * (a * 100 + b * 10 + c) == 3 * (d * 100 + e * 10 + f) &&
												 3 * (d * 100 + e * 10 + f) == 2 * (g * 100 + h * 10 + i))
											if (a != b && a != c && a != e && a != f && a != h && a != i &&
												b != c && b != d && b != e && b != f && b != g && b != h && b != i &&
												c != d && c != e && c != f && c != g && c != h && c != i &&
												d != e && d != f && d != g && d != h && d != i &&
												e != f && e != g && e != h && e != i &&
												f != g && f != h && f != i &&
												g != h && g != i &&
												h != i)
												 printf("%d%d%d %d%d%d %d%d%d\n", a, b, c, d, e, f, g, h, i);
									}
} 

