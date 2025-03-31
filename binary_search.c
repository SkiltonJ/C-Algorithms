int iterativeBinarySearch(int *arr, int left, int right, int target)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] == target)
			return mid;
		else if (arr[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}

int	binary_search(int *arr, int arr_size, int target)
{
	int left = 0;
	int right = arr_size - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] == target)
			return mid;
		else if (arr[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return - 1;
}
int recursive_binary_search(int *arr, int left, int right, int target)
{
	if (left > right)
		return -1;
	int mid = left + (right - left) / 2;
	if (arr[mid] == target)
		return mid;
	if (arr[mid] < target)
		return recursive_binary_search(arr, mid + 1, right, target);
	else
		return recursive_binary_search(arr, left, mid - 1, target);
}

int binary_search(int *arr, int left, int right, int target)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] == target)
			return mid;
		else if (arr[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}

int binary_search(int *arr, int arr_size, int target)
{
	int left = 0;
	int right = arr_size - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;

		if (arr[mid] == target)
			return mid;
		else if (arr[mid] < target)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return -1;
}
