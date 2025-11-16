// 函数: sub_72b340
// 地址: 0x72b340
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* edi = arg1
int32_t* esi = edi[6]
int32_t ebx = esi[1]
char* eax = *esi

if (ebx != 0)
    goto label_72b374

if (esi[3](edi) != 0)
    eax = *esi
    ebx = esi[1]
label_72b374:
    void* eax_3 = &eax[1]
    uint32_t ecx_2 = zx.d(*eax) << 8
    arg1 = eax_3
    int32_t ebx_1 = ebx - 1
    
    if (ebx != 1)
        goto label_72b3a1
    
    if (esi[3](edi) != 0)
        eax_3 = *esi
        ebx_1 = esi[1]
        arg1 = eax_3
    label_72b3a1:
        int32_t edx_1 = zx.d(*eax_3) + ecx_2 - 2
        *(*edi + 0x14) = 0x5d
        *(*edi + 0x18) = edi[0x65]
        *(*edi + 0x1c) = edx_1
        (*(*edi + 4))(edi, 1)
        *esi = arg1 + 1
        esi[1] = ebx_1 - 1
        
        if (edx_1 s> 0)
            (*(edi[6] + 0x10))(edi, edx_1)
        
        int32_t result
        result.b = 1
        return result

return 0
