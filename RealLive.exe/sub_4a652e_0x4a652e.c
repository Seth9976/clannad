// 函数: sub_4a652e
// 地址: 0x4a652e
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

*(arg4 - 0x7c) = arg2.b
int16_t ds
uint32_t var_4 = zx.d(ds)
int32_t edi = _bswap(arg5)
int32_t eflags
int32_t eax_1
eax_1.b = __in_al_dx(arg2.w, eflags)
*edi
bool c = unimplemented  {ror cl, 0x52}
void arg_1b
*(&arg_1b + (eax_1 << 2)) = arg2
*(arg2 - 0x51) = rlc.b(*(arg2 - 0x51), ror.b(arg1, 0x52), c)
undefined
