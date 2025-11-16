// 函数: sub_4f7464
// 地址: 0x4f7464
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*(arg4 - 0x31)
bool p_1 = unimplemented  {sub edx, dword [esi-0x31]}
bool z = arg2 == *(arg4 - 0x31)
int32_t* ebp = *arg3
int32_t eflags
int32_t eax
eax.b = __salc(eflags)
int16_t x87status
int16_t temp0_1
temp0_1, x87status = __fnstcw_memmem16(arg5)
*(arg4 - 0x55) = temp0_1

if (p_1)
    jump(sub_4f7476+3)

if (z)
    undefined

*(arg4 - 0x31)
*(arg4 - 0x31)
bool p = unimplemented  {sub edx, dword [esi-0x31]}
*ebp
eax.b = __salc(eflags)
int16_t x87status_1
int16_t temp0_3
temp0_3, x87status_1 = __fnstcw_memmem16(arg5)
void* entry_ebx
*(entry_ebx - 0x55) = temp0_3

if (not(p))
    jump(0x4f74a9)

jump(0x4f74c8)
