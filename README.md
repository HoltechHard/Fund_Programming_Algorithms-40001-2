# Fundamentals of Programming and Algorithms - 5130203/40001-2  

* Цель    
  Курс «**Основы программирования и алгоритмизации**» призван предоставить студентам специальности "**Математика и компьютер науки** - Направление: **Математическое обеспечение и администрирование информационных систем**» теоретические и технические основы, необходимые для будущей реализации передовых алгоритмов и структур данных, внедрения решений в области программной инженерии, а также глубокое понимание парадигмы объектно-ориентированной разработки на языке C++ как шлюза к разработке на языках высокого уровня, таких как Java, Python, C#, Go и Ruby.

* Организации предмед   
  - Каждые 2 недели изучаем новые темы (теория + практическая лабораторная работа - список упражнений);   
  - В конце изучения новой темы, надо решать домашний задания задается список из 2 упражнений;  
  - Домашнее задание выполняется в группах по 2 студенты. Задания публикуются в личных аккаунтах Github каждого студента. Срок: 2 недели на каждое задание;  
  - Оценка курса состоит из: домашнее заданий + 1 теоретического экзамена (преп. Глазунов) и 2 лабораторных экзаменов (экзамен 1: 7-го неделя и экзамен 2: 15-го неделя, преп. Хольгер) + курсовая работа (программа + отчет).  


### Урок 04 - Методы и классы дружеского типа. Перегрузка операторов  
---------------------------------------------------------------------    

**Главные Подтемы:**  
  - Привилегии доступа в ООП: public, protected, private и friend  
  - методы типа friend  
  - классы типа friend  
  - Работать с объектами с вызов по ссылка и по значеню  
  - перегрузка операции +, -, +=, -=, [], <<  
  - Разработка базы данных «ключ-значение»  
  
**Теории и Синтаксис С++**  

                              Характеристики передачи объектов в функциях  

| Тип параметра      | Создаются копии? | Можно изменять? | Может связываться с временными объектами? |
|--------------------|------------------|-----------------|--------------------------------------------|
| `const Point &p`   | Нет              | Нет             | Да                                         |
| `Point &p`         | Нет              | Да              | Нет                                        |
| `Point p`          | Да               | Да              | Да                                         |
   
                      Операции с объектами с использованием вызова по ссылке и вызова по значению           

| Характеристика               | вызов по ссылки (`Point&`)               | Вызов по ссылки (`Point`)                  |
|-----------------------|--------------------------------------------|------------------------------------------|
| **Передача параметров** | по ссылки (`Point &p`)                  | по ссылки (копия `Point p`)              |
| **Изменяет исходный объект** |  Да (напрямую изменяет вызывающий объект)       | Нет (изменяет только локальную копию)            |
| **Тип возвращаемого значения**       | Ссылка (`Point&`)                       | Новый объект (`Point`)                    |
| **Поддержка цепочек**  | Да (например, `a -= b -= c` работает)            | Нет (возвращает временное значение, прерывает цепочку)  |
| **Производительность**       | Эффективность (без копий)                      | Неэффективность (создает копии)            |
| **Ожидаемое использование**      | Стандарт для составного присваивания (`-=`)   | неожидаемое   |

    
### Урок 03 - Наследование и отнощения между классы   
----------------------------------------------------     
  
**Домашнее Задание:**    
  <Еще определяющий ...>  
  
**Главные Подтемы:**  
  - наследование классов и типы наследования
  - преопределение методов и виртуальные функции
  - многоуровневое наследование
  - многократное наследование
  - абстрактные классы
  
**Теории и Синтаксис С++**   
  * простой наследования
      
  ![image](https://github.com/user-attachments/assets/7a3ea3ee-d6b2-4033-9142-d46fb525efc5)  
      
  * типы наследования
     
  ![image](https://github.com/user-attachments/assets/d67e1c76-49a2-4ac6-8e62-716d9a1e0e27)   
      
    
### Урок 02 - Массив объектов и указателей на объекты  
------------------------------------------------------    
  
**Домашнее Задание:**   
  - Срок поставки: от **16.03.25 - до 27.03.25**  
  - Разработать список **Массив объектов и указателей на объекты** ДЗ-02 из 2 упражнений из файла **task02/list_dz02_ru.pdf**  
  - разработать исходный код + публикация на GitHub (группы из 2 студентов)  
  
**Главные Подтемы:**   
  - Вектор объектов класса  
  - Вектор указателей на объекты   
  - Операции CRUD на вектор объектов
  - Автоматическая компиляция и сборка программ с помощью Makefile   
     
**Теории и Синтаксис С++**   
  <Еще определяющий ...>    
  
### Урок 01 - Классы и Объекты   
-------------------------------   

**Домашнее Задание:**    
  - Срок поставки: от **24.02.25 - до 07.03.25**  
  - Разработать список **Классы и объектов** ДЗ-01 из 2 упражнений из файла **task01/list_dz01_ru.pdf**  
  - разработать исходный код + публикация на GitHub (группы из 2 студентов)  
    
**Главные Подтемы:**  
  - Введение ООП (объектно-ориентирование программирование)  
  - классы и объекты  
  - Парадигма общей теории объектов  
  - Инкапсуляция, Наследование, Полиморфизм  
  - Перегрузка функций/процедур  
  - Конструктор и Деконструктор 
    
**Теории и Синтаксис С++**   
  <Еще определяющий ...>    
     
