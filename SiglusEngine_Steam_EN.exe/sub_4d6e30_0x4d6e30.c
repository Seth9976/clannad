// 函数: sub_4d6e30
// 地址: 0x4d6e30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = arg4

if (arg5 != 0 && *arg5 != 0 && arg3 != 0)
    uint8_t* var_214 = nullptr
    int32_t var_218 = 0
    int32_t ecx_3 = neg.d(neg.d(arg2)) & 3
    int32_t esi_3 = (arg2 * 3 + ecx_3) * result
    sub_4d6960(esi_3 + 0x36, &var_214, &var_218, esi_3 + 0x36, "TRUE_SAVE_BMP")
    uint8_t* ecx_5 = var_214
    *ecx_5 = 0x4d42
    void* edi_1 = &ecx_5[0x36]
    *(ecx_5 + 0xa) = 0x36
    *(ecx_5 + 2) = esi_3 + 0x36
    *(ecx_5 + 6) = 0
    *(ecx_5 + 0x22) = esi_3
    int32_t esi_4 = result
    *(ecx_5 + 0x16) = result
    *(ecx_5 + 0xe) = 0x28
    *(ecx_5 + 0x12) = arg2
    *(ecx_5 + 0x1a) = 0x180001
    *(ecx_5 + 0x1e) = 0
    *(ecx_5 + 0x26) = 0
    *(ecx_5 + 0x2a) = 0
    *(ecx_5 + 0x2e) = 0
    *(ecx_5 + 0x32) = 0
    char* eax_7 = arg3 + (((esi_4 - 1) * arg2) << 2)
    
    if (esi_4 s> 0)
        int32_t ecx_7 = ecx_3
        int32_t edx_2 = arg2 << 3
        int32_t i
        
        do
            if (arg2 s> 0)
                int32_t j_1 = arg2
                int32_t j
                
                do
                    *edi_1 = *eax_7
                    *(edi_1 + 1) = eax_7[1]
                    char ecx_10 = eax_7[2]
                    eax_7 = &eax_7[4]
                    *(edi_1 + 2) = ecx_10
                    edi_1 += 3
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                ecx_7 = ecx_3
                edx_2 = arg2 << 3
            
            edi_1 += ecx_7
            eax_7 -= edx_2
            i = esi_4
            esi_4 -= 1
        while (i != 1)
    
    char var_210
    sub_4cfd70(&var_210, arg5)
    char* esi_5 = &var_210
    int32_t eax_8 = sub_4d1610(&var_210, 0x5c)
    void var_20f
    
    if (eax_8 != 0xffffffff)
        esi_5 = &var_20f + eax_8
    int32_t eax_9 = sub_4d1610(esi_5, 0x2e)
    
    if (eax_9 == 0xffffffff)
        eax_9 = sub_4cfc80(esi_5)
        esi_5 -= 1
    
    void* const var_23c_1 = &data_61cf5c
    sub_4c4e40(sub_4c84d0(&esi_5[eax_9], ".%s"), var_214, &var_210, esi_3 + 0x36, 0xffffffff, 
        0xffffffff)
    result = sub_4d6c40(&var_218, &var_214)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
