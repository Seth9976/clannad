// 函数: sub_1ac54a8
// 地址: 0x1ac54a8
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

if (*arg1 == 0)
    uint32_t* ecx = data_1c07210
    
    if (ecx == 0)
        ecx = sub_1ac5067(0x1c07214)
        data_1c07210 = ecx
    
    *arg1 = sub_1ac5100(ecx)

int32_t esi = *arg1
void* eax_4 = TlsGetValue(*data_1c07210)
int32_t result

if (eax_4 == 0 || esi s>= *(eax_4 + 8))
    result = 0
else
    result = *(*(eax_4 + 0xc) + (esi << 2))

if (result == 0)
    result = arg2()
    sub_1ac526f(data_1c07210, *arg1, result)

return result
