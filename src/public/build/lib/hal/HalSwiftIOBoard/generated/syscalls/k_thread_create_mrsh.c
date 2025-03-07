/* auto-generated by gen_syscalls.py, don't edit */
#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic push
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif
#include <syscalls/kernel.h>

extern k_tid_t z_vrfy_k_thread_create(struct k_thread * new_thread, k_thread_stack_t * stack, size_t stack_size, k_thread_entry_t entry, void * p1, void * p2, void * p3, int prio, u32_t options, s32_t delay);
uintptr_t z_mrsh_k_thread_create(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, void *more, void *ssf)
{
	_current->syscall_frame = ssf;
	Z_OOPS(Z_SYSCALL_MEMORY_READ(more, 4 * sizeof(uintptr_t)));
	k_tid_t ret = z_vrfy_k_thread_create(*(struct k_thread **)&arg0, *(k_thread_stack_t **)&arg1, *(size_t*)&arg2, *(k_thread_entry_t*)&arg3, *(void **)&arg4, *(void **)&(((uintptr_t *)more)[0]), *(void **)&(((uintptr_t *)more)[1]), *(int*)&(((uintptr_t *)more)[2]), *(u32_t*)&(((uintptr_t *)more)[3]), *(s32_t*)&(((uintptr_t *)more)[4]))
;
	return (uintptr_t) ret;
}

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif
