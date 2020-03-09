#include <asm/current.h>
#include <linux/string.h>
#include <linux/syscalls.h>

SYSCALL_DEFINE1(my_syscall2, char *, arr)
{
	int arrsize = strlen(arr);
	if (arrsize > 128)
	{
	  return -1;
	}

	char replacer[129];
	strcpy(replacer, arr);

	int count = 0;
	int i = 0;
	for (i = 0; i < arrsize; i++)
	{
	  if (replacer[i] == 'o')
	  {
	    replacer[i] = '0';
	    count++;
	  }
	}
	printk("Process ID: %d \n", current->pid);
	printk("Input: %s \n", arr);
	printk("Output: %d \n", count);
	return count;
}
