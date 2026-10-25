*This project has been created as part of the 42 curriculum by mamatter.*

## Description

Libft is my first C library. It rebuilds common libc functions and adds
useful extra ones. I will reuse it in my future 42 projects.

The library has three parts:

- **Part 1**: libc functions, renamed with the `ft_` prefix.
- **Part 2**: extra functions for strings, numbers and output.
- **Part 3**: functions to handle linked lists.

## Instructions

Build the library with `make`. It creates `libft.a` at the root of the repository.

```bash
make        # build libft.a
make clean  # remove object files
make fclean # remove object files and libft.a
make re     # rebuild everything
```

## Library description

### Part 1 - Libc functions

Each function works like the original, as described in its man page.

| Function | What it does |
|----------|--------------|
| `ft_isalpha` | Checks if a character is a letter. |
| `ft_isdigit` | Checks if a character is a digit. |
| `ft_isalnum` | Checks if a character is a letter or a digit. |
| `ft_isascii` | Checks if a value is in the ASCII table (0 to 127). |
| `ft_isprint` | Checks if a character is printable. |
| `ft_toupper` | Turns a lowercase letter into uppercase. |
| `ft_tolower` | Turns an uppercase letter into lowercase. |
| `ft_strlen` | Returns the length of a string. |
| `ft_strlcpy` | Copies a string into a buffer without overflowing it. |
| `ft_strlcat` | Appends a string to another without overflowing the buffer. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings, up to `n` characters. |
| `ft_strnstr` | Finds a substring in a string, within `len` characters. |
| `ft_strdup` | Returns a new copy of a string. |
| `ft_atoi` | Converts the start of a string into an `int`. |
| `ft_memset` | Fills a memory area with one byte. |
| `ft_bzero` | Sets a memory area to zero. |
| `ft_memcpy` | Copies bytes from one area to another. |
| `ft_memmove` | Copies bytes and handles overlapping areas safely. |
| `ft_memchr` | Finds a byte in a memory area. |
| `ft_memcmp` | Compares two memory areas. |
| `ft_calloc` | Allocates memory and sets it to zero. |

### Part 2 - Additional functions

| Function | What it does |
|----------|--------------|
| `ft_substr` | Returns a new string cut from a given position and length. |
| `ft_strjoin` | Returns a new string made of two strings put together. |
| `ft_strtrim` | Returns a copy of a string without the chosen characters at both ends. |
| `ft_split` | Cuts a string at each delimiter and returns an array of strings. |
| `ft_itoa` | Converts an integer into a string. |
| `ft_strmapi` | Applies a function to each character and returns the new string. |
| `ft_striteri` | Applies a function to each character of a string, in place. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string and a newline to a file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### Part 3 - Linked lists

The lists use this structure, declared in `libft.h`:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

| Function | What it does |
|----------|--------------|
| `ft_lstnew` | Creates a new node. |
| `ft_lstadd_front` | Adds a node at the start of the list. |
| `ft_lstadd_back` | Adds a node at the end of the list. |
| `ft_lstsize` | Counts the nodes in the list. |
| `ft_lstlast` | Returns the last node. |
| `ft_lstdelone` | Frees one node and its content. |
| `ft_lstclear` | Frees a node and all the ones after it. |
| `ft_lstiter` | Applies a function to the content of each node. |
| `ft_lstmap` | Builds a new list from the results of a function. |

### Technical choices

- No global variables.
- Helper functions are `static`.
- Every allocation is checked.
- Memory is freed if something fails.

## Resources

### References

- `man` pages of the reimplemented functions (`man 3 strlen`, etc.)
- Free manual: http://manpagesfr.free.fr/

### Use of AI

No AI was used for this project.
