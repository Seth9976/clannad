// 函数: sub_465a10
// 地址: 0x465a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* ecx_1 = arg1
int32_t* esi = ecx_1[6]
int32_t ebx = esi[1]
int32_t edi
int32_t var_14 = edi
char* edi_1 = *esi

if (ebx != 0)
    goto label_465a3a

if (esi[3](ecx_1) != 0)
    edi_1 = *esi
    ebx = esi[1]
    ecx_1 = arg1
label_465a3a:
    int32_t eax_2
    eax_2:1.b = *edi_1
    int32_t ebx_1 = ebx - 1
    void* edi_2 = &edi_1[1]
    
    if (ebx_1 != 0)
        goto label_465a5b
    
    if (esi[3](ecx_1) != 0)
        edi_2 = *esi
        ebx_1 = esi[1]
        ecx_1 = arg1
    label_465a5b:
        int32_t ebx_2 = ebx_1 - 1
        void* edi_3 = edi_2 + 1
        
        if (eax_2 + zx.d(*edi_2) != 4)
            void* eax_5 = *ecx_1
            *(eax_5 + 0x14) = 0xb
            (*eax_5)(ecx_1)
            ecx_1 = arg1
        
        if (ebx_2 != 0)
            goto label_465a89
        
        if (esi[3](ecx_1) != 0)
            edi_3 = *esi
            ebx_2 = esi[1]
            ecx_1 = arg1
        label_465a89:
            int32_t eax_7
            eax_7:1.b = *edi_3
            int32_t ebx_3 = ebx_2 - 1
            void* edi_4 = edi_3 + 1
            
            if (ebx_3 != 0)
                goto label_465ab5
            
            if (esi[3](ecx_1) != 0)
                edi_4 = *esi
                ebx_3 = esi[1]
                ecx_1 = arg1
            label_465ab5:
                int32_t edx_3 = eax_7 + zx.d(*edi_4)
                void* eax_11 = *ecx_1
                *(eax_11 + 0x14) = 0x52
                *(eax_11 + 0x18) = edx_3
                (*(eax_11 + 4))(ecx_1, 1)
                *esi = edi_4 + 1
                esi[1] = ebx_3 - 1
                arg1[0x46] = edx_3
                return 1

return 0
