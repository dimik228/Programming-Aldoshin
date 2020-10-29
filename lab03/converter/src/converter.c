#include <stdio.h>	
#include <stdlib.h>

int main()
{
	#define uah 100; // Сума гривень 
	const (double) usd = 28.27; // Доллар до гривні
	const (double) eur = 33.33; // Евро до гривні
	const (double) rub = 0.36;  // Буль до гривні
	float uah_usd  = 100/28.27; // Доллар до гривні 
	float uah_eur = 100/33.33; // Евро до гривні 
	float uah_rub = 100/0.36 ;// Рубль до гривні 
	return 0 
}
