from setuptools import setup, Extension, find_packages
import os
import shutil

here = os.path.abspath(os.path.dirname(__file__))

# Copy parser sources from the grammar repo into the package so it's self-contained
GRAMMAR_SRC = os.environ.get(
    'TREE_SITTER_TSQL_GRAMMAR_SRC',
    os.path.join(here, '..', 'ts_tsql_grammar', 'src')
)
local_src = os.path.join(here, 'src')
if os.path.isdir(GRAMMAR_SRC) and not os.path.isdir(local_src):
    shutil.copytree(GRAMMAR_SRC, local_src)

ext = Extension(
    'tree_sitter_tsql._binding',
    sources=[
        '_binding.c',
        os.path.join('src', 'parser.c'),
    ],
    include_dirs=[os.path.join('src')],
    py_limited_api=True,
)

setup(
    name='tree_sitter_tsql',
    version='0.1.0',
    description='Tree-sitter T-SQL grammar Python binding',
    packages=find_packages(),
    ext_modules=[ext],
    python_requires='>=3.9',
)
