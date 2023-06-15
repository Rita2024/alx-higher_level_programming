#include <python.h>

/**
 * print_python_list_info - prints python list info
 * @p: PyObject
 * Return: no return
 */
<<<<<<< HEAD

void print_python_list_info(PyObject *p)
{
	Py_ssize_t size;
=======
void print_python_list_info(PyObject *p)
{
	long int size = size = Py_SIZE(p);
	PyListObject *list;
>>>>>>> 0066fc0e861d4ef0dfc0c58568f04fd868b8ae79
	PyObject *item;
	long int x;

	printf("[*] Size of the Python List = %ld\n", size);

	list = (PyListObject *)p;
	printf("[*] Allocated = %ld\n", list->allocated);

	for (x = 0; x < size; x++)
	{
		item = PyList_GetItem(p, x);
		printf("Element %ld: %s\n", x, Py_TYPE(item)->tp_name);
	}
}
