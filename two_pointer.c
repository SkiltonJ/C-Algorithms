/* Find Pair Sum */

bool find_pair_sum(int *arr, int size, int target_sum)
{
	int left = 0;
	int right = size - 1;

	while (left < right)
	{
		int current_sum = arr[left] + arr[right];

		if (current_sum == target_sum)
			return true;
		else if (current_sum < target_sum)
			left++;
		else
			right--;
	}
	return false;
}

bool find_pair_sum(int *arr, int size, int target_sum)
{
	int left = 0;
	int right = size - 1;

	while (left < right)
	{
		int current_sum = arr[left] + arr[right];

		if (current_sum == target_sum)
			return true;
		else if (current_sum < target_sum)
			left++;
		else
			right--;
	}
	return false;
}

/* Remove Duplicates */

int remove_duplicates(int *arr, int size)
{
	if (size == 0)
		return 0;
	int slow = 0;
	int fast = 1;

	while (fast < size)
	{
		if (arr[slow] != arr[fast])
			arr[++slow] = arr[fast];
		fast++;
	}
	return (slow + 1);
}

int remove_duplicates(int *arr, int size)
{
	if (size == 0)
		return 0;
	int slow = 0;
	int fast = 1;

	while (fast < size)
	{
		if (arr[slow] != arr[fast])
			arr[++slow} = arr[fast];
		fast++;
	}
	return (slow + 1);
}
/* Has Cycle */

bool has_cycle(int arr[], int size)
{
        if (size == 0)
                return false;

        int slow = 0;
        int fast = 0;

        while (fast < size && arr[fast] < size)
        {
                slow = arr[slow];
                fast = arr[arr[fast]];

                if (slow == fast)
                        return true;
        }
        return false;
}

bool has_cycle(int *arr, int size)
{
	if (size == 0)
		return 0;

	int slow = 0;
	int fast = 0;
	while (fast < size && arr[fast] < size)
	{
		slow = arr[slow];
		fast = arr[arr[fast]];
		if (fast == slow)
			return true;
	}
	return false;
}

int has_cycle(int *arr, int size)
{
	if (size == 0)
		return 0;

	int slow = 0;
	int fast = 0;

	while (fast < size && arr[fast] < size)
	{
		slow = arr[slow];
		fast = arr[arr[fast]];
		if (slow == fast)
			return true;
	}
	return false;
}
