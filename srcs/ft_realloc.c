
/*
*
* The ft_malloc(), ft_calloc(), ft_valloc(), ft_realloc(), 
* ft_realloc_dp and ft_reallocf() functions allocate memory. 
* The allocated memory is aligned such that it can be used for 
* any data type, including AltiVec- and SSE-related types.  
* The free() function frees allocations that were created via 
* the preceding allocation functions.
* 
* The ft_realloc_dp() function tries to change the size of the 
* allocation pointed to by ptr to size, and returns ptr.
* If there is not enough room to enlarge the memory allocation 
* pointed to by ptr, ft_realloc_dp() creates a new allocation, 
* copies as much of the old data pointed to by ptr as will 
* fit to the new allocation, frees the old allocation, and 
* returns a pointer to the allocated memory.  If ptr is NULL, 
* ft_realloc_dp() is identical to.
*
*/
char	**ft_realloc_dp(char **str, int len)
{
	void *tmp = ft_realloc(str, (2 * len) * sizeof tmp);
	if (!tmp)
	return (0);
		str = tmp;
	ft_memset(str + len, 0, (len * sizeof(tmp)));
	len *= 2;
	return (str);
}
