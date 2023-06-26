#include <stdio.h>
#include <Python.h>

/**
 * print_python_bytes - Prints bytes information
 *
 * @p: Python Object
 * Return: no return
 */
void print_python_bytes(PyObject *p)
{
	char *string;
	long int sizes, n, prt;

	setbuf(stdout, NULL);

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		setbuf(stdout, NULL);
		return;
	}

	sizes = ((PyVarObject *)(p))->ob_size;
	string = ((PyBytesObject *)p)->ob_sval;

	printf("  sizes: %ld\n", sizes);
	printf("  trying string: %s\n", string);

	if (sizes >= 10)
		prt = 10;
	else
		prt = sizes + 1;

	printf("  first %ld bytes:", prt);

	for (n = 0; n < prt; n++)
		if (string[n] >= 0)
			printf(" %02x", string[n]);
		else
			printf(" %02x", 256 + string[n]);

	printf("\n");
	setbuf(stdout, NULL);
}

/**
 * print_python_float - Prints float information
 *
 * @p: Python Object
 * Return: no return
 */
void print_python_float(PyObject *p)
{
	double valt;
	char *nf;

	setbuf(stdout, NULL);
	printf("[.] float object info\n");

	if (!PyFloat_Check(p))
	{
		printf("  [ERROR] Invalid Float Object\n");
		setbuf(stdout, NULL);
		return;
	}

	valt = ((PyFloatObject *)(p))->ob_fval;
	nf = PyOS_double_to_string(valt, 'r', 0, Py_DTSF_ADD_DOT_0, Py_DTST_FINITE);

	printf("  value: %s\n", nf);
	setbuf(stdout, NULL);
}

/**
 * print_python_list - Prints list information
 *
 * @p: Python Object
 * Return: no return
 */
void print_python_list(PyObject *p)
{
	long int sizes, n;
	PyListObject *lists;
	PyObject *objs;

	setbuf(stdout, NULL);
	printf("[*] Python list info\n");

	if (!PyList_Check(p))
	{
		printf("  [ERROR] Invalid List Object\n");
		setbuf(stdout, NULL);
		return;
	}

	sizes = ((PyVarObject *)(p))->ob_size;
	lists = (PyListObject *)p;

	printf("[*] Size of the Python List = %ld\n", sizes);
	printf("[*] Allocated = %ld\n", lists->allocated);

	for (n = 0; n < sizes; n++)
	{
		objs = lists->ob_item[n];
		printf("Element %ld: %s\n", n, ((objs)->ob_type)->tp_name);

		if (PyBytes_Check(objs))
			print_python_bytes(objs);
		if (PyFloat_Check(objs))
			print_python_float(objs);
	}
	setbuf(stdout, NULL);
}
