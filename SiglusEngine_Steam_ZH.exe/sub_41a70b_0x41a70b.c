// 函数: sub_41a70b
// 地址: 0x41a70b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint16_t* ecx_1 = *(arg1[1] + 0x20)
void* esi = *arg1
int16_t* ebx = *(esi + 0x20)
int32_t edi
int32_t var_38 = edi
void* edi_3 = *(esi + 0x6c) * *(esi + 0x60) + ebx
uint16_t* var_1c = ecx_1
int16_t* var_20 = ebx
void* var_28 = edi_3

while (ebx u< edi_3)
    void* esi_2 = &ebx[*(esi + 0x68)]
    int16_t* edx_2 = *(esi + 0x60) + ebx
    uint16_t* var_c_1 = ecx_1
    int16_t* var_14_1 = ebx
    int16_t* var_18_1 = edx_2
    
    if (ebx u< esi_2)
        do
            uint32_t esi_3 = zx.d(edx_2[1])
            uint32_t ecx_2 = zx.d(*edx_2)
            uint32_t edx_3 = zx.d(*ebx)
            uint32_t edi_4 = zx.d(ebx[1])
            uint32_t var_10_1 = edx_3
            edx_3.w &= 0xff
            uint32_t ebx_1
            ebx_1.w = esi_3.w & 0xff
            uint32_t edx_4
            edx_4.w = ecx_2.w & 0xff
            uint32_t edx_5
            edx_5.w = edi_4.w & 0xff
            uint32_t ecx_3
            ecx_3.w = esi_3.w & 0xff00
            uint32_t ebx_4
            ebx_4.w = var_10_1.w & 0xff00
            uint32_t ebx_5
            ebx_5.w = ecx_2.w & 0xff00
            uint32_t ebx_6
            ebx_6.w = edi_4.w & 0xff00
            uint16_t edx_9 = zx.w(((ebx_1 + edx_3 + edx_4 + edx_5 + 2) u>> 2).b)
                ^ zx.w(((ecx_3 + ebx_4 + ebx_5 + ebx_6 + 0x200) u>> 2).b) ^ (((esi_3 & 0xff00)
                + (var_10_1 & 0xff00) + (ecx_2 & 0xff00) + (edi_4 & 0xff00) + 0x200) u>> 2).w
            uint16_t* ecx_14 = var_c_1
            var_c_1 = &var_c_1[1]
            *ecx_14 = edx_9
            ebx = &var_14_1[2]
            edx_2 = &var_18_1[2]
            var_14_1 = ebx
            var_18_1 = edx_2
        while (ebx u< esi_2)
        
        ecx_1 = var_1c
        ebx = var_20
        edi_3 = var_28
    
    void** edx_11 = arg1
    ecx_1 += *(edx_11[1] + 0x60)
    esi = *edx_11
    ebx = &ebx[*(esi + 0x60)]
    var_1c = ecx_1
    var_20 = ebx

return 0
