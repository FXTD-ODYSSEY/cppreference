// cppreference link https://en.cppreference.com/w/cpp/io/c/fsetpos
#include <cstdio>
#include <cstdlib>

int main()
{
    // Prepare an array of floating-point values.
    const int SIZE = 5;
    double A[SIZE] = { 1., 2., 3., 4., 5. };
    // Write array to a file.
    std::FILE* fp = std::fopen("test.bin", "wb");
    std::fwrite(A, sizeof(double), SIZE, fp);
    std::fclose(fp);

    // Read the values into array B.
    double B[SIZE];
    fp = std::fopen("test.bin", "rb");
    std::fpos_t pos;
    if (std::fgetpos(fp, &pos) != 0) // current position: start of file
    {
        std::perror("fgetpos()");
        std::fprintf(stderr, "fgetpos() failed in file%s at line #%d\n",
            __FILE__, __LINE__ - 3);
        std::exit(EXIT_FAILURE);
    }

    int ret_code = std::fread(B, sizeof(double), 1, fp); // read one value
    // current position: after reading one value
    std::printf("%.1f; read count =%d\n", B[0], ret_code); // print one value and ret_code

    if (std::fsetpos(fp, &pos) != 0) // reset current position to start of file
    {
        if (std::ferror(fp)) {
            std::perror("fsetpos()");
            std::fprintf(stderr, "fsetpos() failed in file%s at line #%d\n",
                __FILE__, __LINE__ - 5);
            std::exit(EXIT_FAILURE);
        }
    }

    ret_code = std::fread(B, sizeof(double), 1, fp); // re-read first value
    std::printf("%.1f; read count =%d\n", B[0], ret_code); // print one value and ret_code
    std::fclose(fp);

    return EXIT_SUCCESS;
}
