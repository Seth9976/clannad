// 函数: sub_461120
// 地址: 0x461120
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
BOOL eax = *(arg3 + 4)

if (eax == 0 || arg2 u> 0x3e7)
    return eax

int32_t eax_1 = eax + (arg2 << 3)

if (*(eax_1 + 4) != 0)
    sub_4610e0(arg3, arg2)

int32_t edx = data_1b144a0:4

if (edx != 0)
    void* ecx = data_1b144a0:0xc
    
    if (ecx != 0)
        char* ecx_1 = ecx + arg2
        
        if (ecx != neg.d(arg2) && *ecx_1 == 0 && arg4 s<= 0xc00)
            int32_t eax_4 = arg2 * 0xc00 + edx
            *(eax_1 + 4) = eax_4
            *ecx_1 = 1
            return eax_4

return sub_4d6960(arg4, eax_1 + 4, eax_1, arg4, "MSGBK_ONE")
