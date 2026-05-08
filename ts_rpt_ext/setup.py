from setuptools import setup, find_packages
import os
import shutil

here = os.path.abspath(os.path.dirname(__file__))

# Copy .rpt report sources from the project repo into the package so it's self-contained
REPORTS_SRC = os.environ.get(
    'CRYSTAL_REPORTS_SRC',
    os.path.join(here, '..', '..', 'bizdata_azure_devops', 'APT', 'Crystal Reports')
)
local_src = os.path.join(here, 'src')
if os.path.isdir(REPORTS_SRC) and not os.path.isdir(local_src):
    shutil.copytree(REPORTS_SRC, local_src)

setup(
    name='tree_sitter_rpt',
    version='0.1.0',
    description='Crystal Reports (.rpt) OLE2 parser binding for graphify-b',
    packages=find_packages(),
    install_requires=['olefile>=0.46'],
    python_requires='>=3.9',
)
