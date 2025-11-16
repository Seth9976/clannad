// 函数: sub_4f7476
// 地址: 0x4f7476
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t edx_2 = arg2 - *(arg4 - 0x31)
bool p_1 = unimplemented  {sub edx, dword [esi-0x31]}
bool z = arg2 == *(arg4 - 0x31)
int32_t* ebp = *arg3
int32_t eflags
void* eax
eax.b = __salc(eflags)
int16_t x87status
int16_t temp0_1
temp0_1, x87status = __fnstcw_memmem16(arg6)
*(arg5 - 0x55) = temp0_1

if (p_1)
    jump(0x4f748b)

if (z)
    undefined

*(arg4 - 0x31)
int32_t edx = edx_2 - *(arg4 - 0x31)
bool p = unimplemented  {sub edx, dword [esi-0x31]}
int32_t ebp_1 = *ebp
eax.b = __salc(eflags)
int16_t x87status_1
int16_t temp0_3
temp0_3, x87status_1 = __fnstcw_memmem16(arg6)
*(eax - 0x55) = temp0_3

if (not(p))
    jump(0x4f74bb)

return sub_4f74da(arg1, edx, ebp_1, arg4, arg6) __tailcall
