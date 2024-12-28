(module
	(memory (export "memory") 1 10) ;; 10 page, 64KB each
	(data (i32.const 0x0) "\01\01\00\00") ;; i32.const 0x0 means we write to memory location 0x0
)
