// 函数: sub_645660
// 地址: 0x645660
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp

if (arg2 s<= 0 || arg4 s<= 0)
    int32_t ecx_4 = eax_1
    eax_1.b = 0
    sub_745f2b(ecx_4 ^ &__saved_ebp)
    return eax_1

arg3[3] = arg2
arg3[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t esi = arg6

if (esi s< 0 || esi s>= 4)
    esi = 0

int32_t var_4c[0x4]
int32_t var_3c[0x4]
int32_t var_2c[0x4]
int32_t var_1c[0x4]
sub_645370(&var_4c, arg4, arg2, &var_4c, &var_3c, &var_2c, &var_1c)
int32_t eax_6 = 0
int32_t i_1 = 4
int32_t ebx_1 = 0x3f
int32_t i

do
    int32_t* var_68
    var_68.q = 0x4056800000000000
    int32_t* var_70
    var_70.q = (zx.o(0)).q
    sub_645430(eax_6, arg5, arg3, var_4c[esi], var_3c[esi], var_2c[esi], var_1c[esi], eax_6, ebx_1, 
        var_70, var_68)
    eax_6 = ebx_1 + 1
    ebx_1 += 0x40
    esi = (esi + 1) & 0x80000003
    
    if (esi s< 0)
        esi = ((esi - 1) | 0xfffffffc) + 1
    
    i = i_1
    i_1 -= 1
while (i != 1)
eax_6.b = 1
sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_6
