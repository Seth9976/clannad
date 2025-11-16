// 函数: sub_419e91
// 地址: 0x419e91
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = *arg1
int16_t* ecx_1 = *(arg1[1] + 0x20)
int16_t* ebx = *(edx + 0x20)
void* esi_2 = *(edx + 0x6c) * *(edx + 0x60) + ebx
int16_t* var_18 = ecx_1
int16_t* var_1c = ebx
void* var_28 = esi_2

if (ebx u< esi_2)
    int32_t edi
    int32_t var_38_1 = edi
    
    do
        void* edx_2 = &ebx[*(edx + 0x68)]
        int16_t* edi_2 = *(edx + 0x60) + ebx
        int16_t* var_c_1 = ecx_1
        int16_t* var_10_1 = ebx
        int16_t* var_14_1 = edi_2
        
        if (ebx u< edx_2)
            do
                uint32_t ecx_2 = zx.d(*edi_2)
                uint32_t edx_3 = zx.d(edi_2[1])
                uint32_t esi_3 = zx.d(ebx[1])
                uint32_t ecx_3 = zx.d(*ebx)
                uint32_t ebx_1
                ebx_1.w = ecx_3.w & 0xf81f
                uint32_t edi_3
                edi_3.w = edx_3.w & 0xf81f
                uint32_t ebx_2
                ebx_2.w = ecx_2.w & 0xf81f
                uint32_t ebx_3
                ebx_3.w = esi_3.w & 0xf81f
                uint16_t edi_8 = ((edi_3 + ebx_1 + ebx_2 + ebx_3 + 0x1002) u>> 2).w ^ (((edx_3
                    & 0xffff07e0) + (ecx_3 & 0xffff07e0) + (ecx_2 & 0xffff07e0) + (esi_3 & 0xffff07e0)
                    + 0x40) u>> 2).w
                int16_t* ecx_17 = var_c_1
                var_c_1 = &var_c_1[1]
                *ecx_17 = (edi_8 & 0x7e0) ^ (((edx_3 & 0xf81f) + (ecx_3 & 0xf81f) + (ecx_2 & 0xf81f)
                    + (esi_3 & 0xf81f) + 0x1002) u>> 2).w
                ebx = &var_10_1[2]
                edi_2 = &var_14_1[2]
                var_10_1 = ebx
                var_14_1 = edi_2
            while (ebx u< edx_2)
            
            ecx_1 = var_18
            ebx = var_1c
            esi_2 = var_28
        
        ecx_1 += *(arg1[1] + 0x60)
        edx = *arg1
        ebx = &ebx[*(edx + 0x60)]
        var_18 = ecx_1
        var_1c = ebx
    while (ebx u< esi_2)

return 0
