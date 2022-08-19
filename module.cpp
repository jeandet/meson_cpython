#include <Python.h>

static PyObject *method_test(PyObject *self, PyObject *args) {
    return PyLong_FromLong(123456UL);
}


static PyMethodDef TestMethod[] = {
    {"test", method_test, METH_VARARGS, "Simple CPython test"},
    {NULL, NULL, 0, NULL}
};


static struct PyModuleDef testmodule = {
    PyModuleDef_HEAD_INIT,
    "meson_cpython",
    "Simple CPython test",
    -1,
    TestMethod
};

PyMODINIT_FUNC PyInit_meson_cpython(void) {
    return PyModule_Create(&testmodule);
}
