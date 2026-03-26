'''Aim: Import numpy, Plotpy and Scipy and explore their functionalities. Install with pip.'''

import sys
import subprocess

def check_package(package):
    try:
        __import__(package)
        print(f"Package '{package}' is installed.")
        return True
    except ImportError:
        print(f"Package '{package}' not found. Attempting to install...")
        subprocess.check_call([sys.executable, "-m", "pip", "install", package])
        return False

# Attempt to check/install
check_package("numpy")
check_package("scipy")
# Note: 'Plotpy' commonly refers to 'plotly' or 'matplotlib'
check_package("matplotlib")

import numpy as np
print(f"\nNumPy Demo (Random Array): {np.random.rand(3)}")
