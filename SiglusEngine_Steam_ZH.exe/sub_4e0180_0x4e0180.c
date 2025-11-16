// 函数: sub_4e0180
// 地址: 0x4e0180
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_1 = *arg4
void* edx = arg1
void* eax_1 = *(edx + 0x1c8) + *(arg2 + 4)
int32_t edi
int32_t var_1c = edi
uint32_t edi_1 = zx.d(*(eax_1 + 0x8c))
uint32_t eax_2 = zx.d(*(eax_1 + 0x96))
int32_t result = *(edx + 0x13c)
int32_t ebx = 0
uint32_t var_10 = edi_1
int32_t var_c = 0

if (result s> 0)
    arg4 = arg3
    
    do
        int32_t* ecx_5 = *arg4
        int32_t esi_1 = *(ecx_1 + (ebx << 2))
        int32_t eax_6 = *(edx + 0x70) + esi_1
        int32_t var_14_1 = eax_6
        
        if (esi_1 u< eax_6)
            do
                eax_6.b = *ecx_5
                ecx_5 += 1
                
                if (edi_1 s> 0)
                    ebx.b = eax_6.b
                    ebx:1.b = ebx.b
                    eax_6.w = ebx.w
                    ebx = var_c
                    int32_t ecx_8
                    int32_t edi_3
                    edi_3, ecx_8 = __memfill_u32(esi_1, eax_6, edi_1 u>> 2)
                    edx = arg1
                    int32_t ecx_11
                    int32_t edi_4
                    edi_4, ecx_11 = __memfill_u8(edi_3, eax_6.b, edi_1 & 3)
                    edi_1 = var_10
                    esi_1 += edi_1
            while (esi_1 u< var_14_1)
        
        uint32_t eax_11 = eax_2
        
        if (eax_11 s> 1)
            sub_498570(ecx_1, ebx, ecx_1, ebx + 1, eax_11 - 1, *(edx + 0x70))
            eax_11 = eax_2
            edx = arg1
        
        ebx += eax_11
        result = *(edx + 0x13c)
        arg4 = &arg4[1]
        var_c = ebx
    while (ebx s< result)

return result
