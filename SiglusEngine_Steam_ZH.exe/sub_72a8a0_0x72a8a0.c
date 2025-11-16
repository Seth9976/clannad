// 函数: sub_72a8a0
// 地址: 0x72a8a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg1
int32_t* esi = eax[6]
int32_t* var_8 = eax
int32_t edi = esi[1]
char* ebx = *esi

if (edi != 0)
    goto label_72a8db

if (esi[3](eax) != 0)
    ebx = *esi
    edi = esi[1]
    eax = var_8
label_72a8db:
    void* ebx_1 = &ebx[1]
    uint32_t ecx_1 = zx.d(*ebx) << 8
    int32_t edi_1 = edi - 1
    
    if (edi != 1)
        goto label_72a8fd
    
    if (esi[3](eax) != 0)
        ebx_1 = *esi
        edi_1 = esi[1]
    label_72a8fd:
        int32_t edi_2 = edi_1 - 1
        void* ebx_2 = ebx_1 + 1
        
        if (ecx_1 + zx.d(*ebx_1) != 4)
            *(*var_8 + 0x14) = 0xc
            (**var_8)(var_8)
        
        if (edi_2 != 0)
            goto label_72a937
        
        if (esi[3](var_8) != 0)
            ebx_2 = *esi
            edi_2 = esi[1]
        label_72a937:
            void* ebx_3 = ebx_2 + 1
            uint32_t edx_2 = zx.d(*ebx_2) << 8
            int32_t edi_3 = edi_2 - 1
            
            if (edi_2 != 1)
                goto label_72a95c
            
            if (esi[3](var_8) != 0)
                ebx_3 = *esi
                edi_3 = esi[1]
            label_72a95c:
                void** ecx_4 = var_8
                uint32_t edx_3 = edx_2 + zx.d(*ebx_3)
                *(*ecx_4 + 0x14) = 0x54
                *(*ecx_4 + 0x18) = edx_3
                (*(*ecx_4 + 4))(ecx_4, 1)
                var_8[0x3f] = edx_3
                *esi = ebx_3 + 1
                esi[1] = edi_3 - 1
                int32_t result
                result.b = 1
                return result

return 0
