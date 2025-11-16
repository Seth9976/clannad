// 函数: sub_5d9810
// 地址: 0x5d9810
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1
int32_t ecx = arg2
void* var_c = edi
*(edi + 0x164) = arg3
*(edi + 0x160) = ecx
int32_t result = (*(edi + 0x22c) - *(edi + 0x228)) s/ 0x1c0
int32_t result_1 = result

if (result s> 0)
    int32_t ebx_1 = 0
    
    while (true)
        void* edi_2 = *(edi + 0x228) + ebx_1
        ebx_1 += 0x1c0
        *(edi_2 + 0xd8) = ecx
        int32_t edx_4 = (ecx - 1) * *(edi_2 + 0x1c)
        *(edi_2 + 0xdc) = arg3
        int32_t ecx_1 = *(edi_2 + 0xdc)
        int32_t eax_8 = (ecx_1 - 1) * *(edi_2 + 0x20)
        int32_t ecx_2 = ecx_1 * *(edi_2 + 0x18)
        *(edi_2 + 0x12c) = edx_4 + *(edi_2 + 0x18) * ecx
        result = eax_8 + ecx_2
        int32_t result_2 = result_1
        result_1 -= 1
        *(edi_2 + 0x130) = result
        
        if (result_2 == 1)
            break
        
        ecx = arg2
        edi = var_c

return result
