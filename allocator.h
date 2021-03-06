#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

 
typedef struct s_allocator 
{
    size_t bytes_allocated;
    size_t length;
    void** addrs_mem;
}allocator;

extern allocator* allocator_init();
extern void allocator_delete(allocator* _allocator);

extern void allocator_add_element(allocator* _allocator, void* addr, size_t size);
extern void allocator_display(allocator* _allocator);



#endif