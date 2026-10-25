*This project has been created as part of the 42 curriculum by mamatter.*

## Description

Libft is the first project of the 42 curriculum. Its goal is to build a C
library, `libft.a`, by reimplementing standard libc functions and writing
additional utility functions that will be reused in future projects.

The library is organized in three parts:

- **Part 1 - Libc functions**: reimplementations of standard functions,
  prefixed with `ft_`.
- **Part 2 - Additional functions**: functions that are not in the libc or
  exist in a different form.
- **Part 3 - Linked lists**: functions to manipulate singly linked lists
  built on the `t_list` structure.

## Instructions

### Compilation

The library is compiled with `cc -Wall -Wextra -Werror` and archived with `ar`.
The resulting `libft.a` is created at the root of the repository.

```bash
make        # builds libft.a
make clean  # removes the object files
make fclean # removes the object files and libft.a
make re     # fclean followed by all
```

### Usage

Include the header in your source file and link against the library:

```c
#include "libft.h"
```

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
```

## Library description

| Category | Functions |
|----------|-----------|
| Character checks and conversion | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower` |
| Strings | `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_atoi` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| String utilities | `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri` |
| File descriptor output | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |
| Linked lists | `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap` |

### Technical choices

- No global variables.
- Helper functions are `static` to restrict their scope to their file.
- Allocation failures are handled and return `NULL` as specified; memory
  already allocated is freed on failure.
- `ft_calloc` returns a unique pointer that can be passed to `free()` when
  `nmemb` or `size` is 0.

## Resources

### References

- `man` pages of the reimplemented functions (`man 3 strlen`, etc.)
- Free manual: [https://www.gnu.org/software/make/manual/](http://manpagesfr.free.fr/)
