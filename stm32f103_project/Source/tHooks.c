#include "tHooks.h"
#include "tinyOS.h"

#if TINYOS_ENABLE_HOOKS == 1

/**********************************************************************************************************
** Function name        :   tHooksCpuIdle
** Descriptions         :   cpu空闲时的hooks
** parameters           :   无
** Returned value       :   无
***********************************************************************************************************/
void tHooksCpuIdle (void)
{

}

/**********************************************************************************************************
** Function name        :   tHooksSysTick
** Descriptions         :   时钟节拍Hooks
** parameters           :   无
** Returned value       :   无
***********************************************************************************************************/
void tHooksSysTick (void)
{

}

/**********************************************************************************************************
** Function name        :   tHooksTaskSwitch
** Descriptions         :   任务切换hooks
** parameters           :   from 从哪个任务开始切换
** parameters           :   to 切换至哪个任务
** Returned value       :   无
***********************************************************************************************************/
void tHooksTaskSwitch (tTask * from, tTask * to)
{

}

/**********************************************************************************************************
** Function name        :   tHooksTaskInit
** Descriptions         :   任务初始化的Hooks
** parameters           :   task 等待初始化的任务
** Returned value       :   无
***********************************************************************************************************/
void tHooksTaskInit (tTask * task)
{

}

#endif
