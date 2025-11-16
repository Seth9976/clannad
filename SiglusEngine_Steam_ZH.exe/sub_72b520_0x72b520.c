// 函数: sub_72b520
// 地址: 0x72b520
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void** eax = arg1
int32_t* esi = eax[6]
void** var_8 = eax
int32_t edi = esi[1]
char* ebx = *esi

if (edi != 0)
    goto label_72b558

if (esi[3](eax) != 0)
    ebx = *esi
    edi = esi[1]
    eax = var_8
label_72b558:
    uint32_t ecx = zx.d(*ebx)
    void* ebx_1 = &ebx[1]
    uint32_t var_c_1 = ecx
    int32_t edi_1 = edi - 1
    
    if (edi != 1)
        goto label_72b577
    
    if (esi[3](eax) != 0)
        ebx_1 = *esi
        edi_1 = esi[1]
        ecx = var_c_1
    label_72b577:
        uint32_t edx_2 = zx.d(*ebx_1)
        
        if (ecx != 0xff || edx_2 != 0xd8)
            *(*var_8 + 0x14) = 0x37
            *(*var_8 + 0x18) = var_c_1
            *(*var_8 + 0x1c) = edx_2
            (**var_8)(var_8)
        
        var_8[0x65] = edx_2
        void** result
        result.b = 1
        esi[1] = edi_1 - 1
        *esi = ebx_1 + 1
        return result

return 0
