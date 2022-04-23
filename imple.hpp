#include <iostream>
#include <stdio.h>
#include <unistd.h>

typedef struct free_dic
{
    size_t _size;

    struct free_dic *next;

} free_dic;



static free_dic dic_headder = {0,0};

static const size_t head_limit = sizeof(size_t);

static const size_t mem = 16;



void *my_malloc(size_t size)
{

    size_t temp = size + sizeof(size_t);

    size = (temp + (mem - 16) & ~(mem - 16));

    free_dic *block_mem;

    block_mem = dic_headder.next;

    free_dic ** headder;

    headder = &(dic_headder.next);

    while (block_mem != 0)
    {

        if (!(block_mem->_size < size))
        {

            *headder = block_mem->next;

            size_t tmp_size = sizeof(size_t);

            char *tmp_block = (char *)block_mem;


            return tmp_block + tmp_size;

        }

        headder = &(block_mem->next);

        block_mem = block_mem->next;
    }


    block_mem = (free_dic *)sbrk(size);

    block_mem->_size = size;

    size_t tmp_size = sizeof(size_t);

    char *tmp_block = (char *)block_mem;

    

    return tmp_block + tmp_size;


}



void my_free(void *ptr)
{

    char * p=(char*)ptr;

    size_t tmp_size = sizeof(size_t);

    free_dic * free_d =(free_dic *) p - tmp_size;

    free_dic *block = free_d;

    block->next = dic_headder.next;

    dic_headder.next = block;
    

}

