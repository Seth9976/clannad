// 函数: sub_4f74e2
// 地址: 0x4f74e2
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t edx_1 = arg2 - *(arg4 - 0x31)
bool p_1 = unimplemented  {sub edx, dword [esi-0x31]}
bool z = arg2 == *(arg4 - 0x31)
int32_t* ebp = *arg3
int32_t eflags
int32_t eax
eax.b = __salc(eflags)
int16_t x87status
int16_t temp0_1
temp0_1, x87status = __fnstcw_memmem16(arg5)
*(arg1 - 0x55) = temp0_1

if (p_1)
    jump(sub_4f749a+0x5d)

if (z)
    undefined

*(arg4 - 0x31)
void* edx = edx_1 - *(arg4 - 0x31)
bool p = unimplemented  {sub edx, dword [esi-0x31]}
*ebp
eax.b = __salc(eflags)
__fldenv_memmem28(*(edx - 0x55))

if (not(p))
    jump(0x4f7527)

jump(0x4f7546)
