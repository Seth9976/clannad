// 函数: sub_1a9e0f7
// 地址: 0x1a9e0f7
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t var_8 = arg1
uint32_t arg_4

if (data_1c078c8 == 0)
    uint32_t eax_1 = arg_4
    
    if (eax_1 s>= 0x61 && eax_1 s<= 0x7a)
        return eax_1 - 0x20
    
    return eax_1

uint32_t ebx_1 = arg_4
BOOL eax_2

if (ebx_1 s< 0x100)
    int32_t eax
    int32_t edx
    
    if (data_1bfc3ac s<= 1)
        wchar16 (* eax_3)[0x21]
        eax_3.b = (*data_1bfc1a0)[ebx_1].b
        eax_2 = eax_3 & 2
    else
        eax_2 = sub_1a981ac(eax, edx, arg1, ebx_1)

if (ebx_1 s>= 0x100 || eax_2 != 0)
    char eax_5 = (ebx_1 s>> 8).b
    void* var_10_1
    
    if ((*(&(*data_1bfc1a0)[zx.d(eax_5)] + 1) & 0x80) == 0)
        arg_4:1.b = 0
        arg_4.b = ebx_1.b
        var_10_1 = 1
    else
        arg_4:2.b = 0
        arg_4.b = eax_5
        arg_4:1.b = ebx_1.b
        var_10_1 = 2
    
    int32_t eax_7 = sub_1a99e7a(data_1c078c8, 0x200, &arg_4, var_10_1, &var_8, 3, 0, 1)
    
    if (eax_7 != 0)
        if (eax_7 != 1)
            return zx.d(var_8:1.b) << 8 | zx.d(var_8.b)
        
        return zx.d(var_8.b)

return ebx_1
