// 函数: sub_4f7dd0
// 地址: 0x4f7dd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_334
sub_4d1ba0(eax_1, 0x2d4, &var_334, 0)
int32_t eax_2 = data_1af4e84
int32_t var_114 = 0xffffffff
int32_t edx_1

if (eax_2 == 0)
    sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), "S$$$$$$$", &data_1b8a720)
    data_1b8a7c0 = 0xffffffff
    data_1b8a7d4 = 0xffffffff
    data_1b8a7e8 = 0xffffffff
    edx_1 = 0
    data_1b8a7fc = edx_1
else if (eax_2 == 1)
    sub_4ef190(eax_2 - 1, arg2 + 0x20, *(arg2 + 0x20), "S$$$$$$$$$$", &data_1b8a720)
    edx_1 = 1
    data_1b8a7fc = edx_1
else if (eax_2 != 2)
    edx_1 = data_1b8a7fc
else
    sub_4ef190(eax_2 - 2, arg2 + 0x20, *(arg2 + 0x20), "S$$$$$$$$$$$", &data_1b8a720)
    edx_1 = data_1b8a7fc
    
    if (edx_1 s< 0 || edx_1 s> 2)
        edx_1 = 0
        data_1b8a7fc = edx_1

int32_t ecx_4 = data_1b8a75c
var_334 = data_1bfdd30
void* eax_7 = data_1b8a770
int32_t eax_8 = data_1b8a784
int32_t eax_9 = data_1b8a798
int32_t eax_10 = data_1b8a7ac
int32_t eax_11 = data_1b8a7c0
int32_t eax_12 = data_1b8a7d4
char* result = data_1b8a7e8
char* var_d4 = 0xff
char* result_2 = result
char* var_d0 = 0xff

if (ecx_4 u<= 0xf)
    char* eax_13 = data_1b8a728
    char* var_33c_1 = eax_13
    result = sub_4cfc80(eax_13) - 1
    char* result_1 = result
    
    if (result s>= 1)
        void* esi_1 = data_1b8a734
        int32_t edi_1 = data_1b8a748
        void* var_340 = esi_1
        int32_t var_344 = edi_1
        
        while (true)
            void* var_210_1 = esi_1
            char var_5c[0x54]
            int32_t eax_16 = sub_4cfdf0(result, var_33c_1, &var_5c, 0x4a) - 1
            int32_t var_20c_1 = edi_1
            var_33c_1 = &var_33c_1[eax_16]
            result_1 -= eax_16
            int32_t edx_6 = 0
            char (* ecx_8)[0x54] = &var_5c
            char var_330[0x26]
            int32_t esi_2 = sub_4cfdf0(eax_16, &var_5c, &var_330, 0x26) - 1
            
            if (var_5c[0] != 0)
                do
                    int32_t eax_17
                    eax_17.b = *ecx_8
                    
                    if (eax_17.b u< 0x80)
                        edx_6 += 1
                        ecx_8 = &(*ecx_8)[1]
                    else if (eax_17.b u< 0xa0)
                        if (eax_17.b u>= 0xfe)
                            edx_6 += 1
                            ecx_8 = &(*ecx_8)[1]
                        else
                            edx_6 += 2
                            ecx_8 = &(*ecx_8)[2]
                    else if (eax_17.b u<= 0xdf || eax_17.b u>= 0xfe)
                        edx_6 += 1
                        ecx_8 = &(*ecx_8)[1]
                    else
                        edx_6 += 2
                        ecx_8 = &(*ecx_8)[2]
                while (*ecx_8 != 0)
            
            char var_30a[0xf6]
            
            if (edx_6 + 1 s> 0x26)
                sub_4cfdf0(edx_6 + 1, &var_5c[esi_2], &var_30a, 0x26)
            else
                var_30a[0] = 0
            sub_42a6d0(&var_334)
            result = sub_413ad0(&var_340, ecx_4, &var_5c, &var_340, &var_344, eax_7, eax_8, eax_9, 
                eax_10, var_d4, eax_11, eax_12, result_2, var_d0, edx_1)
            
            if (result_1 s<= 0)
                break
            
            esi_1 = var_340
            edi_1 = var_344

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
