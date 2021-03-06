﻿ 
﻿## ﻿Лабораторна робота №11. Вступ до показчиків.
# 1. Вимоги
### 1.1 Розробник: 
* Лисенко Микола;
* студент групи КІТ 120-а;
* 20-грудня-2020.
### 1.2 Загальне завдання:
Виконати всі завдання з категорії "На відмінно".
### 1.3 Спеціальне завдання:
Дано масив масивів з N*N цілих чисел. Елементи головної діагоналі записати в одновимірний масив, упорядкувати за зростанням. 
### 1.4 Перевірив:
Асистент Челак Віктор Володимирович.
# 2. Загальний опис проекту.
Проект складається з:
* папки **src** з вихідними кодами у директоріях **p1**, **p2**, **p3**, **p4** до 4 завдань
* Doxyfile
* Makefile
* Readme

### Структура проекту:
├── Doxyfile
├── Makefile
├── README.md
├── doc
│   ├── lab11.md
│   ├── lab11.pdf
└── src
    ├── p1
    │   ├── lib.c
    │   ├── lib.h
    │   └── main.c
    ├── p2
    │   ├── lib.c
    │   ├── lib.h
    │   └── main.c
    ├── p3
    │   ├── lib.c
    │   ├── lib.h
    │   └── main.c
    └── p4
        ├── lib.c
        ├── lib.h
        └── main.c
# 3. Опис коду
## 3.1 Функціональне призначення.
Програма виписує елементи головної діагоналі двовимірного масиву в одновимірний та упорядковує їх за зростанням.
## 3.2 Опис логічної структури.
Оголошується змінної N з розміром масиву вказівників на радки матриці та масиву результатів. Матриця заповнюється за допомогою псевдовипадкового генератора.
Результуючий масив заповнюється елементами головної діагоналі, після чого викликається функція `sort()`, котра сортує елементи головної діагоналі за зростанням.

Головна функція `main()`. Схема алгоритму подана на рисунку 1.

![enter image description here](https://github.com/lysyi02/picturez/blob/main/lab11/lab11_main.png?raw=true)

**Рисунок 1** - схема алгоритму головної функції `main()`.

Функція `sort()`, сортування елементів масиву за зростанням.. Схема алгоритму зображена на рисунку 2.

![enter image description here](https://github.com/lysyi02/picturez/blob/main/lab11/lab11_sort.png?raw=true)

**Рисунок 2** - схема алгоритму функції `sort()`.

Функція `swap()`, обмін значеннями двох цілих чисел. Схема алгоритму зображена на рисунку 3.

![enter image description here](https://github.com/lysyi02/picturez/blob/main/lab11/lab11_swap.png?raw=true)
**Рисунок 3** - схема алгоритму функції `swap()`.

Функція `diagonal()`, заповнення масиву значеннями головної дагоналі таблиці. Схема алгоритму зображена на рисунку 4.

![enter image description here](https://github.com/lysyi02/picturez/blob/main/lab11/lab11_diag.png?raw=true)

**Рисунок 4** - схема алгоритму функції `diagonal()`.
Функція `randomize()`, сортування елементів масиву за зростанням.. Схема алгоритму зображена на рисунку 5.

![enter image description here](https://github.com/lysyi02/picturez/blob/main/lab11/lab11_rand.png?raw=true)

**Рисунок 5** - схема алгоритму функції `randomize()`.

## 3.3 Результат виконання програми.
Запуск програми. Результат на *рисунку 6*.

![enter image description here](https://github.com/lysyi02/picturez/blob/main/lab11/result.png?raw=true)

**Рисунок 6** - результат виконання програми. 
## Висновок
При виконанні лабораторної роботи  було набуто практичного досвіду роботи з вказівниками.
