# from scrapy import cmdline
# cmdline.execute('scrapy crawl cplusplus'.split())
import os
import pathlib

DIR = pathlib.Path(os.path.dirname(__file__))


def link_boost_include():
    include_path = DIR / "include" / "boost"
    include_path.mkdir(exist_ok=True)
    boost_path = DIR / "thirdparty" / "boost"
    libs_path = boost_path / "libs"
    for folder in libs_path.iterdir():
        boost_include_path = folder / "include" / "boost"
        if not boost_include_path.exists():
            continue
        for path in boost_include_path.iterdir():
            target_path = include_path / path.name
            if not target_path.exists():
                target_path.symlink_to(path)
            else:
                target_path.rglob('*.*')
            # target_path = path.replace(include_path,include_path)
            # print(target_path)

    # os.path.join(boost_path)


def main():

    link_boost_include()


if __name__ == "__main__":
    main()

# e:\repo\cppreference\thirdparty\boost\libs\headers\include\boost
