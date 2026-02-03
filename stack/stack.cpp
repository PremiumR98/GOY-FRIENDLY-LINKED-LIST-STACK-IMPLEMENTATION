#include "mystack.h"

int main()
{
	setlocale(LC_ALL, "");

	int menu_var = 0;
	int data;

	mystack stk;

	int counter = 1;
	node* temp;

	while (menu_var != 4)
	{
		cout << "\n\n-МЕНЮ-\n\n";
		cout << "1. Основные методы, реализуемые в классе:\n";
		cout << " 11. Добавление элемента в начало\n";
		cout << " 12. Удаление элемента из начала\n";
		cout << " 13. Получение значения из вершины стека\n";
		cout << " 14. Проверка стека на пустоту\n";
		cout << " 15. Очистка стека\n\n";
		cout << "2. Вспомогательные методы, реализуемые в классе:\n";
		cout << " 21. Получение указателя на первый элемент\n";
		cout << " 22. Получение указателя на следующий элемент\n";
		cout << " 23. Получение значения поля данных по значению указателя на элемент стека\n\n";
		cout << "3. Дополнительные операции, которые реализуются в главном модуле:\n";
		cout << " 31. Поиск элемента по значению поля данных\n";
		cout << " 32. Просмотр стека\n";
		cout << " 33. Рандомное заполнение стека\n";
		cout << " 34. Запись стека в файл\n";
		cout << " 35. Чтение стека из файла\n\n";
		cout << "4. Выход\n\n";
		cout << "Введите нужный пункт меню: ";
		cin >> menu_var;
		cout << "\n";

		switch (menu_var) {
		case 11:
			cout << " Введите данные: ";
			cin >> data;
			stk.push(data);
			break;
		case 12:
			stk.pop();
			break;
		case 13:
			cout << " Значение вершины: " << stk.get_top() << "\n";
			break;
		case 14:
			if (stk.is_empty() == true)
			{
				cout << " Стэк пуст";
			}
			else
				cout << " Стэк не пуст";
			break;
		case 15:
			stk.clear_stk();
			break;
		case 21:
			if (stk.get_it_first() != NULL) {
				cout << " Первый элемент находится в: " << stk.get_it_first();
			};
		case 22:
			if (stk.get_it_next(stk.get_it_first()) != NULL) {
				cout << " Следующий элемент находится в: " << stk.get_it_first();
			};
			break;
		case 23:
			if (stk.get_it_first() != NULL) {
				stk.get_it_val(stk.get_it_first());
			}
		case 31:
			cout << " Введите нужный элемент стэка: ";
			cin >> data;
			cout << "\n";
			temp = stk.get_it_top();
			while (temp->data != data) {
				temp = temp->next;
				counter++;
			}
			cout << " Элемент находится на позиции: " << counter;
			break;
		case 32:
			temp = stk.get_it_top();
			while (temp != NULL) {
				cout << "Элементы стэка: ";
				cout << temp->data << " ";
				temp = temp->next;
			}
			break;
		}
	}
}