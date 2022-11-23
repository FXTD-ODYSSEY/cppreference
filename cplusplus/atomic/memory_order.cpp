// cplusplus link https://cplusplus.com/reference/atomic\memory_order
typedef enum memory_order {
    memory_order_relaxed, // relaxed
    memory_order_consume, // consume
    memory_order_acquire, // acquire
    memory_order_release, // release
    memory_order_acq_rel, // acquire/release
    memory_order_seq_cst // sequentially consistent
} memory_order;
