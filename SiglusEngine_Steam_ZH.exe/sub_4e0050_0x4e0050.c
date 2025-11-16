// 函数: sub_4e0050
// 地址: 0x4e0050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
int32_t edi
int32_t var_14 = edi
void* edi_1 = arg1
void* ebx_1 = *(edi_1 + 0x1c8)

if (*(ebx_1 + 0x5c) s>= *(edi_1 + 0x13c))
    arg1 = nullptr
    int32_t var_8_1 = *(edi_1 + 0xdc)
    
    if (*(edi_1 + 0x24) s> 0)
        void* esi_1 = ebx_1 + 0xc
        bool cond:2_1
        
        do
            (*(esi_1 + 0x28))(edi_1, var_8_1, 
                *(arg2 + (arg1 << 2)) + ((*(esi_1 + 0x58) * *arg3) << 2), esi_1)
            esi_1 += 4
            cond:2_1 = arg1 + 1 s< *(edi_1 + 0x24)
            arg1 += 1
            var_8_1 += 0x54
        while (cond:2_1)
    
    *(ebx_1 + 0x5c) = 0

int32_t eax_7 = *(ebx_1 + 0x60)
int32_t esi_3 = *(edi_1 + 0x13c) - *(ebx_1 + 0x5c)

if (esi_3 u> eax_7)
    esi_3 = eax_7

int32_t eax_8 = *arg5
int32_t ecx_7 = arg6 - eax_8

if (esi_3 u> ecx_7)
    esi_3 = ecx_7

(*(*(edi_1 + 0x1cc) + 4))(edi_1, ebx_1 + 0xc, *(ebx_1 + 0x5c), arg4 + (eax_8 << 2), esi_3)
int32_t edx_8 = *(ebx_1 + 0x60)
*arg5 += esi_3
int32_t* result = *(edi_1 + 0x13c)
int32_t ecx_13 = *(ebx_1 + 0x5c) + esi_3
*(ebx_1 + 0x60) = edx_8 - esi_3
*(ebx_1 + 0x5c) = ecx_13

if (ecx_13 s>= result)
    result = arg3
    *result += 1

return result
