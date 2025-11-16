// 函数: sub_4d9ae0
// 地址: 0x4d9ae0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0x80070057

int32_t edi
int32_t var_8 = edi
int32_t var_c = 0x640fa8
int32_t esi
void (__stdcall** eax_1)(void* arg1) = operator new(esi, edi, 0xc)

if (eax_1 == 0)
    return 0x8007000e

int32_t var_c_1 = esi
*eax_1 = sub_4d9e70
eax_1[1] = &data_6400e0
EnterCriticalSection(arg1 + 0xc)
eax_1[2] = *(arg1 + 8)
*(arg1 + 8) = eax_1
LeaveCriticalSection(arg1 + 0xc)
return 0
