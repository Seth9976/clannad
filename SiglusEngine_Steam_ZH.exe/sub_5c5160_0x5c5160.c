// 函数: sub_5c5160
// 地址: 0x5c5160
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0x80070057

int32_t edi
int32_t var_c = edi
int32_t var_10 = 0xb94bc4
void (__stdcall** eax_1)(void* arg1)
void* ebp
int32_t esi
eax_1, ebp = sub_746f27(esi, edi, 0xc)

if (eax_1 == 0)
    return 0x8007000e

int32_t eax_3 = *(ebp + 8)
int32_t var_10_1 = esi
*eax_1 = sub_5c58e0
eax_1[1] = eax_3
EnterCriticalSection(arg1 + 0xc)
eax_1[2] = *(arg1 + 8)
*(arg1 + 8) = eax_1
LeaveCriticalSection(arg1 + 0xc)
return 0
