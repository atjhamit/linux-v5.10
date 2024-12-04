#include <linux/module.h>
#include <linux/init.h>

static int __init helloworld_entry(void)
{
    pr_info("Hey there! atjhamit");
    return 0;
}

static void __exit helloworld_exit(void)
{
    pr_info("Bye you! atjhamit");
}

module_init(helloworld_entry);
module_exit(helloworld_exit);

MODULE_LICENCE("GPL");
MODULE_AUTHOR("Amit Kumar Jha <atjhamit@gmail.com>");
MODULE_DESCRIPTION("Linux kernel module skeleton");
