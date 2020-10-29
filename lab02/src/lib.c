/**
 * @file lib.c
 * @brief Файл з реалізацією функцій оперування тваринами
 *
 * @author Davydov V.
 * @date 14-apr-2020
 * @version 1.3
 */

#include "lib.h"

char *get_phone_type_name(enum phone_type type)
{
	char *result;
	switch (type) {
	case Samsung:
		result = "Самсунг";
		break;
	case Xiaomi:
		result = "Ксяомі";
		break;
	case iPhone:
		result = "Айфон";
		break;
	case Meizu:
		result = "Мейзу";
		break;
	case Lenovo:
		result = "Леново";
		break;
	default:
		result = "N/A";
	}
	return result;
}

void generate_phone (struct phone *entity)
{
	entity->height = (unsigned int)rand() % INT8_MAX;
	entity->weight = (unsigned int)rand() % INT8_MAX;
	entity->type = (unsigned int)rand() % PHONE_TYPE_COUNT;
}

void show_phones(struct phone phones[], unsigned int count)
{
	for (unsigned int i = 0; i < count; i++) {
		printf("Інформація про телефон № %02u: ", i + 1);
		printf("%s: висота = %u см, вага = %u гр. \n",
		       get_phone_type_name(phones[i].type), phones[i].height,
		       phones[i].weight);
	}
}
