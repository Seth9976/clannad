// 函数: sub_4d22fb
// 地址: 0x4d22fb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg2 + 0x14)
int32_t eax = 0

if (edx != 0xffffffff)
    int32_t edi
    int32_t var_c_1 = edi
    void* edx_1 = *(*(arg1 + 0x14) + (edx << 2))
    
    if ((*(*(*(arg1 + 0x10) + (*(edx_1 + 4) << 2)) + 4) & 8) != 0)
        int32_t edx_2 = *(edx_1 + 0x10)
        eax = (*(edx_1 + 0xc) & 0x7ff) | 0xb0001000
        
        if (edx_2 != 0)
            if (edx_2 == 1)
                eax |= 0x550000
            else if (edx_2 == 2)
                eax |= 0xaa0000
            else if (edx_2 == 3)
                eax |= 0xff0000
        
        if (*(arg2 + 0x18) == 0)
            eax |= 0xd000000

if (arg3 != 0)
    *arg3 = eax

return 0
