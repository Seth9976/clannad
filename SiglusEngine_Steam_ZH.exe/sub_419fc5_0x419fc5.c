// 函数: sub_419fc5
// 地址: 0x419fc5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = *arg1
int16_t* ecx_1 = *(arg1[1] + 0x20)
int16_t* ebx = *(edx + 0x20)
void* esi_2 = *(edx + 0x6c) * *(edx + 0x60) + ebx
int16_t* var_14 = ecx_1
int16_t* var_18 = ebx
void* var_24 = esi_2

if (ebx u< esi_2)
    int32_t edi
    int32_t var_34_1 = edi
    
    do
        void* edx_2 = &ebx[*(edx + 0x68)]
        int16_t* edi_2 = *(edx + 0x60) + ebx
        int16_t* var_8_1 = ecx_1
        int16_t* var_10_1 = ebx
        
        if (ebx u< edx_2)
            do
                uint32_t esi_3 = zx.d(ebx[1])
                uint32_t ecx_2 = zx.d(*edi_2)
                uint32_t edx_3 = zx.d(edi_2[1])
                uint32_t ecx_3 = zx.d(*ebx)
                edi_2 = &edi_2[2]
                int16_t ebx_8 = ((((edx_3 & 0xffff03e0) + (ecx_3 & 0xffff03e0)
                    + (ecx_2 & 0xffff03e0) + (esi_3 & 0xffff03e0) + 0x40) u>> 2).w & 0x3e0) | ((((edx_3
                    & 0x7c1f) + (ecx_3 & 0x7c1f) + (ecx_2 & 0x7c1f) + (esi_3 & 0x7c1f) + 0x802) u>> 2)
                    .w & 0x7c1f)
                int16_t* ecx_15 = var_8_1
                var_8_1 = &var_8_1[1]
                *ecx_15 = ebx_8
                ebx = &var_10_1[2]
                var_10_1 = ebx
            while (ebx u< edx_2)
            
            ecx_1 = var_14
            ebx = var_18
            esi_2 = var_24
        
        ecx_1 += *(arg1[1] + 0x60)
        edx = *arg1
        ebx = &ebx[*(edx + 0x60)]
        var_14 = ecx_1
        var_18 = ebx
    while (ebx u< esi_2)

return 0
