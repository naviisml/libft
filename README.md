# libft

The libft project is aimed to get you familiar with the C programming language. Your libft will also be used during various projects in the first year. This libft has been updated to include various functions for [ft_printf](https://github.com/naviisml/ft_printf) and [get_next_line](https://github.com/naviisml/get_next_line).

## Requirements

- gcc
- make


## Installation

**Step 1. Install this repository**

```
git clone https://github.com/naviisml/libft
```

**Step 2. Compile the program**

```
make all
```

## Extra functions

**ft_itoa_base**

I've added ft_itoa_base, and re-worked ft_itoa to just be a wrapper around this function on base 10, this allowed me to remove multiple functions and merge them into one. This also affects the [ft_printf](https://github.com/naviisml/ft_printf), as int, hex and pointers can now be printed using this 1 function.

```
char	*ft_itoa_base(__int128 nbr, int base);
char	*ft_itoa(int nbr);
```

**ft_realloc**

For various reasons, I decided to add a `ft_realloc()` function which re-allocates memory for a specific ptr.

Prototype:
```
void	*ft_realloc(void *ptr, size_t size);
```

**ft_floor**

For various functions in my [ft_printf](https://github.com/naviisml/ft_printf) and libft, I decided to add the ft_floor function, which returns a integer of the length of a given parameter.

Prototype:
```
int		ft_floor(__int128 nbr);
```

**ft_strnjoin**

The ft_strnjoin function was initially made for [get_next_line](https://github.com/naviisml/get_next_line), but I decided to implement it in my libft and re-code the ft_strjoin function. The reason behind it is that it is a very useful function as it saved me on get_next_line (thats a hint if you're stuck)!

Prototype:
```
char	*ft_strnjoin(char const *str1, char const *str2, int n);
```

## Results

**Score:** 125/100

**Date:** 28-10-2021

<div align=center>Made with tons of ☕ and ❤️ by <a href="https://github.com/naviisml">Navi</a></div>
