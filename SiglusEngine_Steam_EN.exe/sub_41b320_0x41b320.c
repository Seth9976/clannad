// 函数: sub_41b320
// 地址: 0x41b320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_10 = 0
void* hMem_1 = nullptr
int128_t* var_8 = nullptr
int32_t var_24 = 0
BOOL var_c = 0
int32_t var_28 = 0
BOOL var_1c = 0
int32_t var_2c = 0
sub_41b810(arg1, arg2 - 4, arg3 + 4, 0x89f4622d)
uint32_t result = sub_4bb540(&var_10, &hMem_1, arg3 + 4, &var_10)

if (result == 0)
    return result

char ecx_4 = sub_4d6960(
    sub_4d6960(result, &var_8, &var_24, result, "avg_database_expand temp_map_a"), &var_c, &var_28, 
    result, "avg_database_expand temp_map_b")
int128_t* edi = var_8
int32_t eax_3
int32_t edx_4
edx_4:eax_3 = sx.q(result)
int32_t eax_6
int32_t edx_6
edx_6:eax_6 = sx.q((eax_3 + (edx_4 & 0xf)) s>> 4)
int32_t var_3c_1 = 0
int32_t ebx_2 = ((edx_6 & 3) + eax_6) s>> 2
int32_t var_4c = ebx_2
void* eax_7
char ecx_6
eax_7, ecx_6 = sub_41b890(eax_6, var_10, edi, ecx_4)
int32_t var_3c_2 = 1
int32_t var_4c_1 = ebx_2
BOOL ebx_3 = var_c
sub_41b810(sub_41b810(sub_41b890(eax_7, var_10, ebx_3, ecx_6), result, edi, 0x7190c70e), result, 
    ebx_3, 0x499bf135)
void* hMem = hMem_1
GlobalUnlock(hMem)
BOOL eax_11
char ecx_11
eax_11, ecx_11 =
    sub_4d6960(GlobalFree(hMem), &var_1c, &var_2c, result, "avg_database_expand src_map")
void* esi_1 = var_1c
int32_t var_3c_5 = 0
int32_t var_4c_2 = ebx_2
void* eax_12
char ecx_13
eax_12, ecx_13 = sub_41b890(eax_11, edi, esi_1, ecx_11)
int32_t var_3c_6 = 1
int32_t var_4c_3 = ebx_2
sub_41b890(eax_12, ebx_3, esi_1, ecx_13)
sub_4d6c40(&var_24, &var_8)
sub_4d6c40(&var_28, &var_c)
*arg4 = var_2c
*arg5 = esi_1
return 1
