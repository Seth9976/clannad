// 函数: sub_6cec30
// 地址: 0x6cec30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* result = arg4
int32_t* result_1 = result
int32_t* result_2 = 1

if (arg3 != 0 && arg2 != 0 && result != 0)
    int32_t var_fc_1 = 0x10
    result = sub_6d8290(result, *(arg2 + 0xf4), arg3, *(arg2 + 0xf8), 1)
    char const* const var_fc_2
    void* ecx
    char* edx_1
    
    if (result != 0)
        sub_6d83a0(arg3, *(arg2 + 0xf4))
        int32_t eax_2 = *(arg2 + 0xf8)
        *(arg2 + 0xe8) |= 0x20
        *(arg2 + 0xf4) = result
        int32_t** ebx_2 = result + (eax_2 << 4)
        int32_t* edi_2 = &result_1[3]
        bool cond:4_1
        
        do
            if (edi_2[-3] == 0 || edi_2[-1] == 0)
                edx_1 = "png_set_sPLT: invalid sPLT"
                ecx = arg3
                
                if ((*(arg3 + 0x78) & &__dos_header) == 0)
                    goto label_6cee3a
                
                sub_6d4470(ecx, "png_set_sPLT: invalid sPLT")
            else
                result.b = edi_2[-2].b
                ebx_2[1].b = result.b
                char* ecx_2 = edi_2[-3]
                
                do
                    result.b = *ecx_2
                    ecx_2 = &ecx_2[1]
                while (result.b != 0)
                
                void* ecx_3 = ecx_2 - &ecx_2[1]
                uint32_t ecx_4 = ecx_3 + 1
                int32_t* eax_3
                
                if (ecx_3 == 0xffffffff)
                    eax_3 = nullptr
                else
                    eax_3 = sub_6d8210(arg3, ecx_4)
                
                *ebx_2 = eax_3
                
                if (eax_3 == 0)
                    result = result_2
                    break
                
                int32_t* eax_4 = sub_748840(eax_3, edi_2[-3], ecx_4)
                int32_t edx_5 = *edi_2
                ecx = arg3
                
                if (edx_5 s<= 0)
                    edx_1 = "internal error: array alloc"
                    goto label_6cee3a
                
                int32_t* eax_5 = sub_6d8240(eax_4, edx_5, ecx, 0xa)
                ebx_2[2] = eax_5
                
                if (eax_5 == 0)
                    sub_6d83a0(arg3, *ebx_2)
                    *ebx_2 = nullptr
                    result = result_2
                    break
                
                ebx_2[3] = *edi_2
                sub_748840(eax_5, edi_2[-1], *edi_2 * 0xa)
                *(arg2 + 8) |= 0x2000
                *(arg2 + 0xf8) += 1
                ebx_2 = &ebx_2[4]
            
            edi_2 = &edi_2[4]
            result = result_2 - 1
            cond:4_1 = result_2 != 1
            result_2 = result
        while (cond:4_1)
        
        if (result s> 0)
            if ((*(arg3 + 0x74) & 0x8000) != 0)
                var_fc_2 = "sPLT out of memory"
                goto label_6cedfd
            
            edx_1 = "sPLT out of memory"
            ecx = arg3
            
            if ((*(arg3 + 0x78) & &__dos_header) == 0)
                goto label_6cee3a
            
            result = sub_6d4470(ecx, edx_1)
    else if ((*(arg3 + 0x74) & 0x8000) == 0)
        edx_1 = "too many sPLT chunks"
        ecx = arg3
        
        if ((*(arg3 + 0x78) & &__dos_header) == 0)
        label_6cee3a:
            sub_6d42e0(ecx, edx_1)
            noreturn
        
        result = sub_6d4470(ecx, edx_1)
    else
        var_fc_2 = "too many sPLT chunks"
    label_6cedfd:
        void var_e0
        sub_6d4690(result, &var_e0, arg3, var_fc_2)
        result = sub_6d4470(arg3, &var_e0)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
