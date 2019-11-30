
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Nguyen Trong Ha");
MODULE_DESCRIPTION("Hello");
MODULE_VERSION("0.1");

static int __init init_driver(void)
{
	printk(KERN_INFO "Hello World\n");
	return 0;
}

static void __exit exit_driver(void)
{
	printk(KERN_INFO "Bye\n");
}

module_init(init_driver);
module_exit(exit_driver);


