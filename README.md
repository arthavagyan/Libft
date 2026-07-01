# 📚 Libft — My Very Own C Library

<p align="center">
  <img src="https://img.shields.io/badge/Score-100%2F100-success?style=for-the-badge&logo=42" alt="Score 100/100" />
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge" alt="Language C" />
  <img src="https://img.shields.io/badge/Status-Completed-brightgreen?style=for-the-badge" alt="Status Completed" />
</p>

---

## 📖 Description

**Libft** is the first project at **42 School**. The goal is to create a personal library of useful C functions. Instead of using the standard library, we write our own versions from scratch. 

This project is the "foundation" for everything that comes next. I will use this library in almost every future project at 42.

---

## 🎯 Project Goal

- Understand how standard C functions (like `strlen` or `memcpy`) work "under the hood."
- Learn how to manage memory and use pointers correctly.
- Build a collection of tools for string manipulation and linked lists.
- Get comfortable with creating a **Makefile**.

---

## 🛠️ How to Use

### Compilation
To build the library, run the following command in your terminal:

```bash
make
```
This will compile the code and create a static library file called `libft.a`.

### Makefile Rules
| Rule | Action |
| :--- | :--- |
| `make` | Compiles the library. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and the `.a` library. |
| `make re` | Performs a full re-compile. |

---

## 📑 Tasks Completed

The library is divided into three main parts:

### 1. Standard Libc Functions 🏛️
Recreations of common functions from `<string.h>`, `<ctype.h>`, and `<stdlib.h>`:
- **Strings:** `ft_strlen`, `ft_strchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strdup`
- **Memory:** `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_bzero`, `ft_calloc`
- **Tests:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_toupper`, `ft_atoi`

### 2. Additional Utility Functions 🛠️
Useful functions that are not in the standard library:
- `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`
- `ft_itoa` (convert integer to string)
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Linked List Functions (Bonus) 🔗
A set of functions to manage simple linked lists:
- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`
- `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## 📚 Resources

- **Man pages** — `man 3` is the best friend of a C programmer.
- **GNU C Library** documentation.
- **42 Intranet** — Project guidelines.
- **Peers** — For helpful feedback and "rubber ducking."
- **AI tools** — Used only for searching documentation and resources.

---

## 👨‍💻 Author

Created by **artavagy** as part of the 42 Yerevan curriculum.

<div align="center">

 [![GitHub Profile](https://img.shields.io/badge/GitHub-Profile-181717?style=for-the-badge&logo=github)](https://github.com/arthavagyan)

</div>

---
