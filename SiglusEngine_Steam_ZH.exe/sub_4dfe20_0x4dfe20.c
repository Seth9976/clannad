// 函数: sub_4dfe20
// 地址: 0x4dfe20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t ebx
int32_t var_c = ebx
int32_t esi
int32_t var_10 = esi
void* esi_1 = arg1
void* (__stdcall** result)(int32_t* arg1) = (**(esi_1 + 4))(esi_1, 1, 0x54)
void* ecx_1 = *(esi_1 + 0xdc)
int32_t ebx_1 = 0
bool cond:0 = *(esi_1 + 0x24) s<= 0
*(esi_1 + 0x1c4) = result
*result = sub_4dfac0

if (not(cond:0))
    void* var_8_1 = ecx_1 + 0x50
    arg1 = &result[0xb]
    int32_t edi
    int32_t var_20_1 = edi
    
    do
        int32_t eax_2 = (**(esi_1 + 4))(esi_1, 1, 0x100)
        int32_t* edx_1 = var_8_1
        *edx_1 = eax_2
        __builtin_memset(eax_2, 0, 0x100)
        *arg1 = 0xffffffff
        arg1 += 4
        result = *(esi_1 + 0x24)
        ebx_1 += 1
        var_8_1 = &edx_1[0x15]
    while (ebx_1 s< result)

return result
