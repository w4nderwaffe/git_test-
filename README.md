# Расчетная работа. Теория графов
## Цель:
 Ознакомиться с понятием графов.
- Выяснить, какие виды графов бывают.
- Ознакомиться со способами представления графов в памяти компьютера.
- Научиться решать теоретико-графовые задачи.

## Вариант:
Вариант 1.21. Граф задается матрицей инцидентности. Необходимо определить является ли граф планарным.

Варианты можно найти [тут](https://drive.google.com/file/d/1-rSQZex8jW-2DlY2kko18gU1oUAtEGHl/view).

## Пошаговое выполнение работы:

### 1.Ввод матрицы инцидентности:

Принимает параметры:
 * matrix: матрица инцидентности графа
 * vertices: количество вершин
 * edges: количество рёбер

Функция inputIncidenceMatrix запрашивает у пользователя ввод значений матрицы инцидентности и заполняет её. 
Каждая строка соответствует вершине, а каждый столбец — ребру графа.

![](https://github.com/w4nderwaffe/git_test-/blob/main/Снимок%20экрана%202024-12-03%20в%2023.50.07.png)

### Проверка на наличие подграфов K5:

Функция containsK5 проверяет, содержит ли граф подграф K5:

* Перебирает все комбинации из 5 вершин;
* Для каждой комбинации проверяет наличие всех 10 рёбер между выбранными вершинами;
* Возвращает true, если подграф найден, иначе false.

![](https://github.com/w4nderwaffe/git_test-/blob/main/Снимок%20экрана%202024-12-03%20в%2023.50.53.png)


### 3.  Проверка на наличие подграфов K3,3:

Функция containsK33 проверяет наличие подграфа K3,3:

* Перебирает комбинации из 3 вершин и 2 других, которые не входят в первую группу;
* Проверяет наличие всех 6 рёбер между двумя группами;
* Возвращает true, если подграф найден, иначе false.

![](https://github.com/w4nderwaffe/git_test-/blob/main/Снимок%20экрана%202024-12-03%20в%2023.51.38.png)

### 4. Проверка планарности графа:

Функция isPlanar использует результаты предыдущих функций:

* Возвращает true, если граф не содержит ни K5, ни K3,3;
* True указывает на то, что граф является планарным.

![](https://github.com/w4nderwaffe/git_test-/blob/main/Снимок%20экрана%202024-12-03%20в%2023.52.04.png)

### 5. Основная функция:

В функции main:

* Запрашивается количество вершин и рёбер у пользователя;
* Создаётся матрица инцидентности заданного размера;
* Вызываются функции для ввода данных и проверки планарности графа;
* Результат выводится на экран.

![](https://github.com/w4nderwaffe/git_test-/blob/main/Снимок%20экрана%202024-12-03%20в%2023.52.29.png)

## Вывод:

В ходе работы был реализован алгоритм проверки планарности графа на языке C++. Код позволяет определить, является ли граф планарным, основываясь на его матрице инцидентности, с использованием методов проверки на наличие подграфов K5 и K3,3.

## Использованные источники:

Информация для работы с графами на C++ была взята [отсюда](https://brestprog.by/topics/);

Дополнительную информацию можно найти [по ссылке](https://www.google.com/);
