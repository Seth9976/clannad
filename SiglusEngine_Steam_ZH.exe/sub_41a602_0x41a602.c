// 函数: sub_41a602
// 地址: 0x41a602
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_2c = edi
int16_t* edi_1 = *(arg1[1] + 0x20)
void* eax_1 = *arg1
int16_t* ebx = *(eax_1 + 0x20)
void* edx_2 = *(eax_1 + 0x6c) * *(eax_1 + 0x60) + ebx
int32_t* var_20 = arg1
int16_t* var_10 = edi_1
int16_t* var_14 = ebx
void* var_24 = edx_2

while (ebx u< edx_2)
    void* eax_3 = &ebx[*(eax_1 + 0x68)]
    void* esi_2 = *(eax_1 + 0x60) + ebx
    int16_t* var_8_1 = edi_1
    int16_t* var_c_1 = ebx
    
    if (ebx u< eax_3)
        do
            uint32_t ecx = zx.d(*ebx)
            uint32_t edx_3 = zx.d(ebx[1])
            uint32_t eax_4 = zx.d(*(esi_2 + 2))
            uint32_t edi_2 = zx.d(*esi_2)
            int32_t ebx_5 = (eax_4 & 0xffff00f0) + (ecx & 0xffff00f0) + (edi_2 & 0xffff00f0)
                + (edx_3 & 0xffff00f0) + 0x20
            edi_2.w &= 0xf0f
            edx_3.w &= 0xf0f
            esi_2 += 4
            int16_t* eax_10 = var_8_1
            var_8_1 = &var_8_1[1]
            *eax_10 = ((ebx_5 u>> 2).w & 0xf0) | (
                (((eax_4 & 0xffff0f0f) + (ecx & 0xffff0f0f) + edi_2 + edx_3 + 0x202) u>> 2).w
                & 0xf0f)
            ebx = &var_c_1[2]
            var_c_1 = ebx
        while (ebx u< eax_3)
        
        arg1 = var_20
        edi_1 = var_10
        ebx = var_14
        edx_2 = var_24
    
    edi_1 += *(arg1[1] + 0x60)
    eax_1 = *arg1
    ebx = &ebx[*(eax_1 + 0x60)]
    var_10 = edi_1
    var_14 = ebx

return 0
