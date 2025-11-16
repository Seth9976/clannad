// 函数: sub_461d30
// 地址: 0x461d30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i_2 = 0x40
char* result = arg4 + 0x40
int32_t i

do
    result[0xffffffc0] = 0
    *result = 0
    result = &result[1]
    i = i_2
    i_2 -= 1
while (i != 1)

if (*arg3 != 0x28)
    result.b = 0
    return result

char* ecx = &arg3[1]
int32_t var_18 = 0
int32_t i_1 = 0
int32_t var_14 = 0
char* var_8 = ecx

if (data_1af4e84 s> 0)
    do
        char* var_1c
        sub_4ef440(&var_1c, &var_8, ecx, "$@", &var_1c)
        char* eax_1 = var_1c
        
        if (eax_1 u<= 0x3f)
            *(eax_1 + arg4) = 1
        
        sub_4eef40(&var_1c, 1)
        ecx = var_8
        
        while (true)
            result.b = *ecx
            
            if (result.b != 0x2c && result.b != 0x20)
                break
            
            ecx = &ecx[1]
        
        i_1 += 1
        var_8 = ecx
    while (i_1 s< data_1af4e84)

result.b = 1
return result
