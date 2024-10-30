from setuptools import find_packages
from setuptools import setup

setup(
    name='motor_comm_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('motor_comm_interfaces', 'motor_comm_interfaces.*')),
)
