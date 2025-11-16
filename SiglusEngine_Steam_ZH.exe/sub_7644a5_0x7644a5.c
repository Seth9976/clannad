// 函数: sub_7644a5
// 地址: 0x7644a5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t x87control
int16_t x87status
int16_t x87tag
uint864_t temp0
temp0, x87control, x87tag, x87status = __fnsave_memmem108(arg1, arg3, arg2)
double var_78
int32_t eax
int80_t st0
st0, eax = sub_76453f(fconvert.d(arg5), fconvert.d(arg4), &var_78)
__frstor_memmem108(temp0)

if (eax == 0)
    return fconvert.t(var_78)

void* ebp
return sub_75d039(ebp) __tailcall
