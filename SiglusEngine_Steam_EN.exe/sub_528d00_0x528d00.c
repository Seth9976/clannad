// 函数: sub_528d00
// 地址: 0x528d00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_2 = data_1af4e84
char** result
int32_t* ecx
int32_t ebx
int32_t edi

if (eax_2 == 0)
    result, ecx = sub_4ef190(eax_2, &arg2[8], arg2[8], "$@", &data_1b8a720)
    edi = 0xffffffff
    ebx = data_1b8a720
else
    result = eax_2 - 1
    
    if (eax_2 != 1)
        int32_t var_50
        ebx = var_50
        edi = var_50
    else
        result, ecx = sub_4ef190(result, &arg2[8], arg2[8], "$$@", &data_1b8a720)
        edi = data_1b8a734
        ebx = data_1b8a720

if (ebx u<= 0xf)
    int32_t esi_1 = data_1bfdd30
    
    if (esi_1 != 0x28)
        if (esi_1 != 0x29)
            if (esi_1 == 0x2a)
                sub_482680(result, edi, ebx, 3)
        else if (ebx s< 0x10)
            void* edx_3 = ebx * 0x42a0
            sub_4825e0(edx_3 + 0x9331f8)
            *(edx_3 + 0x9331f8) = edi
            *(edx_3 + 0x933200) = 2
    else if (ebx s< 0x10)
        void* edx_2 = ebx * 0x42a0
        sub_4825e0(edx_2 + 0x9331f8)
        *(edx_2 + 0x9331f8) = edi
        *(edx_2 + 0x933200) = 1
    
    int32_t edx_5 = 0
    int32_t* var_58_1 = nullptr
    
    if (data_1b8c884 s> 0)
        while (true)
            if (edx_5 s>= 0x20)
                edx_5 = 0x1f
            
            char* eax_4 = arg2[8]
            
            while (*eax_4 == 0xa)
                eax_4 = &eax_4[3]
                arg2[8] = eax_4
            
            int32_t var_44_1 = 0
            char* var_40_1 = nullptr
            int32_t var_30_1 = 0
            int32_t var_2c_1 = 0
            int32_t var_1c_1 = 0
            int32_t var_18_1 = 0
            void var_48
            int32_t var_34
            int32_t var_20
            
            if (esi_1 == 0x28 || esi_1 == 0x2a)
                sub_4ef190(&var_48, &arg2[8], arg2[8], "S$$", &var_48)
                
                if (ebx u<= 0xf)
                    ecx = ebx * 0x42a0
                    int32_t eax_12 = ecx[0x24cc85]
                    
                    if (eax_12 u<= 0x1f)
                        char* esi_5 = &ecx[0x24cc86 + eax_12 * 0x85]
                        sub_4cfd70(esi_5, var_40_1)
                        *(esi_5 + 0x20c) = var_34
                        *(esi_5 + 0x210) = var_20
                        *(esi_5 + 0x208) = 0
                        ecx[0x24cc85] += 1
            else if (esi_1 == 0x29)
                sub_4ef190(&var_48, &arg2[8], arg2[8], "S$$$", &var_48)
                
                if (ebx u<= 0xf)
                    ecx = ebx * 0x42a0
                    int32_t eax_6 = ecx[0x24cc85]
                    
                    if (eax_6 u<= 0x1f)
                        void* esi_3 = &ecx[0x24cc86 + eax_6 * 0x85]
                        sub_4cfd70(esi_3, var_40_1)
                        *(esi_3 + 0x20c) = var_20
                        int32_t var_c
                        *(esi_3 + 0x210) = var_c
                        *(esi_3 + 0x208) = var_34
                        ecx[0x24cc85] += 1
                        ecx[0x24cc81] += var_34
            char* eax_17 = arg2[8]
            
            while (true)
                ecx.b = *eax_17
                
                if (ecx.b != 0x2c && ecx.b != 0x20)
                    break
                
                eax_17 = &eax_17[1]
            
            arg2[8] = eax_17
            sub_4eef40(&var_48, 3)
            ecx = var_58_1 + 1
            var_58_1 = ecx
            
            if (ecx s>= data_1b8c884)
                break
            
            esi_1 = data_1bfdd30
            edx_5 += 1
    
    result = arg2[8]
    
    while (*result == 0xa)
        result += 3
        arg2[8] = result
    
    arg2[8] += 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
