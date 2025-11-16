// 函数: sub_46e540
// 地址: 0x46e540
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = __chkstk(0x1020)
int32_t __saved_ebp
int32_t var_8 = __security_cookie ^ &__saved_ebp
int32_t i = 0
int32_t ebx = 0
(&data_1b15284)[ecx] = 0
(&data_1b14e54)[ecx] = 0

if (data_7031bc s> 0)
    void* ecx_3 = ecx * 0x650 + 0x72d86c
    void* edx_2 = ecx * 0x7a0 + 0x98c1cc
    int32_t edi_1 = 0
    int32_t var_1008[0x200]
    int32_t var_808[0x1fb]
    
    do
        if (*(ecx_3 - 0x1b0) != 0)
            (&data_1b15284)[ecx] += 1
            
            if (*(edx_2 + 4) != 0 && *edx_2 != 0)
                if (*ecx_3 == 0)
                    var_808[edi_1] = i
                    edi_1 += 1
                else
                    var_1008[ebx] = i
                    ebx += 1
                
                (&data_1b14e54)[ecx] += 1
        
        i += 1
        ecx_3 += 0xca0
        edx_2 += 0xf40
    while (i s< data_7031bc)
    
    int32_t var_1010_1 = edi_1
    
    if (ebx s> 0)
        int32_t eax_2 = ebx << 2
        data_1cd5398 = 0
        char* var_14_1 = "obj_dispsort_qsort_tmp"
        data_1cd536c = 0
        sub_46e450(sub_4d6960(eax_2, &data_1cd5398, &data_1cd536c, eax_2, var_14_1), &var_1008, 
            ecx, ebx)
        i = sub_4d6c40(&data_1cd536c, &data_1cd5398)
        
        if (edi_1 s> 0)
            int32_t eax_4 = edi_1 << 2
            data_1cd5398 = 0
            char* var_14_2 = "obj_dispsort_qsort_tmp"
            data_1cd536c = 0
            sub_46e450(sub_4d6960(eax_4, &data_1cd5398, &data_1cd536c, eax_4, var_14_2), &var_808, 
                ecx, edi_1)
            i = sub_4d6c40(&data_1cd536c, &data_1cd5398)
        
        int32_t ecx_9 = 0
        int32_t ebx_1 = 0
        int32_t var_1024_1 = 0
        
        if (ebx s> 0)
            int32_t eax_7 = ecx << 9
            
            do
                int32_t ecx_6 = var_1008[ecx_9]
                int32_t eax_8 = 0
                int32_t esi_1 = 0
                int32_t var_101c_1 = ecx_6
                int32_t var_1014_1 = 0
                
                if (edi_1 s> 0)
                    do
                        int32_t edi_2 = var_808[esi_1]
                        
                        if (sub_46e220(eax_8, ecx_6, ecx, edi_2) == 0)
                            var_808[var_1014_1] = edi_2
                            eax_8 = var_1014_1 + 1
                            var_1014_1 = eax_8
                        else
                            int32_t eax_11 = eax_7 + ebx_1
                            ebx_1 += 1
                            *((eax_11 << 2) + &data_1b15490) = edi_2
                            eax_8 = var_1014_1
                        
                        ecx_6 = var_101c_1
                        esi_1 += 1
                    while (esi_1 s< var_1010_1)
                
                edi_1 = eax_8
                i = eax_7 + ebx_1
                var_1010_1 = edi_1
                ebx_1 += 1
                *((i << 2) + &data_1b15490) = ecx_6
                ecx_9 = var_1024_1 + 1
                var_1024_1 = ecx_9
            while (ecx_9 s< ebx)
        
        if (edi_1 s> 0)
            __builtin_memcpy((((ecx << 9) + ebx_1) << 2) + &data_1b15490, &var_808, var_1010_1 << 2)
    else if (edi_1 s> 0)
        int32_t ebx_2 = edi_1 << 2
        data_1cd5398 = 0
        char* var_14_4 = "obj_dispsort_qsort_tmp"
        data_1cd536c = 0
        sub_46e450(sub_4d6960(i, &data_1cd5398, &data_1cd536c, ebx_2, var_14_4), &var_808, ecx, 
            edi_1)
        i = sub_4d6c40(&data_1cd536c, &data_1cd5398)
        
        if (edi_1 s> 0)
            void* var_100c_1 = (ecx << 0xb) + &data_1b15490
            __builtin_memcpy((ecx << 0xb) + &data_1b15490, &var_808, ebx_2 u>> 2 << 2)

int32_t entry_ebx
sub_5f02dd(entry_ebx ^ &__saved_ebp)
return i
