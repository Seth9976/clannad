// 函数: sub_99cfa0
// 地址: 0x99cfa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
void* const var_8_1
void* const eax
int32_t* ecx_1
void* const edx
void* const ebx

if (arg1 == 0)
    eax = nullptr
label_99cfc9:
    edx = nullptr
    ebx = nullptr
    var_8_1 = nullptr
    ecx_1 = nullptr
else
    eax = arg1[0x10]
    
    if (eax == 0)
        goto label_99cfc9
    
    ebx = *(eax + 4)
    edx = *(eax + 0x68)
    var_8_1 = edx
    
    if (ebx == 0)
        ecx_1 = nullptr
    else
        ecx_1 = *(ebx + 0x1c)

void* edi

if (arg1 == 0)
    edi = nullptr
else
    edi = &arg1[1]

if (eax != 0 && edx != 0 && ebx != 0 && ecx_1 != 0 && edi != 0)
    sub_99cc30(arg1)
    int32_t ecx_3 = arg2[1]
    int32_t eax_2 = *arg2
    __builtin_memset(edi, 0, 0x14)
    *(edi + 0x10) = ecx_3
    *(edi + 0xc) = eax_2
    *(edi + 8) = eax_2
    
    if (sub_742fa0(edi, 1) != 0)
        return 0xffffff79
    
    int32_t eax_5 = sub_742fa0(edi, *(var_8_1 + 0x2c))
    
    if (eax_5 != 0xffffffff)
        arg1[0xa] = eax_5
        int32_t* eax_9 = ecx_1[eax_5 + 8]
        
        if (eax_9 != 0)
            int32_t eax_10 = *eax_9
            arg1[7] = eax_10
            
            if (eax_10 == 0)
                arg1[6] = 0
                arg1[8] = 0
            label_99d0bf:
                arg1[0xc] = arg2[4]
                arg1[0xd] = arg2[5]
                arg1[0xe] = arg2[6]
                arg1[0xf] = arg2[7]
                arg1[0xb] = arg2[3]
                arg1[9] = ecx_1[arg1[7]]
                int32_t i = 0
                *arg1 = sub_99cca0(arg1, *(ebx + 4) << 2)
                
                if (*(ebx + 4) s> 0)
                    do
                        *(*arg1 + (i << 2)) = sub_99cca0(arg1, arg1[9] << 2)
                        i += 1
                    while (i s< *(ebx + 4))
                
                int32_t ecx_14 = *(ecx_1[eax_5 + 8] + 0xc)
                return (*(&data_adde04)[ecx_1[ecx_14 + 0x48]])[4](arg1, ecx_1[ecx_14 + 0x88])
            
            arg1[6] = sub_742fa0(edi, 1)
            int32_t eax_12 = sub_742fa0(edi, 1)
            arg1[8] = eax_12
            
            if (eax_12 != 0xffffffff)
                goto label_99d0bf

return 0xffffff78
