// 函数: sub_6dced0
// 地址: 0x6dced0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 = 0
arg1[1] = 0
arg1[2] = 0
arg1[0xa] = arg1[9]
int32_t result_1
int32_t result = result_1
*arg1 = result

if (result == 0 || result == 1 || result == 3)
    arg1[1] = zx.d(*arg2)
    arg1[2] = zx.d(*(arg2 + 2))
    arg1[7] = arg1[1]
    int32_t eax_14 = arg1[2]
    arg1[3] = 0
    arg1[4] = 0
    arg1[5] = 0
    arg1[6] = 0
    arg1[8] = eax_14
    sub_6dd3b0(&arg1[9], 1)
    int32_t edx = arg1[2]
    int32_t ecx_6 = arg1[1]
    int32_t* esi_1 = arg1[9]
    *esi_1 = *arg1
    esi_1[6] = arg2 + 4
    esi_1[1] = 0
    esi_1[2] = 0
    esi_1[3] = ecx_6
    esi_1[4] = edx
    esi_1[7] = arg3 - 4
    esi_1[5].b = 0
    return arg3 - 4

if (result == 2)
    int32_t result_2 = arg2 + 0x74
    arg1[1] = *(arg2 + 0x1c)
    arg1[2] = *(arg2 + 0x20)
    arg1[3] = *(arg2 + 0x14)
    arg1[4] = *(arg2 + 0x18)
    arg1[5] = *(arg2 + 4)
    arg1[6] = *(arg2 + 8)
    arg1[7] = *(arg2 + 0xc) + *(arg2 + 4)
    arg1[8] = *(arg2 + 0x10) + *(arg2 + 8)
    uint32_t edi_1 = zx.d(*(arg2 + 2))
    result_1 = result_2
    arg2 = edi_1
    result = sub_6dd3b0(&arg1[9], edi_1)
    
    if (edi_1 s> 0)
        int32_t edi_2 = 0
        
        while (true)
            result = sub_6dd020(arg1[9] + edi_2, *arg1, result_2, &result_1)
            edi_2 += 0x20
            uint32_t temp1_1 = arg2
            arg2 -= 1
            
            if (temp1_1 == 1)
                break
            
            result_2 = result_1

return result
