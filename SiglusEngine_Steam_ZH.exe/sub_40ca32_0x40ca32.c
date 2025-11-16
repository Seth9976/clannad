// 函数: sub_40ca32
// 地址: 0x40ca32
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t ebx = arg3
int32_t edi
int32_t var_18 = edi
int32_t edi_1 = 0

if (*(arg1 + 0x23c) u> 0)
    uint32_t i = 0
    
    do
        edi_1 += 1
        *(ebx + (i << 2)) = 0xffff
        i = zx.d(edi_1.w)
    while (i u< *(arg1 + 0x23c))

uint32_t i_1 = 0
arg3 = 0
int32_t var_8_1 = 0

if (*(arg1 + 0x264) u> 0)
    do
        i_1.w = *(arg2 + (i_1 << 2))
        
        if (i_1.w != 0xffff)
            int16_t* edx_3 = *(arg1 + 0x24c) + zx.d(i_1.w) * 6
            int32_t j_1 = 3
            int32_t j
            
            do
                int32_t* eax_4 = ebx + (zx.d(*edx_3) << 2)
                
                if (*eax_4 == 0xffff)
                    uint32_t edi_2 = zx.d(arg3.w)
                    arg3 += 1
                    *eax_4 = edi_2
                
                edx_3 = &edx_3[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        var_8_1 += 1
        i_1 = zx.d(var_8_1.w)
    while (i_1 u< *(arg1 + 0x264))

return 0
