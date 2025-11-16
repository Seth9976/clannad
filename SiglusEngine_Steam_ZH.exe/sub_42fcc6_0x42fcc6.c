// 函数: sub_42fcc6
// 地址: 0x42fcc6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* i = arg2
int32_t edi
int32_t var_14 = edi
int32_t ecx = *(i + 4)
int32_t result = 0

if (ecx == 1)
    do
        result = sub_42fcc6(*(*(*(i + 8) + 0x18) + 0x20), arg3)
        
        if (result s< 0)
            break
        
        i = *(i + 0xc)
    while (i != 0)
else if (ecx == 8)
    int32_t i_1 = 0
    
    if (*(i + 0x14) u> 0)
        do
            result = sub_42fcc6(*(i + 0x10), arg3)
            
            if (result s< 0)
                break
            
            i_1 += 1
        while (i_1 u< *(i + 0x14))
else
    if (ecx != 9)
        return 0x80004005
    
    int32_t ecx_4 = *(i + 0x10)
    
    if (ecx_4 s< 0)
        return 0x80004005
    
    int32_t ebx_1
    
    if (ecx_4 s<= 2)
        ebx_1 = *(i + 0x1c) * *(i + 0x18)
    else
        if (ecx_4 != 3)
            return 0x80004005
        
        ebx_1 = 1
    
    int32_t esi = *(i + 0x14)
    
    if (esi u> 0x1d)
        return 0x80004005
    
    int32_t edx_1
    
    switch (esi)
        case 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0xa, 0xb, 0xc, 0xd, 0x1b, 0x1c
            edx_1 = 4
        case 0xe, 0xf, 0x10, 0x11, 0x12, 0x13
            goto label_42fd31
        case 0x14, 0x15, 0x16, 0x17, 0x18, 0x1d
            edx_1 = 0
        case 0x19, 0x1a
            *(arg1 + 0x334) += 1
        label_42fd31:
            **arg3 = *(arg1 + 0x330)
            *(arg1 + 0x330) += 1
            result = 0
            edx_1 = 4
    
    *arg3 += edx_1 * ebx_1

return result
