/**
 * @mainpage
 * # Загальне завдання
 * 1. **Сформувати** функцию, що генерирує структуру із залученням механізму
 * випадкової генерації даних (прикладная галузь вказана в індивідуальному
 * завданні);
 *
 * 2. **Сформувати** функцію, яка буде виводити масив структур на екран
 *
 * @author Davydov V.
 * @date 14-apr-2020
 * @version 1.3
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи структури {@link phone} та методів
 * оперування ним.
 *
 * @author Davydov V.
 * @date 14-apr-2020
 * @version 1.3
 */

#include "lib.h"

/**
 * Головна функція.
 *
 * Послідовність дій:
 * - створення масиву із {@link PHONE_COUNT} телефонів
 * - генерація даних для кожного телефона шляхом виклика функції
 * {@link generate_phone}
 * - вивід даних про всі телефони на екран за допомогою функції
 * {@link show_phones}
 * @return успішний код повернення з програми (0)
 */
int main()
{
	srand((unsigned int)time(0));
	struct phone phones[PHONE_COUNT];

	for (unsigned int i = 0; i < PHONE_COUNT; i++) {
		generate_phone(&phones[i]);
	}
	show_phones(phones, PHONE_COUNT);

	return 0;
}
