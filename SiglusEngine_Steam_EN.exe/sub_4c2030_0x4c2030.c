// 函数: sub_4c2030
// 地址: 0x4c2030
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (data_641b5c == 0 || arg1 == 0)
    return 1

if (*(arg1 + 0x14) == 0)
    return 0

int32_t* eax_1 = *(arg1 + 8)
int32_t var_18
int32_t var_14
int32_t var_10
char* var_c
(*(*eax_1 + 0x2c))(eax_1, 0, 0, &var_c, &var_18, &var_14, &var_10, 2)
void* eax_2 = *(arg1 + 0x10)
char* edi = var_c
char* ecx_1 = eax_2 + edi
int32_t result = 0

if (*(eax_2 + edi) == 0)
    do
        eax_2 += 1
        ecx_1 = &ecx_1[1]
        
        if (eax_2 == *(arg1 + 0xc))
            ecx_1 = edi
            eax_2 = nullptr
        
        if (eax_2 == *(arg1 + 0x18))
            result = 1
            break
    while (*ecx_1 == 0)

int32_t* ecx_2 = *(arg1 + 8)
(*(*ecx_2 + 0x4c))(ecx_2, edi, var_18, var_14, var_10)
return result
