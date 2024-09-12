#ifndef TCONFIG_H
#define TCONFIG_H

#define	TINYOS_PRO_COUNT				32						// TinyOS任务的优先级序号
#define TINYOS_SLICE_MAX				10						// 每个任务最大运行的时间片计数

#define TINYOS_IDLETASK_STACK_SIZE		1024					// 空闲任务的堆栈单元数
#define TINYOS_TIMERTASK_STACK_SIZE		1024					// 定时器任务的堆栈单元数
#define TINYOS_TIMERTASK_PRIO           1                       // 定时器任务的优先级

#define TINYOS_SYSTICK_MS               10                      // 时钟节拍的周期，以ms为单位

// 内核功能裁剪部分
#define TINYOS_ENABLE_SEM               0                       // 是否使能信号量
#define TINYOS_ENABLE_MUTEX             0                       // 是否使能互斥信号量
#define TINYOS_ENABLE_FLAGGROUP         0                       // 是否使能事件标志组
#define TINYOS_ENABLE_MBOX              0                       // 是否使能邮箱
#define TINYOS_ENABLE_MEMBLOCK          0                       // 是否使能存储块
#define TINYOS_ENABLE_TIMER             0                       // 是否使能定时器
#define TINYOS_ENABLE_CPUUSAGE_STAT     0                       // 是否使能CPU使用率统计
#define TINYOS_ENABLE_HOOKS             1                       // 是否使能Hooks

#endif /* TCONFIG_H */
