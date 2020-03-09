#include <asm/current.h>
#include <linux/syscalls.h>


SYSCALL_DEFINE2(my_syscall, int, par1, int, par2)
{
	int ret = par1 + par2;
	printk("Sum: %d \n", ret);
	printk("PID: %d \n", current->pid);
	printk("Inputs: %d, %d \n", par1, par2);
	printk("Value to be returned: %d \n", ret);
	return ret;
}
