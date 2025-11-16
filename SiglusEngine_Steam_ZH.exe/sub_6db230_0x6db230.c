// 函数: sub_6db230
// 地址: 0x6db230
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
char const* const edx_5

if ((eax_6.b & 1) == 0)
    edx_5 = "missing IHDR"
else
    if ((eax_6.b & 4) != 0)
        eax_6 |= 8
        *(ebx + 0x74) = eax_6
    
    int32_t eax_7 = sub_6d87a0(eax_6, arg4, arg3, 2)
    int32_t var_e4 = eax_7
    
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
    
    char* edi_1 = nullptr
    int32_t ecx_10
    
    if (arg4 != 0)
        ecx_10 = var_e4
        
        while (edi_1[ecx_10] != 0)
            edi_1 = &edi_1[1]
            
            if (edi_1 u>= arg4)
                break
    
    if (arg4 == 0 || edi_1 u> 0x4f || edi_1 u< 1)
        edx_5 = "bad keyword"
    else
        eax_9 = &edi_1[3]
        
        if (eax_9 u> arg4)
            edx_5 = "truncated"
        else if (edi_1[ecx_10 + 1] == 0)
            int32_t var_114_1 = ecx_10
            var_e4 = 0xffffffff
            eax_9 = sub_6d8ab0(&edi_1[2], arg4, ebx, &edi_1[2], &var_e4)
            
            if (eax_9 != 1)
                edx_5 = *(ebx + 0x9c)
                
                if (edx_5 == 0)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_9
            else
                void* ecx_12 = *(ebx + 0x298)
                int32_t esi_1 = var_e4
                void* var_114_2 = ecx_12
                void* var_100_1 = ecx_12
                int32_t var_104 = 0
                *(&edi_1[esi_1] + ecx_12 + 2) = 0
                int32_t var_f8_1 = esi_1
                void* var_fc_1 = ecx_12 + 2 + edi_1
                int32_t var_f4_1 = 0
                int32_t var_f0_1 = 0
                int32_t var_ec_1 = 0
                eax_9 = sub_6ce670(&var_104, arg2, ebx, &var_104)
                
                if (eax_9 == 0)
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_9
                
                edx_5 = "insufficient memory"
        else
            edx_5 = "unknown compression type"
    
    arg3 = ebx
    
    if ((*(ebx + 0x78) & 0x100000) != 0)
        char var_e0[0xd8]
        sub_6d4690(eax_9, &var_e0, arg3, edx_5)
        eax_9 = sub_6d4470(ebx, &var_e0)
        sub_745f2b(eax_1 ^ &__saved_ebp)
        return eax_9

sub_6d47a0(arg3, edx_5)
noreturn
