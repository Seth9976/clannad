// 函数: sub_465ee0
// 地址: 0x465ee0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* ebx = arg1
int32_t* esi = ebx[6]
int32_t* eax = esi[1]
int32_t edi
int32_t var_14 = edi
char* edi_1 = *esi

if (eax != 0)
    goto label_465f0a

if (esi[3](ebx) != 0)
    eax = esi[1]
    edi_1 = *esi
    arg1 = eax
label_465f0a:
    int32_t ecx_1
    ecx_1:1.b = *edi_1
    void* edi_2 = &edi_1[1]
    arg1 = eax - 1
    
    if (eax != 1)
        goto label_465f39
    
    if (esi[3](ebx) != 0)
        edi_2 = *esi
        arg1 = esi[1]
    label_465f39:
        int32_t edx_2 = ebx[0x69]
        int32_t ecx_3 = ecx_1 + zx.d(*edi_2) - 2
        void* eax_6 = *ebx
        *(eax_6 + 0x14) = 0x5b
        *(eax_6 + 0x18) = edx_2
        *(eax_6 + 0x1c) = ecx_3
        (*(eax_6 + 4))(ebx, 1)
        esi[1] = arg1 - 1
        *esi = edi_2 + 1
        
        if (ecx_3 s> 0)
            (*(ebx[6] + 0x10))(ebx, ecx_3)
        
        return 1

return 0
