// 函数: sub_4a8300
// 地址: 0x4a8300
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_1c
void* var_14
int32_t result = sub_4a8110(&var_1c, &var_14)

if (result == 0)
    return result

void* ebx_1 = var_1c
void* edi_1 = var_14
int32_t var_10 = 0
BOOL var_c = 0
int32_t eax_2 = (ebx_1 * edi_1) << 2
BOOL eax_3 = sub_4d6960(eax_2, &var_c, &var_10, eax_2, "SaveExclusiveThumbnail")
uint32_t* var_34 = nullptr
int32_t var_30 = 0
int32_t eax_4
int32_t edx_3
eax_4, edx_3 = sub_427370(eax_3, arg3, &var_34, 0xffffffff, 0, 1, 0, nullptr, 0, 0)

if (var_34 != 0)
    int32_t var_dc_1 = 0
    int32_t var_e0_2 = 1
    void var_c8
    void* ecx_4 = sub_41cc90(eax_4, edx_3, &var_c8)
    BOOL esi_1 = var_c
    int32_t var_dc_2 = 1
    sub_425050(&var_34, ebx_1, esi_1, edi_1, &var_34, &var_c8, ecx_4, 0)
    *arg2 = var_10
    *arg4 = esi_1
    
    if (arg5 != 0)
        *arg5 = ebx_1
    
    if (arg6 != 0)
        *arg6 = edi_1

return sub_4d6c40(&var_34, &var_30)
