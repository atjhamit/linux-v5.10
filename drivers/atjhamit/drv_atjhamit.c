#include <linux/module.h>
#include <linux/init.h>

static int __init atjhamit_init_func(void)
{
    pr_info("atjhamit_init_func : Entry\n");
    return 0;
}

void __exit atjhamit_exit_func(void)
{
    pr_info("atjhamit_exit_func : Exit\n");
}

module_init(atjhamit_init_func);
module_exit(atjhamit_exit_func);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Amit Kumar Jha <atjhamit@gmail.com>");
MODULE_DESCRIPTION("atjhamit : linux kernel module sample : drv_amit");
