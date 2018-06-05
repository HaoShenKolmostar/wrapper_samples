swig -python -includeall example.i
python3 setup.py build_ext --inplace
python3 user_code.py