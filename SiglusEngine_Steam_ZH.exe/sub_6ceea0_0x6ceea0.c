// 函数: sub_6ceea0
// 地址: 0x6ceea0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_2 = arg4
void* var_e4 = 1

if (arg3 == 0 || arg2 == 0 || eax_2 == 0)
label_6cf047:
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_2

int32_t* edi_1 = *(arg2 + 0xf0)
int32_t var_100_1 = 0x14
int32_t* eax_3 = sub_6d8290(eax_2, *(arg2 + 0xec), arg3, edi_1, 1)
void* ecx = arg3
char (* edx_2)[0xd8]
char var_e0[0xd8]

if (eax_3 != 0)
    sub_6d83a0(ecx, *(arg2 + 0xec))
    *(arg2 + 0xe8) |= 0x200
    *(arg2 + 0xec) = eax_3
    void* edi_2 = &eax_3[edi_1 * 5]
    void* ebx_2 = eax_2 + 0xc
    
    while (true)
        *edi_2 = *(ebx_2 - 0xc)
        *(edi_2 + 4) = 0
        *(edi_2 + 0x10) = sub_6cee40(arg3, zx.d(*(ebx_2 + 4)))
        uint32_t edx_5 = *ebx_2
        
        if (edx_5 != 0)
            int32_t* eax_8 = sub_6d8210(arg3, edx_5)
            *(edi_2 + 8) = eax_8
            
            if (eax_8 != 0)
                sub_748840(eax_8, *(ebx_2 - 4), *ebx_2)
                *(edi_2 + 0xc) = *ebx_2
                edi_2 += 0x14
                *(arg2 + 0xf0) += 1
            else
                ecx = arg3
                
                if ((*(arg3 + 0x74) & 0x8000) == 0)
                    edx_2 = "unknown chunk: out of memory"
                    
                    if ((*(arg3 + 0x78) & &__dos_header) == 0)
                        break
                    
                    sub_6d4470(ecx, "unknown chunk: out of memory")
                else
                    sub_6d4690(eax_8, &var_e0, ecx, "unknown chunk: out of memory")
                    sub_6d4470(arg3, &var_e0)
        else
            *(edi_2 + 8) = edx_5
            *(edi_2 + 0xc) = edx_5
            edi_2 += 0x14
            *(arg2 + 0xf0) += 1
        
        ebx_2 += 0x14
        eax_2 = var_e4 - 1
        var_e4 = eax_2
        
        if (eax_2 s<= 0)
            goto label_6cf047
else
    if ((*(arg3 + 0x74) & 0x8000) != 0)
        sub_6d4690(eax_3, &var_e0, ecx, "too many unknown chunks")
        edx_2 = &var_e0
        ecx = arg3
    label_6cef34:
        int32_t* eax_4 = sub_6d4470(ecx, edx_2)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_4
    
    edx_2 = "too many unknown chunks"
    
    if ((*(arg3 + 0x78) & &__dos_header) != 0)
        goto label_6cef34
sub_6d42e0(ecx, edx_2)
noreturn
