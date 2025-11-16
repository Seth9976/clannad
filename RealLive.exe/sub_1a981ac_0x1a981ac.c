// 函数: sub_1a981ac
// 地址: 0x1a981ac
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t var_8 = arg3
int32_t arg_4
int32_t eax = arg_4
uint32_t eax_1

if (eax + 1 u> 0x100)
    char ecx_3 = (eax s>> 8).b
    int32_t __saved_esi_1
    
    if ((*(&(*data_1bfc1a0)[zx.d(ecx_3)] + 1) & 0x80) == 0)
        var_8:1.b = 0
        var_8.b = eax.b
        __saved_esi_1 = 1
    else
        var_8:2.b = 0
        var_8.b = ecx_3
        var_8:1.b = eax.b
        __saved_esi_1 = 2
    
    BOOL result = sub_1a9a17e(1, &var_8, __saved_esi_1, &arg_4:2, 0, 0, 1)
    
    if (result == 0)
        return result
    
    eax_1 = zx.d(arg_4:2.w)
else
    eax_1 = zx.d((*data_1bfc1a0)[eax])

return eax_1 & arg4
