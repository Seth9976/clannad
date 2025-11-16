// 函数: sub_7355b0
// 地址: 0x7355b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
int32_t i = 0
void* var_10 = esi
void* result = *(esi + 0x19c)
void* result_1 = result

if (*(esi + 0x24) s> 0)
    void* ebx_1 = *(esi + 0xc4) + 0xc
    
    do
        uint32_t ecx_1 = *(ebx_1 + 0x1c) * *ebx_1
        int32_t temp0_1 = divs.dp.d(sx.q(ecx_1), *(esi + 0x124))
        uint32_t esi_1 = modu.dp.d(0:(*(ebx_1 + 0x24)), ecx_1)
        
        if (esi_1 == 0)
            esi_1 = ecx_1
        
        void* result_2
        
        if (i != 0)
            result_2 = result_1
        else
            result_2 = result_1
            *(result_2 + 0x48) = divs.dp.d(sx.q(esi_1 - 1), temp0_1) + 1
        
        int32_t j_1 = temp0_1 * 2
        result = *(*(result_2 + (*(result_2 + 0x40) << 2) + 0x38) + (i << 2))
        
        if (j_1 s> 0)
            result += esi_1 << 2
            void* esi_2 = result - 4
            int32_t j
            
            do
                result += 4
                *(result - 4) = *esi_2
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        esi = var_10
        i += 1
        ebx_1 += 0x58
    while (i s< *(esi + 0x24))

return result
