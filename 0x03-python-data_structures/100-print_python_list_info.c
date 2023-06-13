#include <stdio.h>
#include <Python.h>

/**
 * print_python_list_info - prints python list info
 *
 * @p: PyObject
 * Return: no return
 */

void print_python_list_info(PyObject *p) {
	Py_ssize_t size;
	PyObject *item;
	Py_ssize_t x;

	size = PyList_Size(p);
	printf("[*] Size of the Python List = %ldn", size);

	printf("[*] Allocated = %ldn", ((PyListObject *)p)->allocated);

	for (x = 0; x < size; x++)
	{
		item = PyList_GetItem(p, i);
		printf("Element %ld: %sn", i, Py_TYPE(item)->tp_name);
	}
}
