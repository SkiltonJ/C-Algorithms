/* Sliding Window */
#include <stdio.h>

int max_subarray_sum(int *arr, int n, int k)
{
	if (n < k)
		return -1;
	int max_sum = 0;
	int current_sum = 0;

	for (int i = 0; i < k; i++)
		current_sum += arr[i];
	max_sum = current_sum;
	for (int i = k; i < n; i++)
	{
		current_sum += arr[i] - arr[i - k];
		if (current_sum > max_sum)
			max_sum = current_sum;
	}
	return max_sum;
}

int max_subarray_sum(int *arr, int n, int k)
{
	if (n < k)
		return -1;
	int current_sum = 0;
	int max_sum = 0;
	int i = 0;

	while (i < k)
		current_sum += arr[i++];
	max_sum = current_sum;
	i = k;
	while (i < n)
	{
		current_sum += arr[i] - arr[i - k];
		if (current_sum > max_sum)
			max_sum = current_sum;
	}
	return max_sum;
}

int max_subarray_sum(int *arr, int n, int k)
{
	if (n < k)
		return -1;
	int current_sum = 0;
	int max_sum = 0;
	int i = 0;

	while (i < k)
		current_sum += arr[i++];
	max_sum = current_sum;
	i = k;
	while (i < n)
	{
		current_sum += arr[i] - arr[i - k];
		if (current_sum > max_sum)
			max_sum = current_sum;
	}
	return max_sum;
}
/* Variable Sliding Window */


int min_subarray_length(int *arr, int n, int target)
{
	int min_length = n + 1;
	int window_start = 0;
	int window_end = 0;
	int current_sum = 0;

	while (window_end < n)
	{
		current_sum += arr[window_end];

		while (current_sum >= target)
		{
			if (window_end - window_start + 1 < min_length)
				min_length = window_end - window_start + 1;
			current_sum -= arr[window_start];
			window_start++;
		}
	window_end++;
	}
	
	if (min_length == (n + 1))
		return 0; // no subarray found
	return min_length;
}
