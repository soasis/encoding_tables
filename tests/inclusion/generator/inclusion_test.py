import argparse


def main():
    parser = argparse.ArgumentParser(
        prog="inclusion tests generator",
        description=
        "Generates corresponding source files for C and C++ programs to include the header independently in its own translation unit, to test fidelity."
    )
    parser.add_argument("output_folder", nargs="?", type=str, default="")
    parser.add_argument("files", nargs="*", type=[str])
    parser.add_argument("folders", nargs="*", type=[str])
    parser.add_argument("folder_extensions",
                        nargs="*",
                        default=[".h", ".hpp", ".hxx", ".h", ".hpp"])
    parser.add_argument("recursive", nargs="?", type=bool, default=True)
    args = parser.parse_args()

    for f in args.files:
        make_translation_unit

    pass


if __name__ == '__main__':
    # Execute when the module is not initialized from an import statement.
    main()
