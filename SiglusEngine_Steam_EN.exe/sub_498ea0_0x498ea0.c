// 函数: sub_498ea0
// 地址: 0x498ea0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
BOOL var_214 = 0
int32_t var_21c = 0
void var_210
int32_t eax_2 = sub_48e820(arg1, &var_210)
char* result

if (eax_2 == 1)
    result = sub_4c4810(&var_214, &var_21c, &var_210, &var_214, "SEEN_DATA", 0xffffffff, 0xffffffff)
label_498f3c:
    BOOL ecx_2 = var_214
    
    if (ecx_2 != 0)
        int32_t eax_10
        int32_t edx_3
        edx_3:eax_10 = sx.q(*(ecx_2 + 4))
        result = divs.dp.d(edx_3:eax_10, 0x64)
        
        if (mods.dp.d(edx_3:eax_10, 0x64) == 2)
            result = *(ecx_2 + 0x18)
            char* result_1 = result
            
            if (result != 0)
                result = *(ecx_2 + 0x14) + ecx_2
                char* i_1 = result_1
                
                if (i_1 s> 0)
                    int32_t edx_5 = data_1bfdd50
                    int32_t ebx
                    int32_t var_224_1 = ebx
                    char* i
                    
                    do
                        int32_t ebx_2 = *result
                        void* eax_12 = &result[4]
                        var_214 = eax_12
                        
                        if (edx_5 s< 0x200)
                            void* esi_1 = data_1bfdd4c
                            int32_t edi_1 = 0
                            
                            if (edx_5 s> 0)
                                do
                                    if (*(esi_1 + 0x44) == ebx_2)
                                        eax_12 = sub_4d1be0(eax_12, eax_12, esi_1 + 1, ebx_2)
                                        edx_5 = data_1bfdd50
                                        
                                        if (eax_12 == 0)
                                            break
                                        
                                        eax_12 = var_214
                                    
                                    edi_1 += 1
                                    esi_1 += 0x98
                                while (edi_1 s< edx_5)
                                
                                i_1 = result_1
                            
                            if (edi_1 == edx_5)
                                char* ecx_4 = nullptr
                                
                                if (ebx_2 s> 0)
                                    BOOL edi_2 = var_214
                                    
                                    do
                                        eax_12.b = ecx_4[edi_2]
                                        *(esi_1 + ecx_4 + 1) = eax_12.b
                                        ecx_4 = &ecx_4[1]
                                    while (ecx_4 s< ebx_2)
                                
                                i_1 = result_1
                                edx_5 += 1
                                *(esi_1 + 0x44) = ebx_2
                                data_1bfdd50 = edx_5
                            
                            eax_12 = var_214
                        
                        result = eax_12 + ebx_2
                        i = i_1
                        i_1 -= 1
                        result_1 = i_1
                    while (i != 1)
        
        if (var_21c != 0)
            result = sub_4d6c40(&var_21c, &var_214)
else
    result = eax_2 - 2
    
    if (eax_2 == 2)
        int32_t eax_4 = data_1b8be84
        result = sub_4c4a00(&var_214, &var_21c, &var_210, &var_214, "SEEN_DATA", 
            *(eax_4 + (arg1 << 3)) + data_1af44c8, *(eax_4 + (arg1 << 3) + 4), 0xffffffff, 
            0xffffffff)
        goto label_498f3c

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
