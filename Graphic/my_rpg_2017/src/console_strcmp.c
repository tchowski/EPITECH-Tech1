#include "console.h"

sfBool console_strcmp(sfUint32 *a, sfUint32 *b)
{
	int i = 0;

	while (!(a[i] == 0 && b[i] == 0) && a[i] == b[i])
		i++;
	if (b[i] == a[i])
		return sfTrue;
	else
		return sfFalse;
}
	
sfBool is_name_char(sfUint32 n)
{
	return ((n >= 97 && n <= 122) || n == 95 || (n >= '0' && n <= '9'));
}

sfBool console_strcmp_cmd(sfUint32 *a, sfUint32 *b, int value)
{
	int i = 0;
	for (int j = 0; j < value; j++) {
		while (is_name_char(a[i])) {
			i++;
		}
		while (!(is_name_char(a[i]))) {
			i++;
		}
	}
	int j = 0;
	while (is_name_char(a[i]) && is_name_char(b[j])) {
		if (a[i] != b[j]) {
			return sfFalse;
		}
		i++;
		j++;
	}
	if (!(is_name_char(a[i])) && !(is_name_char(b[j]))) {
		return sfTrue;
	}
	return sfFalse;
}

int console_get_input_value(sfUint32 *input, int value)
{
	int i = 0;
	for (int j = 0; j < value; j++) {
		while (is_name_char(input[i])) {
			i++;
		}
		while (!(is_name_char(input[i]))) {
			i++;
		}
	}
	int result = 0;

	while (input[i] >= '0' && input[i] <= '9') {
		result *= 10;
		result += input[i] - '0';
		i++;
	}
	return result;
}

sfBool console_strcmp_char(sfUint32 *a, char *b)
{
	int i = 0;

	while (!(a[i] == 0 && b[i] == 0) && a[i] == (sfUint32) b[i])
		i++;
	if ((sfUint32) b[i] == a[i])
		return sfTrue;
	else
		return sfFalse;
}