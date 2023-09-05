# 0x15. C - File I/O

### useful system calls & flags:
- calls ``open, close, read, and write``
- flags: ``O_RDONLY, O_WRONLY, O_RDWR``

## Prototypes:
- ``ssize_t read_textfile(const char *filename, size_t letters);``
- ``int create_file(const char *filename, char *text_content);``
- ``int append_text_to_file(const char *filename, char *text_content);``
