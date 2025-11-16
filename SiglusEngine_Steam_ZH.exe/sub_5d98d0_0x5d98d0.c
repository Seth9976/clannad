// 函数: sub_5d98d0
// 地址: 0x5d98d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result
int32_t edx_2
edx_2:result = muls.dp.d(0x4fba3d0b, *(arg1 + 0xa8) - *(arg1 + 0xa4))
int32_t edx_3 = edx_2 s>> 0xb
void* var_10 = arg1
int32_t i_2 = (edx_3 u>> 0x1f) + edx_3
int32_t i_1 = i_2

if (i_2 s> 0)
    result = 0
    int32_t result_1 = 0
    int32_t i
    
    do
        void* esi_2 = *(arg1 + 0xa4) + result
        sub_5d9690(esi_2)
        int32_t j_6 = (*(esi_2 + 0x538) - *(esi_2 + 0x534)) s/ 0x15fc
        
        if (j_6 s> 0)
            int32_t edi_2 = 0
            int32_t j
            
            do
                sub_5e4fc0(*(esi_2 + 0x534) + edi_2)
                edi_2 += 0x15fc
                j = j_6
                j_6 -= 1
            while (j != 1)
        
        int32_t j_7 = (*(esi_2 + 0x6f4) - *(esi_2 + 0x6f0)) s/ 0x15fc
        
        if (j_7 s> 0)
            int32_t edi_3 = 0
            int32_t j_1
            
            do
                sub_5e4fc0(*(esi_2 + 0x6f0) + edi_3)
                edi_3 += 0x15fc
                j_1 = j_7
                j_7 -= 1
            while (j_1 != 1)
        
        int32_t j_8 = (*(esi_2 + 0x8b0) - *(esi_2 + 0x8ac)) s/ 0x15fc
        
        if (j_8 s> 0)
            int32_t edi_4 = 0
            int32_t j_2
            
            do
                sub_5e4fc0(*(esi_2 + 0x8ac) + edi_4)
                edi_4 += 0x15fc
                j_2 = j_8
                j_8 -= 1
            while (j_2 != 1)
        
        int32_t j_9 = (*(esi_2 + 0x122c) - *(esi_2 + 0x1228)) s/ 0x15fc
        
        if (j_9 s> 0)
            int32_t edi_5 = 0
            int32_t j_3
            
            do
                sub_5e4fc0(*(esi_2 + 0x1228) + edi_5)
                edi_5 += 0x15fc
                j_3 = j_9
                j_9 -= 1
            while (j_3 != 1)
        
        int32_t j_10 = (*(esi_2 + 0x13e8) - *(esi_2 + 0x13e4)) s/ 0x15fc
        
        if (j_10 s> 0)
            int32_t edi_6 = 0
            int32_t j_4
            
            do
                sub_5e4fc0(*(esi_2 + 0x13e4) + edi_6)
                edi_6 += 0x15fc
                j_4 = j_10
                j_10 -= 1
            while (j_4 != 1)
        
        int32_t j_11 = (*(esi_2 + 0x15a4) - *(esi_2 + 0x15a0)) s/ 0x15fc
        
        if (j_11 s> 0)
            int32_t edi_7 = 0
            int32_t j_5
            
            do
                sub_5e4fc0(*(esi_2 + 0x15a0) + edi_7)
                edi_7 += 0x15fc
                j_5 = j_11
                j_11 -= 1
            while (j_5 != 1)
        
        arg1 = var_10
        result = result_1 + 0x19b0
        i = i_1
        i_1 -= 1
        result_1 = result
    while (i != 1)

return result
