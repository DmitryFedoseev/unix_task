#include <linux/init.h>             
#include <linux/module.h>           
#include <linux/kernel.h>           
 
MODULE_LICENSE("GPL");              
MODULE_AUTHOR("Dimon");
MODULE_DESCRIPTION("A  Linux"); 
MODULE_VERSION("2.28");              


static int __init simple_init(void){
   printk(KERN_INFO "Hello, world!\n");
   return 0;
}
 

static void __exit simple_exit(void){
   printk(KERN_INFO "Help!\n");
}
 
module_init(simple_init);
module_exit(simple_exit);