#ifndef SAMPLE_PROJECT_LIB_H
#define SAMPLE_PROJECT_LIB_H

/**
 * @file lib.h
 * @brief Файл з описом структури телефона, перерахуванням типу телефонів та функцій
 * оперування телефонами
 *
 * @author Davydov V.
 * @date 14-apr-2020
 * @version 1.3
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Килькість телефонів в масиві
 */
#define PHONE_COUNT 4

/**
 * Тип телефона
 */
enum phone_type {
	Samsung, /**< Самсунг */
	Xiaomi, /**< Ксяомі */
	iPhone, /**< Айфон */
	Meizu, /**< Мейзу */
	Lenovo, /**< Леново */
	PHONE_TYPE_COUNT /**< Килькість телефонів */
};

/**
 * Структура «Телефон»
 */
struct phone {
	enum phone_type type; /**< Тип телефона */
	unsigned int height; /**< Висота телефона, см */
	unsigned int weight; /**< Вага телефона, грам */
};

/**
 * Отримання текстового представлення значення типу телефона
 * @param type значення перерахувааня типу телефона
 * @return текстове репрезентування типу
 */
char *get_phone_type_name(enum phone_type type);

/**
 * Створення даних про телефон.
 *
 * Функція генерує та повертає телефон з випадковими значеннями її полів
 * @param entity структура {@link phone} для заповнення
 */
void generate_phone(struct phone *entity);

/**
 * Вивід до екрану вмісту масиву з даними про телефони.
 *
 * Функція у циклу виводить дані на екран про кожний елемент масиву
 * з даними про телефон у наступному форматі:
 * "Тип_телефона: висота = висота_телефона см, вага = вага_телефона гр."
 * @param phones масив з даними о телефонах, які необхідно вивести на екран
 * @param count кількість телефонів у переданому масиві
 */
void show_phones(struct phone phones[], unsigned int count);

#endif
