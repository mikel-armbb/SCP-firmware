#!/usr/bin/env python3
#
# Arm SCP/MCP Software
# Copyright (c) 2021, Arm Limited and Contributors. All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause

"""
Check pycodestyle
This script runs pycodestyle to check all python scripts.
"""

import sys
import subprocess


def banner(text):
    columns = 80
    title = " {} ".format(text)
    print("\n\n{}".format(title.center(columns, "*")))


def main():
    banner("Build and run PyCodeStyle tests")

    result = subprocess.Popen(
        "python -m pycodestyle tools/",
        shell=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.PIPE)

    (stdout, stderr) = result.communicate()

    print(stdout.decode())

    if stderr:
        print(stderr.decode())
        print('FAILED')
        return 1
    print('SUCCESS')
    return 0


if __name__ == '__main__':
    sys.exit(main())
