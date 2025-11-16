// 函数: sub_4987a0
// 地址: 0x4987a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result
int32_t eax_1

if (arg2:1.b u< 0x80)
label_4987dd:
    result = *(arg1 + 0x114)
    
    if (result s< 0x1ff)
        eax_1 = result - 1
        *(arg1 + 0x114) = eax_1
    label_4987f1:
        *(eax_1 + arg1 + 0x118) = arg2.b
        *(arg1 + 0x114) += 1
        result = *(arg1 + 0x114)
        *(result + arg1 + 0x118) = 0
        *(arg1 + 0x114) += 1
else
    if (arg2:1.b u< 0xa0)
        if (arg2:1.b u>= 0xfe)
            goto label_4987dd
    else if (arg2:1.b u<= 0xdf || arg2:1.b u>= 0xfe)
        goto label_4987dd
    
    result = *(arg1 + 0x114)
    
    if (result s< 0x1fe)
        *(arg1 + 0x114) = result - 1
        *(result - 1 + arg1 + 0x118) = arg2:1.b
        *(arg1 + 0x114) += 1
        eax_1 = *(arg1 + 0x114)
        goto label_4987f1
return result
