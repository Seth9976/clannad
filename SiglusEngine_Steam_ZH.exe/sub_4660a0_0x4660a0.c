// 函数: sub_4660a0
// 地址: 0x4660a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void** ecx_1 = arg1
int32_t* esi = ecx_1[6]
char* ebx = *esi
int32_t edi
int32_t var_14 = edi
int32_t edi_1 = esi[1]

if (edi_1 != 0)
    goto label_4660c8

if (esi[3](ecx_1) != 0)
    ebx = *esi
    edi_1 = esi[1]
    ecx_1 = arg1
label_4660c8:
    uint32_t edx_1 = zx.d(*ebx)
    int32_t edi_2 = edi_1 - 1
    void* ebx_1 = &ebx[1]
    
    if (edi_2 != 0)
        goto label_4660f2
    
    if (esi[3](ecx_1) != 0)
        ebx_1 = *esi
        edi_2 = esi[1]
        ecx_1 = arg1
    label_4660f2:
        uint32_t eax_5 = zx.d(*ebx_1)
        
        if (edx_1 != 0xff || eax_5 != 0xd8)
            void* eax_4 = *ecx_1
            *(eax_4 + 0x14) = 0x35
            *(eax_4 + 0x18) = edx_1
            *(eax_4 + 0x1c) = eax_5
            (*eax_4)(ecx_1)
            ecx_1 = arg1
        
        esi[1] = edi_2 - 1
        *esi = ebx_1 + 1
        ecx_1[0x69] = eax_5
        return 1

return 0
