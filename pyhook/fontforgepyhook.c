#include <fontforge-config.h>

#include <Python.h>

extern PyMODINIT_FUNC fontforge_python_init(const char* modulename);

PyMODINIT_FUNC PyInit_fontforge(void) {
    return fontforge_python_init("fontforge");
}
