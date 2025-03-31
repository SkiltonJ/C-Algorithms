/* PREFIX SUM NEW ARRAY */

int *prefix_sum_basic(int *arr, int n)
{
	int *prefix_sum = (int*)malloc(sizeof(int) * n);

	if (n > 0)
	{
		prefix_sum[0] = arr[0];
		int i = 1;

		while (i < n)
			prefix_sum[i] = prefix_sum[i - 1] + arr[i++];
	}
	return prefix_sum;
}

int range_sum(int prefix_sum[], int left, int right)
{
	if (left == 0)
		return prefix_sum[right];
	else
		return prefix_sum[right] - prefix_sum[left - 1];
}

int *prefix_sum(int *arr, int size)
{
	int *prefix_sum = (int*)malloc(sizeof(int) * n);

	if (n > 0)
	{
		prefix_sum[0] = arr[0];
		int i = 1;

		while (i < n)
			prefix_sum[i] = prefix_sum[i - 1] + arr[i++];
	}
	return prefix_sum;
}

int range(int *prefix_sum, int left, int right)
{
	if (left == 0)
		return prefix_sum[right];
	else
		return prefix_sum[right] - prefix_sum[left - 1];
}
/* PREFIX SUM IN PLACE */

int *prefix_sum_place(int *arr, int n)
{
	if (n > 0)
	{
		int i = 1;

		while (i < n)
			arr[i] += arr[i++ - 1];
	}
	return arr;
}

int range(int *arr, int left, int right)
{
	if (left == 0)
		return arr[right];
	else
		return arr[right] - arr[left - 1];
}

/* PREFIX SUM FOR 2D ARRAYS */

int **prefix_sum_2d(int ** matrix, int rows, int cols)
{
	int **prefix_sum = (int**)malloc(sizeof(int*) * rows);
	int i = 0;
	while (i < rows)
		prefix_sum[i] = (int*)malloc(sizeof(int) * cols);
	i = 0;
	while (i < rows)
	{
		int j = 0;
		while (j < cols)
		{
			if (i == 0 & j == 0)
				prefix_sum[i][j] = matrix[i][j];
			else if (i == 0)
				prefix_sum[i][j] = prefix_sum[i][j - 1] + matrix[i][j];
			else if (j == 0)
				prefix_sum[i][j] = prefix_sum[i - 1][j] + matrix[i][j];
			else
				prefix_sum[i][j] = prefix_sum[i - 1][j] + prefix_sum[i][j - 1] - prefix_sum[i - 1][j - 1] + matrix[i][j];
			j++;
		}
		i++;
	}
	return prefix_sum;
}

int **prefix_sum2D(int **matrix, int rows, int cols)
{
	int **prefix_sum = (int **)malloc(sizeof(int*) * rows);
	int i = 0;

	while (i < rows)
		prefix_sum[i++] = (int*)malloc(sizeof(int) * cols);
	i = 0;
	while (i < rows)
	{
		int j = 0;
		while (j < cols)
		{
			if (i == 0 && j == 0)
				prefix_sum[i][j] = matrix[i][j];
			else if (i == 0)
				prefix_sum[i][j] = prefix_sum[i][j - 1] + matrix[i][j];
			else if (j == 0)
				prefix_sum[i][j] = prefix_sum[i - 1][j] + matrix[i][j];
			else
				prefix_sum[i][j] = prefix_sum[i][j - 1] + prefix_sum[i - 1][j] - prefix_sum[i - 1][j - 1] + matrix[i][j];
			j++;
		}
		i++;
	}
	return prefix_sum;
}

int range_sum_2D(int **prefix_sum, int row1, int col1, int row2, int col2)
{
	int upper_left = (row1 > 0 && col1 > 0) ? prefix_sum[row1 -1][col1 - 1] : 0;
	int upper_right = (row1 > 0) ? prefix_sum[row1 -1][col2] : 0;
	int lower_left = (col1 > 0) ? prefix_sum[row2][col1 - 1] : 0;
	int lower_right = prefix_sum[row2][col2];
	return lower_right - lower_left - upper_right + upper_left;
}

int **prefix_sum_2D(int **matrix, int rows, int cols)
{
	int **prefix_sum = (int**)malloc(sizeof(int*) * rows);
	int i = 0;
	while (i < rows)
		prefix_sum[i] = (int*)malloc(sizeof(int) * cols);
	i = 0;
	while (i < rows)
	{
		int j = 0;
		while (j < cols)
		{
			if (i == 0 && j == 0)
				prefix_sum[i][j] = matrix[i][j];
			else if (i == 0)
				prefix_sum[i][j] = prefix_sum[i][j - 1] + matrix[i][j];
			else if (j == 0)
				prefix_sum[i][j] = prefix_sum[i - 1][j] + matrix[i][j];
			else
				prefix_sum[i][j] = prefix_sum[i - 1][j] + prefix_sum[i][j - 1] - prefix_sum[i - 1][j - 1] + matrix[i][j];
			j++;
		}
		i++;
	}
	return prefix_sum;
}
