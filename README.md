# libft

The libft project is aimed to get you familiar with the C programming language. Your libft will also be used during various projects in the first year. This libft has been updated to include various functions for [ft_printf](https://github.com/naviisml/ft_printf) and [get_next_line](https://github.com/naviisml/get_next_line).

## Extra functions

**ft_realloc**

For various reasons, I decided to add a `ft_realloc()` function which re-allocates memory for a specific ptr.

Prototype:
```
void	*ft_realloc(void *ptr, size_t size);
```

**ft_floor**

For various functions in my [ft_printf](https://github.com/naviisml/ft_printf) and libft, I decided to add the ft_floor function, which returns the length of a given long.

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
