#!/usr/bin/env python

from distutils.core import setup, Extension


example_module = Extension('_example',
                           sources=['example.c', 'example_wrap.c'],
                           )

setup(name='example',
      version='0.1',
      author="Phos",
      description="""Simple swig example from python""",
      ext_modules=[example_module],
      py_modules=["example"],
      )
