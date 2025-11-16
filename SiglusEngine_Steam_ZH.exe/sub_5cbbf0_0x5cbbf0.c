// 函数: sub_5cbbf0
// 地址: 0x5cbbf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg1[1]
int32_t ecx = arg1[2]

if (edi == ecx)
    int32_t edx_1 = *arg1
    
    if (arg2 u>= edx_1 && arg2 u< edx_1 + (ecx << 1))
        sub_5c4990(0x80004005)
        noreturn
    
    int32_t edi_1
    
    if (ecx != 0)
        edi_1 = edi * 2
        
        if (edi * 2 s< 0 || edi_1 u> 0x3fffffff)
            return 0
    else
        edi_1 = ecx + 1
    
    int32_t eax_2 = __aligned_offset_recalloc(edx_1, edi_1, 2)
    
    if (eax_2 == 0)
        return 0
    
    arg1[2] = edi_1
    *arg1 = eax_2

int16_t* ecx_2 = *arg1 + (arg1[1] << 1)

if (ecx_2 != 0)
    int32_t eax_3
    eax_3.w = *arg2
    *ecx_2 = eax_3.w

arg1[1] += 1
return 1
