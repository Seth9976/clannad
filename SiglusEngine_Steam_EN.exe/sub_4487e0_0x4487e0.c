// 函数: sub_4487e0
// 地址: 0x4487e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t result_1 = 0xffffffff
data_1af4514 = 0
bool cond:0 = data_13339d8 != 0
data_1af4510 = 0xffffffff
uint32_t result
uint32_t result_2
char rootPathName

if (cond:0)
    char var_224
    sub_4cfd70(&var_224, &data_13339d8)
    char* esi = &var_224
    int32_t eax_3 = sub_4d1610(&var_224, 0x5c)
    void var_223
    
    if (eax_3 != 0xffffffff)
        esi = &var_223 + eax_3
    int32_t eax_4 = sub_4d1610(esi, 0x2e)
    
    if (eax_4 == 0xffffffff)
        eax_4 = sub_4cfc80(esi)
        esi -= 1
    
    void* const var_238_3 = &data_61736c
    sub_4c84d0(&esi[eax_4], ".%s")
    result_2 = 0
    
    while (true)
        int32_t var_238_4 = result_2 + 0x61
        sub_4c84d0(&rootPathName, "%c:\")
        result = GetDriveTypeA(&rootPathName)
        
        if (result == 5)
            result = sub_4c3b10(result_2)
            
            if (result != 0)
                data_1af4514 = 1
                break
            
            if (result_1 == 0xffffffff)
                result_1 = result_2
        
        result_2 += 1
        
        if (result_2 s>= 0x1a)
            if (data_1af4514 == 0)
                result.b = data_13337d0
                uint32_t eax_8
                
                if (result.b != 0)
                    uint32_t var_238_6 = zx.d(result.b)
                    sub_4c84d0(&rootPathName, "%c:\")
                    char* ecx_8 = &rootPathName
                    
                    while (true)
                        char eax_7 = *ecx_8
                        
                        if (eax_7 u>= 0x80 && (eax_7 u< 0xa0 || eax_7 u> 0xdf) && eax_7 u< 0xfe)
                            ecx_8 = &ecx_8[2]
                            continue
                        
                        if (eax_7 == 0)
                            break
                        
                        if (eax_7 u>= 0x41 && eax_7 u<= 0x5a)
                            *ecx_8 = eax_7 + 0x20
                        
                        ecx_8 = &ecx_8[1]
                    
                    eax_8 = GetDriveTypeA(&rootPathName)
                
                if (result.b == 0 || eax_8 != 5)
                    result = data_1af4510
                else
                    result = zx.d(rootPathName) - 0x61
                
                if (result == 0xffffffff)
                    result = result_1
                
                bool cond:2_1 = data_702fc0 == 0
                data_1af4510 = result
                
                if (not(cond:2_1))
                    result = sub_4c3da0(result, 0, &var_224, 0xffffffff)
                    int32_t ecx_12 = data_1af4514
                    
                    if (result == 1)
                        ecx_12 = 2
                    
                    data_1af4514 = ecx_12
            
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return result
else
    result_2 = 0
    
    while (true)
        int32_t var_238_1 = result_2 + 0x61
        sub_4c84d0(&rootPathName, "%c:\")
        result = GetDriveTypeA(&rootPathName)
        
        if (result == 5)
            break
        
        result_2 += 1
        
        if (result_2 s>= 0x1a)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return result
data_1af4510 = result_2
sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
