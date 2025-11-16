// 函数: sub_41a839
// 地址: 0x41a839
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint8_t* ecx_1 = *(arg1[1] + 0x20)
int32_t edi
int32_t var_34 = edi
void* eax_1 = *arg1
char* ebx = *(eax_1 + 0x20)
void* edi_3 = *(eax_1 + 0x6c) * *(eax_1 + 0x60) + ebx
uint8_t* var_18 = ecx_1
char* var_1c = ebx
void* var_28 = edi_3

while (ebx u< edi_3)
    void* eax_3 = *(eax_1 + 0x68) + ebx
    char* edx_2 = *(eax_1 + 0x60) + ebx
    uint8_t* var_c_1 = ecx_1
    char* var_10_1 = ebx
    char* var_14_1 = edx_2
    
    if (ebx u< eax_3)
        do
            uint32_t ecx_2 = zx.d(*edx_2)
            uint32_t eax_4 = zx.d(edx_2[1])
            uint32_t edi_4 = zx.d(ebx[1])
            uint32_t ecx_3 = zx.d(*ebx)
            int32_t edx_6 = (eax_4 & 0xf) + (ecx_3 & 0xf) + (ecx_2 & 0xf)
            uint32_t var_20_1 = ecx_3
            ecx_3.w &= 0xf0
            uint32_t ebx_7
            ebx_7.w = eax_4.w & 0xf0
            uint8_t edx_8 = ((edx_6 + (edi_4 & 0xf) + 2) u>> 2).b
            eax_4.w &= 0xf0
            uint32_t ecx_4
            ecx_4.w = ecx_2.w & 0xf0
            uint32_t ecx_5
            ecx_5.w = edi_4.w & 0xf0
            edi_4.w &= 0xf0
            uint32_t ecx_8
            ecx_8.w = var_20_1.w & 0xf0
            uint32_t ecx_9
            ecx_9.w = ecx_2.w & 0xf0
            uint8_t* eax_9 = var_c_1
            var_c_1 = &var_c_1[1]
            *eax_9 = ((edx_8 ^ ((ebx_7 + ecx_3 + ecx_4 + ecx_5 + 0x20) u>> 2).b) & 0xf)
                ^ ((eax_4 + ecx_8 + ecx_9 + edi_4 + 0x20) u>> 2).b
            ebx = &var_10_1[2]
            edx_2 = &var_14_1[2]
            var_10_1 = ebx
            var_14_1 = edx_2
        while (ebx u< eax_3)
        
        ecx_1 = var_18
        ebx = var_1c
        edi_3 = var_28
    
    ecx_1 = &ecx_1[*(arg1[1] + 0x60)]
    eax_1 = *arg1
    ebx = &ebx[*(eax_1 + 0x60) << 1]
    var_18 = ecx_1
    var_1c = ebx

return 0
