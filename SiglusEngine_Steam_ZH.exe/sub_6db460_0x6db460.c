// 函数: sub_6db460
// 地址: 0x6db460
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t ebx = arg3
int32_t eax_2 = *(ebx + 0x278)

if (eax_2 != 0)
    if (eax_2 == 1)
        int32_t eax_3 = sub_6d8610(arg3, arg4)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_3
    
    *(ebx + 0x278) = eax_2 - 1
    
    if (eax_2 == 2)
        sub_6d8610(arg3, arg4)
        int32_t* eax_5 = sub_6d4840(ebx, "no space in chunk cache")
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_5

int32_t eax_6 = *(ebx + 0x74)
char* edx_5

if ((eax_6.b & 1) == 0)
    edx_5 = "missing IHDR"
else
    if ((eax_6.b & 4) != 0)
        eax_6 |= 8
        *(ebx + 0x74) = eax_6
    
    int32_t eax_7 = sub_6d87a0(eax_6, arg4 + 1, arg3, 1)
    
    if (eax_7 == 0)
        sub_6d8610(ebx, arg4)
        int32_t* eax_8 = sub_6d4840(ebx, "out of memory")
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_8
    
    sub_6d85d0(eax_7, eax_7, ebx, arg4)
    void* eax_9 = sub_6d8610(ebx, 0)
    
    if (eax_9 != 0)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_9
    
    char* esi_1 = nullptr
    int32_t ecx_10
    
    if (arg4 != 0)
        ecx_10 = eax_7
        
        while (esi_1[ecx_10] != 0)
            esi_1 = &esi_1[1]
            
            if (esi_1 u>= arg4)
                break
    
    if (arg4 == 0 || esi_1 u> 0x4f || esi_1 u< 1)
        edx_5 = "bad keyword"
    else
        eax_9 = &esi_1[5]
        
        if (eax_9 u<= arg4)
            eax_9.b = esi_1[ecx_10 + 1]
            
            if (eax_9.b == 0 || (eax_9.b == 1 && esi_1[ecx_10 + 2] == 0))
                int32_t edx_6
                edx_6.b = eax_9.b != 0
                void* esi_2 = &esi_1[3]
                void* var_f0_1 = esi_2
                
                if (esi_2 u< arg4)
                    while (*(esi_2 + ecx_10) != 0)
                        esi_2 += 1
                        
                        if (esi_2 u>= arg4)
                            break
                
                void* esi_3 = esi_2 + 1
                void* var_f4_1 = esi_3
                
                if (esi_3 u< arg4)
                    while (*(esi_3 + ecx_10) != 0)
                        esi_3 += 1
                        
                        if (esi_3 u>= arg4)
                            break
                
                void* edi_1
                
                if (edx_6 != 0)
                    if (esi_3 + 1 u>= arg4)
                        edx_5 = "truncated"
                    else
                        int32_t var_124_1 = ecx_10
                        void* var_e4 = 0xffffffff
                        eax_9 = sub_6d8ab0(&var_e4, arg4, ebx, esi_3 + 1, &var_e4)
                        
                        if (eax_9 == 1)
                            ecx_10 = *(ebx + 0x298)
                            edi_1 = var_e4
                            goto label_6db63b
                        
                        edx_5 = *(ebx + 0x9c)
                        
                        if (edx_5 == 0)
                            ecx_10 = eax_7
                            edi_1 = var_e4
                            goto label_6db63b
                else if (esi_3 + 1 u> arg4)
                    edx_5 = "truncated"
                else
                    edi_1 = arg4 - (esi_3 + 1)
                label_6db63b:
                    int32_t var_110_1 = ecx_10
                    *(edi_1 + esi_3 + 1 + ecx_10) = 0
                    int32_t var_108_1 = 0
                    int32_t eax_12
                    eax_12.b = edx_6 != 0
                    void* var_104_1 = edi_1
                    int32_t var_114 = eax_12 + 1
                    void* var_100_1 = var_f0_1 + ecx_10
                    void* var_fc_1 = var_f4_1 + ecx_10
                    void* var_10c_1 = esi_3 + 1 + ecx_10
                    int32_t var_124_2 = ecx_10
                    eax_9 = sub_6ce670(&var_114, arg2, ebx, &var_114)
                    
                    if (eax_9 == 0)
                        sub_745f2b(eax_1 ^ &__saved_ebp)
                        return eax_9
                    
                    edx_5 = "insufficient memory"
            else
                edx_5 = "bad compression info"
        else
            edx_5 = "truncated"
    
    arg3 = ebx
    
    if ((*(ebx + 0x78) & 0x100000) != 0)
        char var_e0[0xd8]
        sub_6d4690(eax_9, &var_e0, arg3, edx_5)
        eax_9 = sub_6d4470(ebx, &var_e0)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_9

sub_6d47a0(arg3, edx_5)
noreturn
