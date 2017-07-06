import os

if __name__ == '__main__':
    import sys
    reference = sys.argv[1]
    cwd = os.getcwd()
    build_type = "Release" if "release" in cwd else "Debug"
    os.system("conan package_files %s -pr=gcc49 -s build_type=%s -f" % (reference, build_type))